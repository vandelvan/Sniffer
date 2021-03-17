#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Datos->sizePolicy().setRetainSizeWhenHidden(false);
    ui->Ipv4->sizePolicy().setRetainSizeWhenHidden(false);
    ui->scrollArea->hide();
    hideTypes();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_buscarArchivo_clicked()
{
    std::locale loc;
    QString fileName = QFileDialog::getOpenFileName(this, tr("Abrir bin"), "~/", tr("*.bin"));
    ui->seleccionArchivo->setText(fileName);
    QByteArray byteArray = reader.readFile(fileName);
    if(byteArray == nullptr) return;
    ui->scrollArea->show();
    hideTypes();

    QString macD="",macO="",tipo="",datos="";
    string dump=byteArray.toHex().toStdString();

    macD = splitter.macDestino(dump);
    macO = splitter.macOrigen(dump);
    for(int i=24;i<28;i++)
    {
        tipo+=toupper(dump[i],loc);
    }

    tipo=splitter.ethernetTypeCode(tipo,dump);


    size_t pos = tipo.toStdString().find("\n");
    string aux = tipo.toStdString().substr (pos);
    aux=aux.substr(1,-1);
    datos=QString::fromStdString(aux);
    tipo=QString::fromStdString(tipo.toStdString().substr(0,9));
    showEthernetInfo(tipo,datos);

    ui->macD->setText(macD);
    ui->macO->setText(macO);
    ui->ethType->setText(tipo);

}

void MainWindow::showEthernetInfo(QString tipo,QString data)
{
    QString paquete,aux;

    string cadena,cadena2;
    if(tipo == "0800 IPv4")
    {
        paquete=conversor.toBinary(data);
        ui->Ipv4->show();
        //Version
        cadena=paquete.toStdString().substr(0,4);
        ui->version_Ipv4->setText(conversor.stringToDecimalQString(cadena));

        //Tamaño de cabecera
        cadena=paquete.toStdString().substr(4,4);
        ui->ihl->setText(conversor.stringToDecimalQString(cadena)+" Palabras");

        //Tipo de servicio
        cadena=paquete.toStdString().substr(8,3);
        cadena2="Prioridad: ";
        if(cadena=="000")
            cadena2+="De Rutina\n";
        else if(cadena=="001")
            cadena2+="Prioritario\n";
        else if(cadena=="010")
            cadena2+="Inmediato\n";
        else if(cadena=="011")
            cadena2+="Relampago\n";
        else if(cadena=="100")
            cadena2+="Invalidacion Relampago\n";
        else if(cadena=="101")
            cadena2+="Procesando llamada crítica y de emergencia\n";
        else if(cadena=="110")
            cadena2+="Control de trabajo de Internet\n";
        else if(cadena=="111")
            cadena2+="Control de red\n";
        else
            cadena2+="Error\n";

        cadena=paquete.toStdString().substr(11,1);
        cadena2+="Retardo: "+conversor.bitRead(cadena,1)+"\n";
        cadena=paquete.toStdString().substr(12,1);
        cadena2+="Rendimiento: "+conversor.bitRead(cadena,2)+"\n";
        cadena=paquete.toStdString().substr(13,1);
        cadena2+="Fiabilidad: "+conversor.bitRead(cadena,2)+"\n";
        ui->tipo_Servicio->setPlainText(QString::fromStdString(cadena2));

        //Longitud Total
        cadena=paquete.toStdString().substr(16,16);
        ui->longitud_Total->setText(conversor.stringToDecimalQString(cadena));

        //Identificador
        cadena=paquete.toStdString().substr(32,16);
        ui->ID->setText(conversor.stringToDecimalQString(cadena));

        //Banderas
        cadena=paquete.toStdString().substr(49,1);
        cadena2="Reservado\n";
        cadena2+=conversor.bitRead(cadena,3)+"\n";
        cadena=paquete.toStdString().substr(50,1);
        cadena2+=conversor.bitRead(cadena,4)+"\n";
        ui->flags->setPlainText(QString::fromStdString(cadena2));

        //Posición de fragmento
        cadena=paquete.toStdString().substr(51,13);
        ui->posicionFragmento->setText(conversor.stringToDecimalQString(cadena));

        //Tiempo de vida
        cadena=paquete.toStdString().substr(64,8);
        ui->TTL->setText(conversor.stringToDecimalQString(cadena));

        //Protocolo
        cadena=paquete.toStdString().substr(72,8);
        cadena2=conversor.stringToDecimalQString(cadena).toStdString();
        if(cadena2=="1")
            cadena="ICMPv4";
        else if(cadena2=="6")
            cadena="TCP";
        else if(cadena2=="17")
            cadena="UDP";
        else if(cadena2=="58")
            cadena="ICMPv6";
        else if(cadena2=="118")
            cadena="STP";
        else if(cadena2=="121")
            cadena="SMP";
        else
            cadena="Otro";
        ui->Protocolo->setText(QString::fromStdString(cadena));

        //Checksum
        int i;
        cadena=data.toStdString().substr(30,5);
        cadena2="";
        while(cadena[i])
        {
            if(cadena[i]!=' ')
            {
                cadena2+=cadena[i];
            }
            i++;
        }
        ui->Checksum->setText(QString::fromStdString(cadena2));

        //IP Origen
        cadena=paquete.toStdString().substr(96,8);
        aux=conversor.stringToDecimalQString(cadena)+".";
        cadena=paquete.toStdString().substr(104,8);
        aux+=conversor.stringToDecimalQString(cadena)+".";
        cadena=paquete.toStdString().substr(112,8);
        aux+=conversor.stringToDecimalQString(cadena)+".";
        cadena=paquete.toStdString().substr(120,8);
        aux+=conversor.stringToDecimalQString(cadena);
        ui->IPO->setText(aux);

        //IP Destino
        cadena=paquete.toStdString().substr(128,8);
        aux=conversor.stringToDecimalQString(cadena)+".";
        cadena=paquete.toStdString().substr(136,8);
        aux+=conversor.stringToDecimalQString(cadena)+".";
        cadena=paquete.toStdString().substr(144,8);
        aux+=conversor.stringToDecimalQString(cadena)+".";
        cadena=paquete.toStdString().substr(152,8);
        aux+=conversor.stringToDecimalQString(cadena);
        ui->IPD->setText(aux);

        //Datos extra
        cadena=data.toStdString().substr(60);
        ui->datosExtra->setPlainText(QString::fromStdString(cadena));



    }
    else
    {
        ui->Datos->show();
        ui->dataDump->setPlainText(paquete);
    }

}

void MainWindow::hideTypes()
{
    ui->Datos->hide();
    ui->Ipv4->hide();
}
