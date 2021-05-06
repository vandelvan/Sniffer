#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ui_mainwindow.h>
#include <string>
#include <reader.h>
#include <splitter.h>
#include <QString>
#include <QFileDialog>
#include <QDebug>

using namespace std;

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
    void on_seleccionarArchivo_clicked();

private:
    Ui::MainWindow *ui;
    void showEthernet(string);
    void showIPv4(string);
    void showICMPv4(string);
    void showARP(string);
    void showIPv6(string);
    void showICMPv6(string);
    void showTCP(string);
    void resetIP();
    Reader reader;
    Conversor conversor;
    Splitter splitter;
};
#endif // MAINWINDOW_H
