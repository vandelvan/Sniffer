#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::ethernetTypeCode(QString tipo)
{
    if(tipo=="0800")
    {
        return "IPv4";
    }
    else if(tipo=="0806")
    {
        return "ARP";
    }
    else if(tipo=="8035")
    {
        return "RARP";
    }
    else if(tipo=="86DD")
    {
        return "IPv6";
    }
    else
    {
        return "Invalid Type";
    }
}

void MainWindow::on_buscarArchivo_clicked()
{
    std::locale loc;
    QMessageBox errorMsg;
    QString fileName = QFileDialog::getOpenFileName(this, tr("Abrir bin"), "~/", tr("*.bin"));
    ui->seleccionArchivo->setText(fileName);
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly)){    //Si no se puede abrir
        errorMsg.setText("Error al abrir "+ fileName + "!");
        errorMsg.exec();
        return;
    }
    QByteArray byteArray;
    byteArray = file.readAll(); //toma el contenido del bin
    file.close();
    QString macD="",macO="",tipo="",datos="";
    string dump=byteArray.toHex().toStdString();
    int i;
    for(i=0;i<12;i++)
    {
        macD+=std::toupper(dump[i],loc);
        if((i+1)%2==0 && i!=11)
        {
            macD+=":";
        }
    }
    for(i=12;i<24;i++)
    {
        macO+=std::toupper(dump[i],loc);
        if((i+1)%2==0 && i!=23)
        {
            macO+=":";
        }
    }
    for(i=24;i<28;i++)
    {
        tipo+=std::toupper(dump[i],loc);
    }
    tipo=tipo+" "+ethernetTypeCode(tipo);
    i=28;
    while(dump[i])
    {
        datos+=std::toupper(dump[i],loc);
        i++;
        if(i%2==0)
        {
            datos+=" ";
        }
    }

    ui->macD->setText(macD);
    ui->macO->setText(macO);
    ui->ethType->setText(tipo);
    ui->dataDump->setPlainText(datos);
}
