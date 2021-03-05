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
    ui->dumpArchivo->setPlainText(byteArray.toHex());
}
