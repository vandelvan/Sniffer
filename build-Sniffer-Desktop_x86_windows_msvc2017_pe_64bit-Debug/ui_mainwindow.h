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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
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
    QGroupBox *Ipv4;
    QGridLayout *gridLayout_2;
    QLineEdit *Protocolo;
    QLabel *labelID;
    QLabel *labelFlags;
    QLineEdit *TTL;
    QLabel *labelChecksum;
    QLineEdit *Checksum;
    QLabel *labelversion_ipv4;
    QLineEdit *posicionFragmento;
    QLabel *labelProtocolo;
    QPlainTextEdit *flags;
    QTextEdit *tipo_Servicio;
    QLineEdit *ihl;
    QLineEdit *IPO;
    QLineEdit *ID;
    QLabel *labelIPD;
    QLineEdit *longitud_Total;
    QLabel *labeltipo_Servicio;
    QLabel *labellonTotal;
    QLabel *labelIPO;
    QLabel *labelihl;
    QLineEdit *version_Ipv4;
    QLabel *labelPosicionFrag;
    QLabel *labelTTL;
    QLineEdit *IPD;
    QGroupBox *Datos;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *dataDump;
    QLineEdit *macO;
    QLabel *label;
    QPushButton *buscarArchivo;
    QLabel *seleccionArchivo;
    QLineEdit *ethType;
    QLabel *EthType;
    QLineEdit *macD;
    QLabel *labeldestino;
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
        scrollAreaWidgetContents->setGeometry(QRect(0, -578, 519, 980));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        Ipv4 = new QGroupBox(scrollAreaWidgetContents);
        Ipv4->setObjectName(QString::fromUtf8("Ipv4"));
        Ipv4->setEnabled(true);
        gridLayout_2 = new QGridLayout(Ipv4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Protocolo = new QLineEdit(Ipv4);
        Protocolo->setObjectName(QString::fromUtf8("Protocolo"));

        gridLayout_2->addWidget(Protocolo, 18, 0, 1, 1);

        labelID = new QLabel(Ipv4);
        labelID->setObjectName(QString::fromUtf8("labelID"));

        gridLayout_2->addWidget(labelID, 9, 0, 1, 1);

        labelFlags = new QLabel(Ipv4);
        labelFlags->setObjectName(QString::fromUtf8("labelFlags"));

        gridLayout_2->addWidget(labelFlags, 11, 0, 1, 1);

        TTL = new QLineEdit(Ipv4);
        TTL->setObjectName(QString::fromUtf8("TTL"));
        TTL->setReadOnly(true);

        gridLayout_2->addWidget(TTL, 16, 0, 1, 1);

        labelChecksum = new QLabel(Ipv4);
        labelChecksum->setObjectName(QString::fromUtf8("labelChecksum"));

        gridLayout_2->addWidget(labelChecksum, 19, 0, 1, 1);

        Checksum = new QLineEdit(Ipv4);
        Checksum->setObjectName(QString::fromUtf8("Checksum"));

        gridLayout_2->addWidget(Checksum, 20, 0, 1, 1);

        labelversion_ipv4 = new QLabel(Ipv4);
        labelversion_ipv4->setObjectName(QString::fromUtf8("labelversion_ipv4"));

        gridLayout_2->addWidget(labelversion_ipv4, 1, 0, 1, 1);

        posicionFragmento = new QLineEdit(Ipv4);
        posicionFragmento->setObjectName(QString::fromUtf8("posicionFragmento"));
        posicionFragmento->setReadOnly(false);

        gridLayout_2->addWidget(posicionFragmento, 14, 0, 1, 1);

        labelProtocolo = new QLabel(Ipv4);
        labelProtocolo->setObjectName(QString::fromUtf8("labelProtocolo"));

        gridLayout_2->addWidget(labelProtocolo, 17, 0, 1, 1);

        flags = new QPlainTextEdit(Ipv4);
        flags->setObjectName(QString::fromUtf8("flags"));
        flags->setReadOnly(true);

        gridLayout_2->addWidget(flags, 12, 0, 1, 1);

        tipo_Servicio = new QTextEdit(Ipv4);
        tipo_Servicio->setObjectName(QString::fromUtf8("tipo_Servicio"));
        tipo_Servicio->setReadOnly(true);

        gridLayout_2->addWidget(tipo_Servicio, 6, 0, 1, 1);

        ihl = new QLineEdit(Ipv4);
        ihl->setObjectName(QString::fromUtf8("ihl"));
        ihl->setReadOnly(true);

        gridLayout_2->addWidget(ihl, 4, 0, 1, 1);

        IPO = new QLineEdit(Ipv4);
        IPO->setObjectName(QString::fromUtf8("IPO"));

        gridLayout_2->addWidget(IPO, 22, 0, 1, 1);

        ID = new QLineEdit(Ipv4);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setReadOnly(true);

        gridLayout_2->addWidget(ID, 10, 0, 1, 1);

        labelIPD = new QLabel(Ipv4);
        labelIPD->setObjectName(QString::fromUtf8("labelIPD"));

        gridLayout_2->addWidget(labelIPD, 23, 0, 1, 1);

        longitud_Total = new QLineEdit(Ipv4);
        longitud_Total->setObjectName(QString::fromUtf8("longitud_Total"));
        longitud_Total->setReadOnly(true);

        gridLayout_2->addWidget(longitud_Total, 8, 0, 1, 1);

        labeltipo_Servicio = new QLabel(Ipv4);
        labeltipo_Servicio->setObjectName(QString::fromUtf8("labeltipo_Servicio"));

        gridLayout_2->addWidget(labeltipo_Servicio, 5, 0, 1, 1);

        labellonTotal = new QLabel(Ipv4);
        labellonTotal->setObjectName(QString::fromUtf8("labellonTotal"));

        gridLayout_2->addWidget(labellonTotal, 7, 0, 1, 1);

        labelIPO = new QLabel(Ipv4);
        labelIPO->setObjectName(QString::fromUtf8("labelIPO"));

        gridLayout_2->addWidget(labelIPO, 21, 0, 1, 1);

        labelihl = new QLabel(Ipv4);
        labelihl->setObjectName(QString::fromUtf8("labelihl"));

        gridLayout_2->addWidget(labelihl, 3, 0, 1, 1);

        version_Ipv4 = new QLineEdit(Ipv4);
        version_Ipv4->setObjectName(QString::fromUtf8("version_Ipv4"));
        version_Ipv4->setReadOnly(true);

        gridLayout_2->addWidget(version_Ipv4, 2, 0, 1, 1);

        labelPosicionFrag = new QLabel(Ipv4);
        labelPosicionFrag->setObjectName(QString::fromUtf8("labelPosicionFrag"));

        gridLayout_2->addWidget(labelPosicionFrag, 13, 0, 1, 1);

        labelTTL = new QLabel(Ipv4);
        labelTTL->setObjectName(QString::fromUtf8("labelTTL"));

        gridLayout_2->addWidget(labelTTL, 15, 0, 1, 1);

        IPD = new QLineEdit(Ipv4);
        IPD->setObjectName(QString::fromUtf8("IPD"));

        gridLayout_2->addWidget(IPD, 24, 0, 1, 1);


        gridLayout_4->addWidget(Ipv4, 10, 1, 1, 1);

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

        macO = new QLineEdit(scrollAreaWidgetContents);
        macO->setObjectName(QString::fromUtf8("macO"));
        macO->setReadOnly(true);

        gridLayout_4->addWidget(macO, 6, 1, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 5, 1, 1, 1);

        buscarArchivo = new QPushButton(scrollAreaWidgetContents);
        buscarArchivo->setObjectName(QString::fromUtf8("buscarArchivo"));

        gridLayout_4->addWidget(buscarArchivo, 1, 1, 1, 1);

        seleccionArchivo = new QLabel(scrollAreaWidgetContents);
        seleccionArchivo->setObjectName(QString::fromUtf8("seleccionArchivo"));

        gridLayout_4->addWidget(seleccionArchivo, 0, 1, 1, 1);

        ethType = new QLineEdit(scrollAreaWidgetContents);
        ethType->setObjectName(QString::fromUtf8("ethType"));
        ethType->setReadOnly(true);

        gridLayout_4->addWidget(ethType, 8, 1, 1, 1);

        EthType = new QLabel(scrollAreaWidgetContents);
        EthType->setObjectName(QString::fromUtf8("EthType"));

        gridLayout_4->addWidget(EthType, 7, 1, 1, 1);

        macD = new QLineEdit(scrollAreaWidgetContents);
        macD->setObjectName(QString::fromUtf8("macD"));
        macD->setReadOnly(true);

        gridLayout_4->addWidget(macD, 4, 1, 1, 1);

        labeldestino = new QLabel(scrollAreaWidgetContents);
        labeldestino->setObjectName(QString::fromUtf8("labeldestino"));

        gridLayout_4->addWidget(labeldestino, 2, 1, 1, 1);

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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Ipv4->setTitle(QApplication::translate("MainWindow", "IPv4", nullptr));
        labelID->setText(QApplication::translate("MainWindow", "Identificador:", nullptr));
        labelFlags->setText(QApplication::translate("MainWindow", "Flags:", nullptr));
        labelChecksum->setText(QApplication::translate("MainWindow", "Checksum:", nullptr));
        labelversion_ipv4->setText(QApplication::translate("MainWindow", "Version:", nullptr));
        labelProtocolo->setText(QApplication::translate("MainWindow", "Protocolo:", nullptr));
        labelIPD->setText(QApplication::translate("MainWindow", "IP Destino:", nullptr));
        labeltipo_Servicio->setText(QApplication::translate("MainWindow", "Tipo de servicio:", nullptr));
        labellonTotal->setText(QApplication::translate("MainWindow", "Longitud Total:", nullptr));
        labelIPO->setText(QApplication::translate("MainWindow", "IP Origen:", nullptr));
        labelihl->setText(QApplication::translate("MainWindow", "Tama\303\261o de cabecera (IHL):", nullptr));
        labelPosicionFrag->setText(QApplication::translate("MainWindow", "Posici\303\263n de Fragmento:", nullptr));
        labelTTL->setText(QApplication::translate("MainWindow", "Tiempo de Vida(TTL):", nullptr));
        Datos->setTitle(QApplication::translate("MainWindow", "Datos:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Direccion MAC Origen:", nullptr));
        buscarArchivo->setText(QApplication::translate("MainWindow", "Seleccionar Archivo", nullptr));
        seleccionArchivo->setText(QString());
        EthType->setText(QApplication::translate("MainWindow", "Ethernet Type Code:", nullptr));
        labeldestino->setText(QApplication::translate("MainWindow", "Direccion MAC Destino: ", nullptr));
        Titulo->setText(QApplication::translate("MainWindow", "Sniffer de Red Equipo 1 D03", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
