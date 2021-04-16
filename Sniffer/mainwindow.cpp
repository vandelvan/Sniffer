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
        showIP(dump.substr(28));
        this->resize(440, 800);
    }else{
        this->resize(440, 460);
        ui->datosEthernet->show();
        ui->textEdit->setText(conversor.hexToBinaryQString(dump.substr(28)));
    }
}

void MainWindow::showIP(string dump){
    QString binary = conversor.hexToBinaryQString(dump), protocolo;
    ui->versionIPTxt->setText(splitter.versionIP(binary.mid(0, 4)));
    ui->cabeceraTxt->setText(splitter.tamanoCabecera(binary.mid(4, 4)));
    ui->tipoServicioTxt->setText(splitter.tipoSer(binary.mid(8, 6)));
    ui->longitudTxt->setText(conversor.binarioToDecimal(binary.mid(16, 16)));
    ui->identificadorTxt->setText(conversor.binarioToDecimal(binary.mid(32, 16)));
    ui->flagsTxt->setText(splitter.flags(binary.mid(49, 2)));
    ui->fragmentoTxt->setText(conversor.binarioToDecimal(binary.mid(51, 13)));
    ui->ttlTxt->setText(conversor.binarioToDecimal(binary.mid(64, 8)));
    protocolo=splitter.tipoProtocolo(binary.mid(72, 8));
    ui->protocoloTxt->setText(protocolo);
    ui->checksumTxt->setText(conversor.binarioToHex(binary.mid(80, 16)));
    ui->ipOrigenTxt->setText(splitter.setIP(binary.mid(96, 32)));
    ui->ipDestinoTxt->setText(splitter.setIP(binary.mid(128, 32)));
    ui->datosIP->show();
    if(protocolo=="ICMPv4")
    {
        showICMPv4(dump.substr(40));
    }
}

void MainWindow::showICMPv4(string dump){
    QString binary = conversor.hexToBinaryQString(dump);
    ui->tipoICMPv4Txt->setText(splitter.tipoICMP(binary.mid(0, 8)));
    ui->codeICMPv4Txt->setText(splitter.codigoICMP(binary.mid(8, 8)));
    ui->checksumICMPv4Txt->setText(conversor.binarioToHex(binary.mid(16, 16)));
    ui->datosICMPv4Txt->setText(splitter.setDatos(QString::fromStdString(dump.substr(8)).toUpper()));
    ui->datosICMPv4->show();
}
