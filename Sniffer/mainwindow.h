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
#include <pcap.h>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Ui::MainWindow *ui;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_seleccionarArchivo_clicked();

    void on_sniffBtn_clicked();

private:
    void showEthernet(string);
    void showIPv4(string);
    void showICMPv4(string);
    void showARP(string);
    void showIPv6(string);
    void showICMPv6(string);
    void showTCP(string);
    void showUDP(string);
    void showDNS(string);
    void resetIP();
    Reader reader;
    Conversor conversor;
    Splitter splitter;
    //pcap
    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_if_t *devs;
    pcap_if_t *dev;
    pcap_t *liveData;
};
#endif // MAINWINDOW_H
