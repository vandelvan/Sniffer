/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QPushButton *buscarArchivo;
    QLineEdit *macO;
    QGroupBox *Ipv4;
    QGridLayout *gridLayout_2;
    QLabel *labelversion_ipv4;
    QLineEdit *version_Ipv4;
    QLabel *labeldestino;
    QLabel *EthType;
    QGroupBox *Datos;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *dataDump;
    QLineEdit *ethType;
    QLineEdit *macD;
    QLabel *label;
    QLabel *seleccionArchivo;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *Titulo;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 929);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(0, 0));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 0, 690, 770));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(gridLayoutWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 580, 444));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        buscarArchivo = new QPushButton(scrollAreaWidgetContents);
        buscarArchivo->setObjectName(QString::fromUtf8("buscarArchivo"));

        gridLayout_4->addWidget(buscarArchivo, 1, 1, 1, 1);

        macO = new QLineEdit(scrollAreaWidgetContents);
        macO->setObjectName(QString::fromUtf8("macO"));
        macO->setReadOnly(true);

        gridLayout_4->addWidget(macO, 6, 1, 1, 1);

        Ipv4 = new QGroupBox(scrollAreaWidgetContents);
        Ipv4->setObjectName(QString::fromUtf8("Ipv4"));
        Ipv4->setEnabled(true);
        gridLayout_2 = new QGridLayout(Ipv4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelversion_ipv4 = new QLabel(Ipv4);
        labelversion_ipv4->setObjectName(QString::fromUtf8("labelversion_ipv4"));

        gridLayout_2->addWidget(labelversion_ipv4, 1, 0, 1, 1);

        version_Ipv4 = new QLineEdit(Ipv4);
        version_Ipv4->setObjectName(QString::fromUtf8("version_Ipv4"));
        version_Ipv4->setReadOnly(true);

        gridLayout_2->addWidget(version_Ipv4, 2, 0, 1, 1);


        gridLayout_4->addWidget(Ipv4, 10, 1, 1, 1);

        labeldestino = new QLabel(scrollAreaWidgetContents);
        labeldestino->setObjectName(QString::fromUtf8("labeldestino"));

        gridLayout_4->addWidget(labeldestino, 2, 1, 1, 1);

        EthType = new QLabel(scrollAreaWidgetContents);
        EthType->setObjectName(QString::fromUtf8("EthType"));

        gridLayout_4->addWidget(EthType, 7, 1, 1, 1);

        Datos = new QGroupBox(scrollAreaWidgetContents);
        Datos->setObjectName(QString::fromUtf8("Datos"));
        Datos->setEnabled(true);
        gridLayout_3 = new QGridLayout(Datos);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        dataDump = new QPlainTextEdit(Datos);
        dataDump->setObjectName(QString::fromUtf8("dataDump"));
        dataDump->setReadOnly(true);

        gridLayout_3->addWidget(dataDump, 1, 0, 1, 1);


        gridLayout_4->addWidget(Datos, 9, 1, 1, 1);

        ethType = new QLineEdit(scrollAreaWidgetContents);
        ethType->setObjectName(QString::fromUtf8("ethType"));
        ethType->setReadOnly(true);

        gridLayout_4->addWidget(ethType, 8, 1, 1, 1);

        macD = new QLineEdit(scrollAreaWidgetContents);
        macD->setObjectName(QString::fromUtf8("macD"));
        macD->setReadOnly(true);

        gridLayout_4->addWidget(macD, 4, 1, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 5, 1, 1, 1);

        seleccionArchivo = new QLabel(scrollAreaWidgetContents);
        seleccionArchivo->setObjectName(QString::fromUtf8("seleccionArchivo"));

        gridLayout_4->addWidget(seleccionArchivo, 0, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 2, 2, 3, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 5, 2, 1, 1);

        Titulo = new QLabel(gridLayoutWidget);
        Titulo->setObjectName(QString::fromUtf8("Titulo"));
        QFont font;
        font.setPointSize(32);
        Titulo->setFont(font);

        gridLayout->addWidget(Titulo, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buscarArchivo->setText(QCoreApplication::translate("MainWindow", "Seleccionar Archivo", nullptr));
        Ipv4->setTitle(QCoreApplication::translate("MainWindow", "Ipv4", nullptr));
        labelversion_ipv4->setText(QCoreApplication::translate("MainWindow", "Version", nullptr));
        labeldestino->setText(QCoreApplication::translate("MainWindow", "Direccion MAC Destino: ", nullptr));
        EthType->setText(QCoreApplication::translate("MainWindow", "Ethernet Type Code:", nullptr));
        Datos->setTitle(QCoreApplication::translate("MainWindow", "Datos:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Direccion MAC Origen:", nullptr));
        seleccionArchivo->setText(QString());
        Titulo->setText(QCoreApplication::translate("MainWindow", "Sniffer de red Equipo 1 D03", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
