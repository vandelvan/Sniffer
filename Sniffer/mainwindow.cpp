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
    ui->datosICMPGen->hide();
    ui->datosARP->hide();
    ui->datosTCP->hide();
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
        le->setReadOnly(true);
    }
    foreach(QTextEdit* te, findChildren<QTextEdit*>()) {
        te->setReadOnly(true);
    }
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
    ui->datosICMPGen->hide();
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
    else if(protocolo=="TCP")
    {
        showTCP(dump.substr(40));
    }
    else{
        ui->datosExtTxt->setText(splitter.setDatos(QString::fromStdString(dump.substr(40)).toUpper()));
    }
}

void MainWindow::showICMPv4(string dump){
    ui->datosExt->hide();
    QString binary = conversor.hexToBinaryQString(dump);
    ui->tipoICMPvTxt->setText(splitter.tipoICMP(binary.mid(0, 8)));
    ui->codeICMPvTxt->setText(splitter.codigoICMP(binary.mid(8, 8)));
    ui->checksumICMPvTxt->setText(conversor.binarioToHex(binary.mid(16, 16)));
    ui->datosICMPvTxt->setText(splitter.setDatos(QString::fromStdString(dump.substr(8)).toUpper()));
    ui->datosICMPGen->show();
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
    ui->tipoServicio->setTitle("Clase de trafico:");
    ui->tipoServicioTxt->setText(splitter.tipoSer(binary.mid(4, 8)));
    ui->tipoFlujoTxt->setText(conversor.binarioToDecimal(binary.mid(12,20)));
    ui->longitudTxt->setText(conversor.binarioToDecimal(binary.mid(32, 16)));
    protocolo=splitter.tipoProtocolo(binary.mid(48, 8));
    ui->protocolo->setTitle("Siguiente encabezado:");
    ui->protocoloTxt->setText(protocolo);
    ui->ttl->setTitle("Limite de saltos:");
    ui->ttlTxt->setText(conversor.binarioToDecimal(binary.mid(56, 8)));
    ui->dirOrigenTxt->setText(splitter.mac128(binary.mid(64,128)));
    ui->dirDestinoTxt->setText(splitter.mac128(binary.mid(192,128)));

    if(protocolo=="ICMPv6"){
        showICMPv6(dump.substr(80));
    }
    else{
        ui->datosExtTxt->setText(splitter.setDatos(QString::fromStdString(dump.substr(80)).toUpper()));
    }

}

void MainWindow::showICMPv6(string dump){
    ui->datosExt->hide();
    QString tipoICMPv6=splitter.tipoICMPv6(QString::fromStdString(dump.substr(0, 2)));
    ui->tipoICMPvTxt->setText(tipoICMPv6);
    ui->codeICMPvTxt->setText(splitter.codigoICMPv6(QString::fromStdString(dump.substr(2, 2)), tipoICMPv6));
    ui->checksumICMPvTxt->setText(QString::fromStdString(dump.substr(4, 4)).toUpper());
    ui->datosICMPvTxt->setText(QString::fromStdString(dump.substr(8)).toUpper());
    ui->datosICMPGen->show();

}

void MainWindow::showTCP(string dump){
    ui->datosExt->hide();
    QString binary = conversor.hexToBinaryQString(dump);
    ui->puertoOrigenTCPtxt->setText(splitter.puertosTCP(binary.mid(0,16)));
    ui->puertoDestinoTCPtxt->setText(splitter.puertosTCP(binary.mid(16,16)));
    ui->numeroSecuenciaTCPtxt->setText(conversor.binarioToDecimal(binary.mid(32,32)));
    ui->numeroACKTCPtxt->setText(conversor.binarioToDecimal(binary.mid(64,32)));
    ui->longitudTCPtxt->setText(conversor.binarioToDecimal(binary.mid(96,4)) + " palabras");
    ui->reservadoTCPtxt->setText(conversor.binarioToDecimal(binary.mid(100,3)));
    ui->nonceTCPtxt->setText(binary.mid(103,1));
    ui->cwrTCPtxt->setText(binary.mid(104,1));
    ui->eceTCPtxt->setText(binary.mid(105,1));
    ui->urgTCPtxt->setText(binary.mid(106,1));
    ui->ackTCPtxt->setText(binary.mid(107,1));
    ui->pushTCPtxt->setText(binary.mid(108,1));
    ui->resetTCPtxt->setText(binary.mid(109,1));
    ui->synTCPtxt->setText(binary.mid(110,1));
    ui->finTCPtxt->setText(binary.mid(111,1));
    ui->ventanaTCPtxt->setText(conversor.binarioToDecimal(binary.mid(112,16)));
    ui->checksumTCPtxt->setText(conversor.binarioToHex(binary.mid(128,16)));
    ui->puntUrgenteTCPtxt->setText(conversor.binarioToDecimal(binary.mid(144,16)));
    ui->dumpTCPtxt->setText(splitter.setDatos(QString::fromStdString(dump.substr(20)).toUpper()));
    ui->datosTCP->show();
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
