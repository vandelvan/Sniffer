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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *tituloPrograma;
    QPushButton *seleccionarArchivo;
    QLabel *pathArchivo;
    QScrollArea *datosPaquete;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *macOrigen;
    QLabel *macOrigenLbl;
    QLineEdit *macOrigenTxt;
    QVBoxLayout *macDestino;
    QLabel *macDestinoLbl;
    QLineEdit *macDestinoTxt;
    QVBoxLayout *ethernetType;
    QLabel *etherTypeLbl;
    QLineEdit *etherTypeTxt;
    QGroupBox *datosEthernet;
    QVBoxLayout *verticalLayout;
    QTextEdit *datosEthernetTxt;
    QGroupBox *datosIP;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *versionIP;
    QLabel *versionIPLbl;
    QLineEdit *versionIPTxt;
    QVBoxLayout *cabecera;
    QLabel *cabeceraLbl;
    QLineEdit *cabeceraTxt;
    QVBoxLayout *tipoServicio;
    QLabel *tipoServicioLbl;
    QTextEdit *tipoServicioTxt;
    QVBoxLayout *tipoFlujo;
    QLabel *tipoFlujoLbl;
    QLineEdit *tipoFlujoTxt;
    QVBoxLayout *longitud;
    QLabel *longitudLbl;
    QLineEdit *longitudTxt;
    QVBoxLayout *identificador;
    QLabel *identificadorLbl;
    QLineEdit *identificadorTxt;
    QVBoxLayout *flags;
    QLabel *flagsLbl;
    QTextEdit *flagsTxt;
    QVBoxLayout *fragmento;
    QLabel *fragmentoLbl;
    QLineEdit *fragmentoTxt;
    QVBoxLayout *ttl;
    QLabel *ttlLbl;
    QLineEdit *ttlTxt;
    QVBoxLayout *protocolo;
    QLabel *protocoloLbl;
    QLineEdit *protocoloTxt;
    QVBoxLayout *checksum;
    QLabel *checksumLbl;
    QLineEdit *checksumTxt;
    QVBoxLayout *dirOrigen;
    QLabel *dirOrigenLbl;
    QLineEdit *dirOrigenTxt;
    QVBoxLayout *dirDestino;
    QLabel *dirDestinoLbl;
    QLineEdit *dirDestinoTxt;
    QVBoxLayout *datosExt;
    QLabel *datosExtLbl;
    QTextEdit *datosExtTxt;
    QGroupBox *datosICMPv4;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *tipoICMPv4;
    QLabel *tipoICMPv4Lbl;
    QLineEdit *tipoICMPv4Txt;
    QVBoxLayout *codeICMPv4;
    QLabel *codeICMPv4Lbl;
    QTextEdit *codeICMPv4Txt;
    QVBoxLayout *checksumICMPv4;
    QLabel *checksumICMPv4Lbl;
    QLineEdit *checksumICMPv4Txt;
    QVBoxLayout *datosICMP;
    QLabel *datosICMPv4Lbl;
    QTextEdit *datosICMPv4Txt;
    QGroupBox *datosARP;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *hardARP;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *hardARPtxt;
    QGroupBox *protocoloARP;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *protocoloARPtxt;
    QGroupBox *lngMAC;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *lngMACtxt;
    QGroupBox *lngIP;
    QVBoxLayout *verticalLayout_14;
    QLineEdit *lngIPtxt;
    QGroupBox *opCodeARP;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *opCodeARPtxt;
    QGroupBox *MACARPorg;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *MACARPorgtxt;
    QGroupBox *IPARPorg;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *IPARPorgtxt;
    QGroupBox *MACARPDes;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *MACARPDestxt;
    QGroupBox *IPARPDes;
    QVBoxLayout *verticalLayout_13;
    QLineEdit *IPARPDestxt;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(440, 200);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(440, 200));
        MainWindow->setMaximumSize(QSize(440, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tituloPrograma = new QLabel(centralwidget);
        tituloPrograma->setObjectName(QString::fromUtf8("tituloPrograma"));
        tituloPrograma->setMinimumSize(QSize(0, 30));
        tituloPrograma->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        tituloPrograma->setFont(font);
        tituloPrograma->setFrameShape(QFrame::NoFrame);
        tituloPrograma->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(tituloPrograma);

        seleccionarArchivo = new QPushButton(centralwidget);
        seleccionarArchivo->setObjectName(QString::fromUtf8("seleccionarArchivo"));
        seleccionarArchivo->setMinimumSize(QSize(0, 25));
        seleccionarArchivo->setMaximumSize(QSize(16777215, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        seleccionarArchivo->setFont(font1);

        verticalLayout_4->addWidget(seleccionarArchivo);

        pathArchivo = new QLabel(centralwidget);
        pathArchivo->setObjectName(QString::fromUtf8("pathArchivo"));
        pathArchivo->setMinimumSize(QSize(0, 20));
        pathArchivo->setMaximumSize(QSize(16777215, 20));
        pathArchivo->setFont(font1);

        verticalLayout_4->addWidget(pathArchivo);

        datosPaquete = new QScrollArea(centralwidget);
        datosPaquete->setObjectName(QString::fromUtf8("datosPaquete"));
        datosPaquete->setFont(font1);
        datosPaquete->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, -876, 403, 2331));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        macOrigen = new QVBoxLayout();
        macOrigen->setObjectName(QString::fromUtf8("macOrigen"));
        macOrigenLbl = new QLabel(scrollAreaWidgetContents_2);
        macOrigenLbl->setObjectName(QString::fromUtf8("macOrigenLbl"));

        macOrigen->addWidget(macOrigenLbl);

        macOrigenTxt = new QLineEdit(scrollAreaWidgetContents_2);
        macOrigenTxt->setObjectName(QString::fromUtf8("macOrigenTxt"));

        macOrigen->addWidget(macOrigenTxt);


        verticalLayout_3->addLayout(macOrigen);

        macDestino = new QVBoxLayout();
        macDestino->setObjectName(QString::fromUtf8("macDestino"));
        macDestinoLbl = new QLabel(scrollAreaWidgetContents_2);
        macDestinoLbl->setObjectName(QString::fromUtf8("macDestinoLbl"));

        macDestino->addWidget(macDestinoLbl);

        macDestinoTxt = new QLineEdit(scrollAreaWidgetContents_2);
        macDestinoTxt->setObjectName(QString::fromUtf8("macDestinoTxt"));

        macDestino->addWidget(macDestinoTxt);


        verticalLayout_3->addLayout(macDestino);

        ethernetType = new QVBoxLayout();
        ethernetType->setObjectName(QString::fromUtf8("ethernetType"));
        etherTypeLbl = new QLabel(scrollAreaWidgetContents_2);
        etherTypeLbl->setObjectName(QString::fromUtf8("etherTypeLbl"));

        ethernetType->addWidget(etherTypeLbl);

        etherTypeTxt = new QLineEdit(scrollAreaWidgetContents_2);
        etherTypeTxt->setObjectName(QString::fromUtf8("etherTypeTxt"));

        ethernetType->addWidget(etherTypeTxt);


        verticalLayout_3->addLayout(ethernetType);

        datosEthernet = new QGroupBox(scrollAreaWidgetContents_2);
        datosEthernet->setObjectName(QString::fromUtf8("datosEthernet"));
        datosEthernet->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(datosEthernet->sizePolicy().hasHeightForWidth());
        datosEthernet->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(datosEthernet);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        datosEthernetTxt = new QTextEdit(datosEthernet);
        datosEthernetTxt->setObjectName(QString::fromUtf8("datosEthernetTxt"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(datosEthernetTxt->sizePolicy().hasHeightForWidth());
        datosEthernetTxt->setSizePolicy(sizePolicy2);
        datosEthernetTxt->setMinimumSize(QSize(0, 180));
        datosEthernetTxt->setMaximumSize(QSize(16777215, 180));
        datosEthernetTxt->setMouseTracking(true);
        datosEthernetTxt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(datosEthernetTxt);


        verticalLayout_3->addWidget(datosEthernet);

        datosIP = new QGroupBox(scrollAreaWidgetContents_2);
        datosIP->setObjectName(QString::fromUtf8("datosIP"));
        verticalLayout_2 = new QVBoxLayout(datosIP);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        versionIP = new QVBoxLayout();
        versionIP->setObjectName(QString::fromUtf8("versionIP"));
        versionIPLbl = new QLabel(datosIP);
        versionIPLbl->setObjectName(QString::fromUtf8("versionIPLbl"));

        versionIP->addWidget(versionIPLbl);

        versionIPTxt = new QLineEdit(datosIP);
        versionIPTxt->setObjectName(QString::fromUtf8("versionIPTxt"));

        versionIP->addWidget(versionIPTxt);


        verticalLayout_2->addLayout(versionIP);

        cabecera = new QVBoxLayout();
        cabecera->setObjectName(QString::fromUtf8("cabecera"));
        cabeceraLbl = new QLabel(datosIP);
        cabeceraLbl->setObjectName(QString::fromUtf8("cabeceraLbl"));

        cabecera->addWidget(cabeceraLbl);

        cabeceraTxt = new QLineEdit(datosIP);
        cabeceraTxt->setObjectName(QString::fromUtf8("cabeceraTxt"));

        cabecera->addWidget(cabeceraTxt);


        verticalLayout_2->addLayout(cabecera);

        tipoServicio = new QVBoxLayout();
        tipoServicio->setObjectName(QString::fromUtf8("tipoServicio"));
        tipoServicioLbl = new QLabel(datosIP);
        tipoServicioLbl->setObjectName(QString::fromUtf8("tipoServicioLbl"));

        tipoServicio->addWidget(tipoServicioLbl);

        tipoServicioTxt = new QTextEdit(datosIP);
        tipoServicioTxt->setObjectName(QString::fromUtf8("tipoServicioTxt"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tipoServicioTxt->sizePolicy().hasHeightForWidth());
        tipoServicioTxt->setSizePolicy(sizePolicy3);
        tipoServicioTxt->setMinimumSize(QSize(0, 80));
        tipoServicioTxt->setMaximumSize(QSize(16777215, 80));
        tipoServicioTxt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        tipoServicio->addWidget(tipoServicioTxt);


        verticalLayout_2->addLayout(tipoServicio);

        tipoFlujo = new QVBoxLayout();
        tipoFlujo->setObjectName(QString::fromUtf8("tipoFlujo"));
        tipoFlujoLbl = new QLabel(datosIP);
        tipoFlujoLbl->setObjectName(QString::fromUtf8("tipoFlujoLbl"));
        tipoFlujoLbl->setEnabled(true);

        tipoFlujo->addWidget(tipoFlujoLbl);

        tipoFlujoTxt = new QLineEdit(datosIP);
        tipoFlujoTxt->setObjectName(QString::fromUtf8("tipoFlujoTxt"));
        tipoFlujoTxt->setEnabled(true);
        tipoFlujoTxt->setReadOnly(false);

        tipoFlujo->addWidget(tipoFlujoTxt);


        verticalLayout_2->addLayout(tipoFlujo);

        longitud = new QVBoxLayout();
        longitud->setObjectName(QString::fromUtf8("longitud"));
        longitudLbl = new QLabel(datosIP);
        longitudLbl->setObjectName(QString::fromUtf8("longitudLbl"));

        longitud->addWidget(longitudLbl);

        longitudTxt = new QLineEdit(datosIP);
        longitudTxt->setObjectName(QString::fromUtf8("longitudTxt"));

        longitud->addWidget(longitudTxt);


        verticalLayout_2->addLayout(longitud);

        identificador = new QVBoxLayout();
        identificador->setObjectName(QString::fromUtf8("identificador"));
        identificadorLbl = new QLabel(datosIP);
        identificadorLbl->setObjectName(QString::fromUtf8("identificadorLbl"));

        identificador->addWidget(identificadorLbl);

        identificadorTxt = new QLineEdit(datosIP);
        identificadorTxt->setObjectName(QString::fromUtf8("identificadorTxt"));

        identificador->addWidget(identificadorTxt);


        verticalLayout_2->addLayout(identificador);

        flags = new QVBoxLayout();
        flags->setObjectName(QString::fromUtf8("flags"));
        flagsLbl = new QLabel(datosIP);
        flagsLbl->setObjectName(QString::fromUtf8("flagsLbl"));

        flags->addWidget(flagsLbl);

        flagsTxt = new QTextEdit(datosIP);
        flagsTxt->setObjectName(QString::fromUtf8("flagsTxt"));
        sizePolicy2.setHeightForWidth(flagsTxt->sizePolicy().hasHeightForWidth());
        flagsTxt->setSizePolicy(sizePolicy2);
        flagsTxt->setMinimumSize(QSize(0, 80));
        flagsTxt->setMaximumSize(QSize(16777215, 80));
        flagsTxt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        flags->addWidget(flagsTxt);


        verticalLayout_2->addLayout(flags);

        fragmento = new QVBoxLayout();
        fragmento->setObjectName(QString::fromUtf8("fragmento"));
        fragmentoLbl = new QLabel(datosIP);
        fragmentoLbl->setObjectName(QString::fromUtf8("fragmentoLbl"));

        fragmento->addWidget(fragmentoLbl);

        fragmentoTxt = new QLineEdit(datosIP);
        fragmentoTxt->setObjectName(QString::fromUtf8("fragmentoTxt"));

        fragmento->addWidget(fragmentoTxt);


        verticalLayout_2->addLayout(fragmento);

        ttl = new QVBoxLayout();
        ttl->setObjectName(QString::fromUtf8("ttl"));
        ttlLbl = new QLabel(datosIP);
        ttlLbl->setObjectName(QString::fromUtf8("ttlLbl"));

        ttl->addWidget(ttlLbl);

        ttlTxt = new QLineEdit(datosIP);
        ttlTxt->setObjectName(QString::fromUtf8("ttlTxt"));

        ttl->addWidget(ttlTxt);


        verticalLayout_2->addLayout(ttl);

        protocolo = new QVBoxLayout();
        protocolo->setObjectName(QString::fromUtf8("protocolo"));
        protocoloLbl = new QLabel(datosIP);
        protocoloLbl->setObjectName(QString::fromUtf8("protocoloLbl"));

        protocolo->addWidget(protocoloLbl);

        protocoloTxt = new QLineEdit(datosIP);
        protocoloTxt->setObjectName(QString::fromUtf8("protocoloTxt"));

        protocolo->addWidget(protocoloTxt);


        verticalLayout_2->addLayout(protocolo);

        checksum = new QVBoxLayout();
        checksum->setObjectName(QString::fromUtf8("checksum"));
        checksumLbl = new QLabel(datosIP);
        checksumLbl->setObjectName(QString::fromUtf8("checksumLbl"));

        checksum->addWidget(checksumLbl);

        checksumTxt = new QLineEdit(datosIP);
        checksumTxt->setObjectName(QString::fromUtf8("checksumTxt"));

        checksum->addWidget(checksumTxt);


        verticalLayout_2->addLayout(checksum);

        dirOrigen = new QVBoxLayout();
        dirOrigen->setObjectName(QString::fromUtf8("dirOrigen"));
        dirOrigenLbl = new QLabel(datosIP);
        dirOrigenLbl->setObjectName(QString::fromUtf8("dirOrigenLbl"));

        dirOrigen->addWidget(dirOrigenLbl);

        dirOrigenTxt = new QLineEdit(datosIP);
        dirOrigenTxt->setObjectName(QString::fromUtf8("dirOrigenTxt"));

        dirOrigen->addWidget(dirOrigenTxt);


        verticalLayout_2->addLayout(dirOrigen);

        dirDestino = new QVBoxLayout();
        dirDestino->setObjectName(QString::fromUtf8("dirDestino"));
        dirDestinoLbl = new QLabel(datosIP);
        dirDestinoLbl->setObjectName(QString::fromUtf8("dirDestinoLbl"));

        dirDestino->addWidget(dirDestinoLbl);

        dirDestinoTxt = new QLineEdit(datosIP);
        dirDestinoTxt->setObjectName(QString::fromUtf8("dirDestinoTxt"));

        dirDestino->addWidget(dirDestinoTxt);


        verticalLayout_2->addLayout(dirDestino);

        datosExt = new QVBoxLayout();
        datosExt->setObjectName(QString::fromUtf8("datosExt"));
        datosExtLbl = new QLabel(datosIP);
        datosExtLbl->setObjectName(QString::fromUtf8("datosExtLbl"));

        datosExt->addWidget(datosExtLbl);

        datosExtTxt = new QTextEdit(datosIP);
        datosExtTxt->setObjectName(QString::fromUtf8("datosExtTxt"));

        datosExt->addWidget(datosExtTxt);


        verticalLayout_2->addLayout(datosExt);


        verticalLayout_3->addWidget(datosIP);

        datosICMPv4 = new QGroupBox(scrollAreaWidgetContents_2);
        datosICMPv4->setObjectName(QString::fromUtf8("datosICMPv4"));
        verticalLayout_5 = new QVBoxLayout(datosICMPv4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tipoICMPv4 = new QVBoxLayout();
        tipoICMPv4->setObjectName(QString::fromUtf8("tipoICMPv4"));
        tipoICMPv4Lbl = new QLabel(datosICMPv4);
        tipoICMPv4Lbl->setObjectName(QString::fromUtf8("tipoICMPv4Lbl"));

        tipoICMPv4->addWidget(tipoICMPv4Lbl);

        tipoICMPv4Txt = new QLineEdit(datosICMPv4);
        tipoICMPv4Txt->setObjectName(QString::fromUtf8("tipoICMPv4Txt"));

        tipoICMPv4->addWidget(tipoICMPv4Txt);


        verticalLayout_5->addLayout(tipoICMPv4);

        codeICMPv4 = new QVBoxLayout();
        codeICMPv4->setObjectName(QString::fromUtf8("codeICMPv4"));
        codeICMPv4Lbl = new QLabel(datosICMPv4);
        codeICMPv4Lbl->setObjectName(QString::fromUtf8("codeICMPv4Lbl"));

        codeICMPv4->addWidget(codeICMPv4Lbl);

        codeICMPv4Txt = new QTextEdit(datosICMPv4);
        codeICMPv4Txt->setObjectName(QString::fromUtf8("codeICMPv4Txt"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(codeICMPv4Txt->sizePolicy().hasHeightForWidth());
        codeICMPv4Txt->setSizePolicy(sizePolicy4);
        codeICMPv4Txt->setMinimumSize(QSize(0, 41));
        codeICMPv4Txt->setMaximumSize(QSize(16777215, 41));
        codeICMPv4Txt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        codeICMPv4Txt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        codeICMPv4->addWidget(codeICMPv4Txt);


        verticalLayout_5->addLayout(codeICMPv4);

        checksumICMPv4 = new QVBoxLayout();
        checksumICMPv4->setObjectName(QString::fromUtf8("checksumICMPv4"));
        checksumICMPv4Lbl = new QLabel(datosICMPv4);
        checksumICMPv4Lbl->setObjectName(QString::fromUtf8("checksumICMPv4Lbl"));

        checksumICMPv4->addWidget(checksumICMPv4Lbl);

        checksumICMPv4Txt = new QLineEdit(datosICMPv4);
        checksumICMPv4Txt->setObjectName(QString::fromUtf8("checksumICMPv4Txt"));

        checksumICMPv4->addWidget(checksumICMPv4Txt);


        verticalLayout_5->addLayout(checksumICMPv4);

        datosICMP = new QVBoxLayout();
        datosICMP->setObjectName(QString::fromUtf8("datosICMP"));
        datosICMPv4Lbl = new QLabel(datosICMPv4);
        datosICMPv4Lbl->setObjectName(QString::fromUtf8("datosICMPv4Lbl"));

        datosICMP->addWidget(datosICMPv4Lbl);

        datosICMPv4Txt = new QTextEdit(datosICMPv4);
        datosICMPv4Txt->setObjectName(QString::fromUtf8("datosICMPv4Txt"));
        datosICMPv4Txt->setMinimumSize(QSize(0, 100));
        datosICMPv4Txt->setMaximumSize(QSize(16777215, 100));

        datosICMP->addWidget(datosICMPv4Txt);


        verticalLayout_5->addLayout(datosICMP);


        verticalLayout_3->addWidget(datosICMPv4);

        datosARP = new QGroupBox(scrollAreaWidgetContents_2);
        datosARP->setObjectName(QString::fromUtf8("datosARP"));
        verticalLayout_6 = new QVBoxLayout(datosARP);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        hardARP = new QGroupBox(datosARP);
        hardARP->setObjectName(QString::fromUtf8("hardARP"));
        verticalLayout_8 = new QVBoxLayout(hardARP);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        hardARPtxt = new QLineEdit(hardARP);
        hardARPtxt->setObjectName(QString::fromUtf8("hardARPtxt"));

        verticalLayout_8->addWidget(hardARPtxt);


        verticalLayout_6->addWidget(hardARP);

        protocoloARP = new QGroupBox(datosARP);
        protocoloARP->setObjectName(QString::fromUtf8("protocoloARP"));
        verticalLayout_7 = new QVBoxLayout(protocoloARP);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        protocoloARPtxt = new QLineEdit(protocoloARP);
        protocoloARPtxt->setObjectName(QString::fromUtf8("protocoloARPtxt"));

        verticalLayout_7->addWidget(protocoloARPtxt);


        verticalLayout_6->addWidget(protocoloARP);

        lngMAC = new QGroupBox(datosARP);
        lngMAC->setObjectName(QString::fromUtf8("lngMAC"));
        verticalLayout_15 = new QVBoxLayout(lngMAC);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        lngMACtxt = new QLineEdit(lngMAC);
        lngMACtxt->setObjectName(QString::fromUtf8("lngMACtxt"));

        verticalLayout_15->addWidget(lngMACtxt);


        verticalLayout_6->addWidget(lngMAC);

        lngIP = new QGroupBox(datosARP);
        lngIP->setObjectName(QString::fromUtf8("lngIP"));
        verticalLayout_14 = new QVBoxLayout(lngIP);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        lngIPtxt = new QLineEdit(lngIP);
        lngIPtxt->setObjectName(QString::fromUtf8("lngIPtxt"));

        verticalLayout_14->addWidget(lngIPtxt);


        verticalLayout_6->addWidget(lngIP);

        opCodeARP = new QGroupBox(datosARP);
        opCodeARP->setObjectName(QString::fromUtf8("opCodeARP"));
        verticalLayout_9 = new QVBoxLayout(opCodeARP);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        opCodeARPtxt = new QLineEdit(opCodeARP);
        opCodeARPtxt->setObjectName(QString::fromUtf8("opCodeARPtxt"));

        verticalLayout_9->addWidget(opCodeARPtxt);


        verticalLayout_6->addWidget(opCodeARP);

        MACARPorg = new QGroupBox(datosARP);
        MACARPorg->setObjectName(QString::fromUtf8("MACARPorg"));
        verticalLayout_10 = new QVBoxLayout(MACARPorg);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        MACARPorgtxt = new QLineEdit(MACARPorg);
        MACARPorgtxt->setObjectName(QString::fromUtf8("MACARPorgtxt"));

        verticalLayout_10->addWidget(MACARPorgtxt);


        verticalLayout_6->addWidget(MACARPorg);

        IPARPorg = new QGroupBox(datosARP);
        IPARPorg->setObjectName(QString::fromUtf8("IPARPorg"));
        verticalLayout_11 = new QVBoxLayout(IPARPorg);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        IPARPorgtxt = new QLineEdit(IPARPorg);
        IPARPorgtxt->setObjectName(QString::fromUtf8("IPARPorgtxt"));

        verticalLayout_11->addWidget(IPARPorgtxt);


        verticalLayout_6->addWidget(IPARPorg);

        MACARPDes = new QGroupBox(datosARP);
        MACARPDes->setObjectName(QString::fromUtf8("MACARPDes"));
        verticalLayout_12 = new QVBoxLayout(MACARPDes);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        MACARPDestxt = new QLineEdit(MACARPDes);
        MACARPDestxt->setObjectName(QString::fromUtf8("MACARPDestxt"));

        verticalLayout_12->addWidget(MACARPDestxt);


        verticalLayout_6->addWidget(MACARPDes);

        IPARPDes = new QGroupBox(datosARP);
        IPARPDes->setObjectName(QString::fromUtf8("IPARPDes"));
        verticalLayout_13 = new QVBoxLayout(IPARPDes);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        IPARPDestxt = new QLineEdit(IPARPDes);
        IPARPDestxt->setObjectName(QString::fromUtf8("IPARPDestxt"));

        verticalLayout_13->addWidget(IPARPDestxt);


        verticalLayout_6->addWidget(IPARPDes);


        verticalLayout_3->addWidget(datosARP);

        datosPaquete->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(datosPaquete);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sniffer", nullptr));
        tituloPrograma->setText(QApplication::translate("MainWindow", "Sniffer Equipo 1 (D03)", nullptr));
        seleccionarArchivo->setText(QApplication::translate("MainWindow", "Seleccionar archivo...", nullptr));
        pathArchivo->setText(QApplication::translate("MainWindow", "Ruta archivo...", nullptr));
        macOrigenLbl->setText(QApplication::translate("MainWindow", "Direccion MAC Origen:", nullptr));
        macDestinoLbl->setText(QApplication::translate("MainWindow", "Direccion MAC Destino:", nullptr));
        etherTypeLbl->setText(QApplication::translate("MainWindow", "Ethernet Type Code:", nullptr));
        datosEthernet->setTitle(QApplication::translate("MainWindow", "Datos:", nullptr));
        datosEthernetTxt->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        datosIP->setTitle(QApplication::translate("MainWindow", "IP:", nullptr));
        versionIPLbl->setText(QApplication::translate("MainWindow", "Version:", nullptr));
        cabeceraLbl->setText(QApplication::translate("MainWindow", "Tama\303\261o de cabecera:", nullptr));
        tipoServicioLbl->setText(QApplication::translate("MainWindow", "Tipo de servicio:", nullptr));
        tipoServicioTxt->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tipoFlujoLbl->setText(QApplication::translate("MainWindow", "Tipo de Flujo:", nullptr));
        longitudLbl->setText(QApplication::translate("MainWindow", "Longitud total:", nullptr));
        identificadorLbl->setText(QApplication::translate("MainWindow", "Identificador:", nullptr));
        flagsLbl->setText(QApplication::translate("MainWindow", "Flags:", nullptr));
        flagsTxt->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        fragmentoLbl->setText(QApplication::translate("MainWindow", "Posicion del fragmento: ", nullptr));
        ttlLbl->setText(QApplication::translate("MainWindow", "Tiempo de vida (TTL):", nullptr));
        protocoloLbl->setText(QApplication::translate("MainWindow", "Protocolo:", nullptr));
        checksumLbl->setText(QApplication::translate("MainWindow", "Checksum:", nullptr));
        dirOrigenLbl->setText(QApplication::translate("MainWindow", "Direcci\303\263n origen:", nullptr));
        dirDestinoLbl->setText(QApplication::translate("MainWindow", "Direcci\303\263n destino:", nullptr));
        datosExtLbl->setText(QApplication::translate("MainWindow", "Datos del paquete:", nullptr));
        datosICMPv4->setTitle(QApplication::translate("MainWindow", "ICMP", nullptr));
        tipoICMPv4Lbl->setText(QApplication::translate("MainWindow", "Tipo:", nullptr));
        codeICMPv4Lbl->setText(QApplication::translate("MainWindow", "Codigo:", nullptr));
        codeICMPv4Txt->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        checksumICMPv4Lbl->setText(QApplication::translate("MainWindow", "Checksum:", nullptr));
        datosICMPv4Lbl->setText(QApplication::translate("MainWindow", "Datos ICMP:", nullptr));
        datosARP->setTitle(QApplication::translate("MainWindow", "ARP", nullptr));
        hardARP->setTitle(QApplication::translate("MainWindow", "Hardware", nullptr));
        protocoloARP->setTitle(QApplication::translate("MainWindow", "Tipo Protocolo", nullptr));
        lngMAC->setTitle(QApplication::translate("MainWindow", "Longitud MAC", nullptr));
        lngIP->setTitle(QApplication::translate("MainWindow", "Longitud IP", nullptr));
        opCodeARP->setTitle(QApplication::translate("MainWindow", "Codigo de Operacion", nullptr));
        MACARPorg->setTitle(QApplication::translate("MainWindow", "MAC Origen", nullptr));
        IPARPorg->setTitle(QApplication::translate("MainWindow", "IP Origen", nullptr));
        MACARPDes->setTitle(QApplication::translate("MainWindow", "MAC Destino", nullptr));
        IPARPDes->setTitle(QApplication::translate("MainWindow", "IP Destino", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
