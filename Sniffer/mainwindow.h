#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <splitter.h>
#include <reader.h>
#include <conversor.h>

#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QFile>
#include <QMessageBox>
#include <locale>
#include <string>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buscarArchivo_clicked();

private:
    void showEthernetInfo(QString,QString);
    void hideTypes();
    Ui::MainWindow *ui;
    Splitter splitter;
    Conversor conversor;
    Reader reader;
};
#endif // MAINWINDOW_H
