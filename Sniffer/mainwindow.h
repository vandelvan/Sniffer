#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

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
    void showIP(string);
    void showICMPv4(string);
};
#endif // MAINWINDOW_H
