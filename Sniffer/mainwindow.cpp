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

void MainWindow::on_buscarArchivo_clicked()
{
    std::locale loc;
    QString fileName = QFileDialog::getOpenFileName(this, tr("Abrir bin"), "~/", tr("*.bin"));
    ui->seleccionArchivo->setText(fileName);
    QByteArray byteArray = reader.readFile(fileName);
    if(byteArray == nullptr) return;

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

    ui->macD->setText(macD);
    ui->macO->setText(macO);
    ui->ethType->setText(tipo);
    ui->dataDump->setPlainText(datos);
}
