#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QFile>
#include <QMessageBox>
#include <locale>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QString ethernetTypeCode(QString tipo);
    ~MainWindow();

private slots:
    void on_buscarArchivo_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
