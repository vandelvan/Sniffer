/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *macO;
    QLabel *EthType;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QLabel *Titulo;
    QLineEdit *ethType;
    QSpacerItem *horizontalSpacer_2;
    QLabel *datos;
    QLabel *seleccionArchivo;
    QPushButton *buscarArchivo;
    QLineEdit *macD;
    QLabel *labeldestino;
    QLabel *label;
    QPlainTextEdit *dataDump;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 781, 581));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        macO = new QLineEdit(gridLayoutWidget);
        macO->setObjectName(QString::fromUtf8("macO"));
        macO->setReadOnly(true);

        gridLayout->addWidget(macO, 9, 2, 1, 1);

        EthType = new QLabel(gridLayoutWidget);
        EthType->setObjectName(QString::fromUtf8("EthType"));

        gridLayout->addWidget(EthType, 10, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 14, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        Titulo = new QLabel(gridLayoutWidget);
        Titulo->setObjectName(QString::fromUtf8("Titulo"));
        QFont font;
        font.setPointSize(32);
        Titulo->setFont(font);

        gridLayout->addWidget(Titulo, 1, 2, 1, 1);

        ethType = new QLineEdit(gridLayoutWidget);
        ethType->setObjectName(QString::fromUtf8("ethType"));
        ethType->setReadOnly(true);

        gridLayout->addWidget(ethType, 11, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 3, 1, 1);

        datos = new QLabel(gridLayoutWidget);
        datos->setObjectName(QString::fromUtf8("datos"));

        gridLayout->addWidget(datos, 12, 2, 1, 1);

        seleccionArchivo = new QLabel(gridLayoutWidget);
        seleccionArchivo->setObjectName(QString::fromUtf8("seleccionArchivo"));

        gridLayout->addWidget(seleccionArchivo, 3, 2, 1, 1);

        buscarArchivo = new QPushButton(gridLayoutWidget);
        buscarArchivo->setObjectName(QString::fromUtf8("buscarArchivo"));

        gridLayout->addWidget(buscarArchivo, 5, 2, 1, 1);

        macD = new QLineEdit(gridLayoutWidget);
        macD->setObjectName(QString::fromUtf8("macD"));
        macD->setReadOnly(true);

        gridLayout->addWidget(macD, 7, 2, 1, 1);

        labeldestino = new QLabel(gridLayoutWidget);
        labeldestino->setObjectName(QString::fromUtf8("labeldestino"));

        gridLayout->addWidget(labeldestino, 6, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 8, 2, 1, 1);

        dataDump = new QPlainTextEdit(gridLayoutWidget);
        dataDump->setObjectName(QString::fromUtf8("dataDump"));
        dataDump->setReadOnly(true);

        gridLayout->addWidget(dataDump, 13, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        EthType->setText(QApplication::translate("MainWindow", "Ethernet Type Code:", nullptr));
        Titulo->setText(QApplication::translate("MainWindow", "Practica 1 Cabecera Ethernet", nullptr));
        datos->setText(QApplication::translate("MainWindow", "Datos:", nullptr));
        seleccionArchivo->setText(QString());
        buscarArchivo->setText(QApplication::translate("MainWindow", "Seleccionar Archivo", nullptr));
        labeldestino->setText(QApplication::translate("MainWindow", "Direccion MAC Destino: ", nullptr));
        label->setText(QApplication::translate("MainWindow", "Direccion MAC Origen:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
