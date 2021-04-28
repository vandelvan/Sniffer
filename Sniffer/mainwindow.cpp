#include <mainwindow.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pathArchivo->hide();
    ui->datosPaquete->hide();
    ui->datosEthernet->hide();
    ui->datosIP->hide();
    ui->datosICMPv4->hide();
    ui->datosARP->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_seleccionarArchivo_clicked()
{
    this->resize(440, 200);
    ui->pathArchivo->hide();
    ui->datosPaquete->hide();
    ui->datosEthernet->hide();
    ui->datosIP->hide();
    ui->datosICMPv4->hide();
    ui->datosARP->hide();
    QString fileName = QFileDialog::getOpenFileName(this, tr("Abrir bin"), "~/", tr("*.bin"));
    QByteArray byteArray = reader.readFile(fileName);
    if(byteArray == nullptr)
    {
        return;
    }
    else
    {
        ui->pathArchivo->setText(fileName);
        ui->pathArchivo->show();
        showEthernet(byteArray.toHex().toStdString());
    }
}

void MainWindow::showEthernet(string dump){
    QString tipo="";
    tipo = splitter.tipoCodigo(dump);
    ui->datosPaquete->show();
    ui->macDestinoTxt->setText(splitter.macDestino(dump));
    ui->macOrigenTxt->setText(splitter.macOrigen(dump));
    ui->etherTypeTxt->setText(tipo);
    if(tipo == "0800 IPv4"){
        ui->datosEthernet->hide();
        showIPv4(dump.substr(28));
        this->resize(440, 800);
    }
    else if(tipo == "0806 ARP"){
        ui->datosEthernet->hide();
        showARP(dump.substr(28));
        this->resize(440, 800);
    }
    else if(tipo == "86DD IPv6"){
        ui->datosEthernet->hide();
        showIPv6(dump.substr(28));
        this->resize(440, 800);
    }
    else{
        this->resize(440, 460);
        ui->datosEthernet->show();
        ui->datosEthernetTxt->setText(conversor.hexToBinaryQString(dump.substr(28)));
    }
}

void MainWindow::showIPv4(string dump){
    ui->datosIP->show();
    resetIP();
    //Esconde campos que no utiliza ipv4
    ui->tipoFlujo->hide();

    QString binary = conversor.hexToBinaryQString(dump), protocolo;
    ui->versionIPTxt->setText(splitter.versionIP(binary.mid(0, 4)));
    ui->cabeceraTxt->setText(splitter.tamanoCabecera(binary.mid(4, 4)));
    ui->tipoServicioTxt->setText(splitter.tipoSer(binary.mid(8, 8)));
    ui->longitudTxt->setText(conversor.binarioToDecimal(binary.mid(16, 16)));
    ui->identificadorTxt->setText(conversor.binarioToDecimal(binary.mid(32, 16)));
    ui->flagsTxt->setText(splitter.flags(binary.mid(49, 2)));
    ui->fragmentoTxt->setText(conversor.binarioToDecimal(binary.mid(51, 13)));
    ui->ttlTxt->setText(conversor.binarioToDecimal(binary.mid(64, 8)));
    protocolo=splitter.tipoProtocolo(binary.mid(72, 8));
    ui->protocoloTxt->setText(protocolo);
    ui->checksumTxt->setText(conversor.binarioToHex(binary.mid(80, 16)));
    ui->dirOrigenTxt->setText(splitter.setIP(binary.mid(96, 32)));
    ui->dirDestinoTxt->setText(splitter.setIP(binary.mid(128, 32)));

    if(protocolo=="ICMPv4"){
        showICMPv4(dump.substr(40));
    }
    else{
        ui->datosExtTxt->setText(splitter.setDatos(QString::fromStdString(dump.substr(40)).toUpper()));
    }
}

void MainWindow::showICMPv4(string dump){
    ui->datosExt->hide();
    QString binary = conversor.hexToBinaryQString(dump);
    ui->tipoICMPv4Txt->setText(splitter.tipoICMP(binary.mid(0, 8)));
    ui->codeICMPv4Txt->setText(splitter.codigoICMP(binary.mid(8, 8)));
    ui->checksumICMPv4Txt->setText(conversor.binarioToHex(binary.mid(16, 16)));
    ui->datosICMPv4Txt->setText(splitter.setDatos(QString::fromStdString(dump.substr(8)).toUpper()));
    ui->datosICMPv4->show();
}

void MainWindow::showARP(string dump){
    QString binary = conversor.hexToBinaryQString(dump);
    ui->hardARPtxt->setText(splitter.hardARP(binary.mid(0, 16)));
    ui->protocoloARPtxt->setText(splitter.tipoCodigoARP(binary.mid(16, 16)));
    int lngHard = splitter.getLongitud(binary.mid(32, 8));
    int lngProt = splitter.getLongitud(binary.mid(40, 8));
    ui->lngMACtxt->setText(QString::number(lngHard/8)+" bytes");
    ui->lngIPtxt->setText(QString::number(lngProt/8)+" bytes");
    ui->opCodeARPtxt->setText(splitter.opCodeARP(binary.mid(48,16)));
    ui->MACARPorgtxt->setText(splitter.macDestino(dump.substr(16, (lngHard/4))));
    ui->IPARPorgtxt->setText(splitter.setIP(binary.mid(64+lngHard, lngProt)));
    ui->MACARPDestxt->setText(splitter.macDestino(dump.substr(16+(lngHard/4)+(lngProt/4), (lngHard/4))));
    ui->IPARPDestxt->setText(splitter.setIP(binary.mid(64+lngHard+lngProt+lngHard, lngProt)));
    ui->datosARP->show();
}

void MainWindow::showIPv6(string dump){
    ui->datosIP->show();
    resetIP();
    //Esconde campos que no utiliza ipv6
    ui->cabecera->hide();
    ui->identificador->hide();
    ui->flags->hide();
    ui->fragmento->hide();
    ui->checksum->hide();

    QString binary = conversor.hexToBinaryQString(dump), protocolo;
    ui->versionIPTxt->setText(splitter.versionIP(binary.mid(0, 4)));
    ui->tipoServicio->setTitle("Clase de trafico: ");
    ui->tipoServicioTxt->setText(splitter.tipoSer(binary.mid(4, 8)));
    ui->tipoFlujoTxt->setText(conversor.binarioToDecimal(binary.mid(12,20)));
    ui->longitudTxt->setText(conversor.binarioToDecimal(binary.mid(32, 16)));
    protocolo=splitter.tipoProtocolo(binary.mid(48, 8));
    ui->protocolo->setTitle("Siguiente encabezado: ");
    ui->protocoloTxt->setText(protocolo);
    ui->ttl->setTitle("Limite de saltos: ");
    ui->ttlTxt->setText(conversor.binarioToDecimal(binary.mid(56, 8)));
    ui->dirOrigenTxt->setText(splitter.mac128(binary.mid(64,128)));
    ui->dirDestinoTxt->setText(splitter.mac128(binary.mid(192,128)));
    ui->datosExtTxt->setText(splitter.setDatos(QString::fromStdString(dump.substr(80)).toUpper()));


}

void MainWindow::resetIP()
{
    ui->tipoServicio->setTitle("Tipo de servicio: ");
    ui->protocolo->setTitle("Protocolo: ");
    ui->ttl->setTitle("Tiempo de vida (TTL): ");
    ui->tipoFlujo->show();
    ui->datosExt->show();
    ui->cabecera->show();
    ui->identificador->show();
    ui->flags->show();
    ui->fragmento->show();
    ui->checksum->show();
}
