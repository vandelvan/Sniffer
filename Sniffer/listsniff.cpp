#include "listsniff.h"
#include "ui_listsniff.h"

listSniff::listSniff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listSniff)
{
    ui->setupUi(this);
}

listSniff::~listSniff()
{
    delete ui;
}
