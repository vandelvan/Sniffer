/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
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
    QGroupBox *pcapGroup;
    QVBoxLayout *verticalLayout_43;
    QComboBox *devicesBox;
    QPushButton *sniffBtn;
    QListWidget *pktList;
    QLabel *pathArchivo;
    QScrollArea *datosPaquete;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *macOrigen;
    QVBoxLayout *_2;
    QLineEdit *macOrigenTxt;
    QGroupBox *macDestino;
    QVBoxLayout *_3;
    QLineEdit *macDestinoTxt;
    QGroupBox *ethernetType;
    QVBoxLayout *_4;
    QLineEdit *etherTypeTxt;
    QGroupBox *datosEthernet;
    QVBoxLayout *verticalLayout;
    QTextEdit *datosEthernetTxt;
    QGroupBox *datosIP;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *versionIP;
    QVBoxLayout *_5;
    QLineEdit *versionIPTxt;
    QGroupBox *cabecera;
    QVBoxLayout *_6;
    QLineEdit *cabeceraTxt;
    QGroupBox *tipoServicio;
    QVBoxLayout *_7;
    QTextEdit *tipoServicioTxt;
    QGroupBox *tipoFlujo;
    QVBoxLayout *_8;
    QLineEdit *tipoFlujoTxt;
    QGroupBox *longitud;
    QVBoxLayout *_9;
    QLineEdit *longitudTxt;
    QGroupBox *identificador;
    QVBoxLayout *_10;
    QLineEdit *identificadorTxt;
    QGroupBox *flags;
    QVBoxLayout *_11;
    QTextEdit *flagsTxt;
    QGroupBox *fragmento;
    QVBoxLayout *_12;
    QLineEdit *fragmentoTxt;
    QGroupBox *ttl;
    QVBoxLayout *_13;
    QLineEdit *ttlTxt;
    QGroupBox *protocolo;
    QVBoxLayout *_14;
    QLineEdit *protocoloTxt;
    QGroupBox *checksum;
    QVBoxLayout *_15;
    QLineEdit *checksumTxt;
    QGroupBox *dirOrigen;
    QVBoxLayout *_16;
    QLineEdit *dirOrigenTxt;
    QGroupBox *dirDestino;
    QVBoxLayout *_17;
    QLineEdit *dirDestinoTxt;
    QGroupBox *datosExt;
    QVBoxLayout *_18;
    QTextEdit *datosExtTxt;
    QGroupBox *datosICMPGen;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *tipoICMPv;
    QVBoxLayout *_19;
    QLineEdit *tipoICMPvTxt;
    QGroupBox *codeICMPv;
    QVBoxLayout *_20;
    QTextEdit *codeICMPvTxt;
    QGroupBox *checksumICMPv;
    QVBoxLayout *_21;
    QLineEdit *checksumICMPvTxt;
    QGroupBox *datosICMP;
    QVBoxLayout *_22;
    QTextEdit *datosICMPvTxt;
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
    QGroupBox *datosTCP;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *puertoOrigenTCP;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *puertoOrigenTCPtxt;
    QGroupBox *puertoDestinoTCP;
    QVBoxLayout *verticalLayout_18;
    QLineEdit *puertoDestinoTCPtxt;
    QGroupBox *numeroSecuenciaTCP;
    QVBoxLayout *verticalLayout_19;
    QLineEdit *numeroSecuenciaTCPtxt;
    QGroupBox *numeroACKTCP;
    QVBoxLayout *verticalLayout_20;
    QLineEdit *numeroACKTCPtxt;
    QGroupBox *longitudTCP;
    QVBoxLayout *verticalLayout_21;
    QLineEdit *longitudTCPtxt;
    QGroupBox *banderasTCP;
    QVBoxLayout *verticalLayout_22;
    QGroupBox *reservadoTCP;
    QVBoxLayout *verticalLayout_23;
    QLineEdit *reservadoTCPtxt;
    QGroupBox *nonceTCP;
    QVBoxLayout *verticalLayout_24;
    QLineEdit *nonceTCPtxt;
    QGroupBox *cwrTCP;
    QVBoxLayout *verticalLayout_25;
    QLineEdit *cwrTCPtxt;
    QGroupBox *eceTCP;
    QVBoxLayout *verticalLayout_26;
    QLineEdit *eceTCPtxt;
    QGroupBox *urgTCP;
    QVBoxLayout *verticalLayout_27;
    QLineEdit *urgTCPtxt;
    QGroupBox *ackTCP;
    QVBoxLayout *verticalLayout_28;
    QLineEdit *ackTCPtxt;
    QGroupBox *pushTCP;
    QVBoxLayout *verticalLayout_29;
    QLineEdit *pushTCPtxt;
    QGroupBox *resetTCP;
    QVBoxLayout *verticalLayout_30;
    QLineEdit *resetTCPtxt;
    QGroupBox *synTCP;
    QVBoxLayout *verticalLayout_31;
    QLineEdit *synTCPtxt;
    QGroupBox *finTCP;
    QVBoxLayout *verticalLayout_32;
    QLineEdit *finTCPtxt;
    QGroupBox *ventanaTCP;
    QVBoxLayout *verticalLayout_33;
    QLineEdit *ventanaTCPtxt;
    QGroupBox *checksumTCP;
    QVBoxLayout *verticalLayout_34;
    QLineEdit *checksumTCPtxt;
    QGroupBox *puntUrgenteTCP;
    QVBoxLayout *verticalLayout_35;
    QLineEdit *puntUrgenteTCPtxt;
    QGroupBox *dumpTCP;
    QVBoxLayout *verticalLayout_36;
    QTextEdit *dumpTCPtxt;
    QGroupBox *datosUDP;
    QVBoxLayout *verticalLayout_37;
    QGroupBox *puertoOrigenUDP;
    QVBoxLayout *verticalLayout_38;
    QLineEdit *puertoOrigenUDPtxt;
    QGroupBox *puertoDestinoUDP;
    QVBoxLayout *verticalLayout_39;
    QLineEdit *puertoDestinoUDPtxt;
    QGroupBox *longitudUDP;
    QVBoxLayout *verticalLayout_40;
    QLineEdit *longitudUDPtxt;
    QGroupBox *checksumUDP;
    QVBoxLayout *verticalLayout_41;
    QLineEdit *checksumUDPtxt;
    QGroupBox *dumpUDP;
    QVBoxLayout *verticalLayout_42;
    QTextEdit *dumpUDPtxt;
    QGroupBox *datosDNS;
    QVBoxLayout *verticalLayout_431;
    QGroupBox *idDns;
    QVBoxLayout *verticalLayout_44;
    QLineEdit *idDnsTxt;
    QGroupBox *flagsDns;
    QVBoxLayout *verticalLayout_45;
    QTextEdit *flagsDnsTxt;
    QGroupBox *opCodeDns;
    QVBoxLayout *verticalLayout_46;
    QLineEdit *opCodeDnsTxt;
    QGroupBox *rCodeDns;
    QVBoxLayout *verticalLayout_52;
    QLineEdit *rCodeDnsTxt;
    QGroupBox *QDcount;
    QVBoxLayout *verticalLayout_47;
    QLineEdit *QDcountTxt;
    QGroupBox *ANcount;
    QVBoxLayout *verticalLayout_48;
    QLineEdit *ANcountTxt;
    QGroupBox *NScount;
    QVBoxLayout *verticalLayout_49;
    QLineEdit *NScountTxt;
    QGroupBox *ARcount;
    QVBoxLayout *verticalLayout_50;
    QLineEdit *ARcountTxt;
    QGroupBox *PreguntaDNS;
    QVBoxLayout *verticalLayout_51;
    QGroupBox *nombreDominio;
    QVBoxLayout *verticalLayout_53;
    QLineEdit *nombreDominioTxt;
    QGroupBox *preguntaTipoDns;
    QVBoxLayout *verticalLayout_54;
    QLineEdit *preguntaTipoDnsTxt;
    QGroupBox *preguntaClaseDns;
    QVBoxLayout *verticalLayout_55;
    QLineEdit *preguntaClaseDnsTxt;

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
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        font.setBold(true);
        tituloPrograma->setFont(font);
        tituloPrograma->setFrameShape(QFrame::NoFrame);
        tituloPrograma->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(tituloPrograma);

        seleccionarArchivo = new QPushButton(centralwidget);
        seleccionarArchivo->setObjectName(QString::fromUtf8("seleccionarArchivo"));
        seleccionarArchivo->setMinimumSize(QSize(0, 25));
        seleccionarArchivo->setMaximumSize(QSize(16777215, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(11);
        seleccionarArchivo->setFont(font1);

        verticalLayout_4->addWidget(seleccionarArchivo);

        pcapGroup = new QGroupBox(centralwidget);
        pcapGroup->setObjectName(QString::fromUtf8("pcapGroup"));
        verticalLayout_43 = new QVBoxLayout(pcapGroup);
        verticalLayout_43->setObjectName(QString::fromUtf8("verticalLayout_43"));
        devicesBox = new QComboBox(pcapGroup);
        devicesBox->setObjectName(QString::fromUtf8("devicesBox"));

        verticalLayout_43->addWidget(devicesBox);

        sniffBtn = new QPushButton(pcapGroup);
        sniffBtn->setObjectName(QString::fromUtf8("sniffBtn"));

        verticalLayout_43->addWidget(sniffBtn);

        pktList = new QListWidget(pcapGroup);
        pktList->setObjectName(QString::fromUtf8("pktList"));
        pktList->setMinimumSize(QSize(100, 100));

        verticalLayout_43->addWidget(pktList);


        verticalLayout_4->addWidget(pcapGroup);

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
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 406, 5930));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        macOrigen = new QGroupBox(scrollAreaWidgetContents_2);
        macOrigen->setObjectName(QString::fromUtf8("macOrigen"));
        _2 = new QVBoxLayout(macOrigen);
        _2->setObjectName(QString::fromUtf8("_2"));
        macOrigenTxt = new QLineEdit(macOrigen);
        macOrigenTxt->setObjectName(QString::fromUtf8("macOrigenTxt"));

        _2->addWidget(macOrigenTxt);


        verticalLayout_3->addWidget(macOrigen);

        macDestino = new QGroupBox(scrollAreaWidgetContents_2);
        macDestino->setObjectName(QString::fromUtf8("macDestino"));
        _3 = new QVBoxLayout(macDestino);
        _3->setObjectName(QString::fromUtf8("_3"));
        macDestinoTxt = new QLineEdit(macDestino);
        macDestinoTxt->setObjectName(QString::fromUtf8("macDestinoTxt"));

        _3->addWidget(macDestinoTxt);


        verticalLayout_3->addWidget(macDestino);

        ethernetType = new QGroupBox(scrollAreaWidgetContents_2);
        ethernetType->setObjectName(QString::fromUtf8("ethernetType"));
        _4 = new QVBoxLayout(ethernetType);
        _4->setObjectName(QString::fromUtf8("_4"));
        etherTypeTxt = new QLineEdit(ethernetType);
        etherTypeTxt->setObjectName(QString::fromUtf8("etherTypeTxt"));

        _4->addWidget(etherTypeTxt);


        verticalLayout_3->addWidget(ethernetType);

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
        versionIP = new QGroupBox(datosIP);
        versionIP->setObjectName(QString::fromUtf8("versionIP"));
        _5 = new QVBoxLayout(versionIP);
        _5->setObjectName(QString::fromUtf8("_5"));
        versionIPTxt = new QLineEdit(versionIP);
        versionIPTxt->setObjectName(QString::fromUtf8("versionIPTxt"));

        _5->addWidget(versionIPTxt);


        verticalLayout_2->addWidget(versionIP);

        cabecera = new QGroupBox(datosIP);
        cabecera->setObjectName(QString::fromUtf8("cabecera"));
        _6 = new QVBoxLayout(cabecera);
        _6->setObjectName(QString::fromUtf8("_6"));
        cabeceraTxt = new QLineEdit(cabecera);
        cabeceraTxt->setObjectName(QString::fromUtf8("cabeceraTxt"));

        _6->addWidget(cabeceraTxt);


        verticalLayout_2->addWidget(cabecera);

        tipoServicio = new QGroupBox(datosIP);
        tipoServicio->setObjectName(QString::fromUtf8("tipoServicio"));
        _7 = new QVBoxLayout(tipoServicio);
        _7->setObjectName(QString::fromUtf8("_7"));
        tipoServicioTxt = new QTextEdit(tipoServicio);
        tipoServicioTxt->setObjectName(QString::fromUtf8("tipoServicioTxt"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tipoServicioTxt->sizePolicy().hasHeightForWidth());
        tipoServicioTxt->setSizePolicy(sizePolicy3);
        tipoServicioTxt->setMinimumSize(QSize(0, 80));
        tipoServicioTxt->setMaximumSize(QSize(16777215, 80));
        tipoServicioTxt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        _7->addWidget(tipoServicioTxt);


        verticalLayout_2->addWidget(tipoServicio);

        tipoFlujo = new QGroupBox(datosIP);
        tipoFlujo->setObjectName(QString::fromUtf8("tipoFlujo"));
        _8 = new QVBoxLayout(tipoFlujo);
        _8->setObjectName(QString::fromUtf8("_8"));
        tipoFlujoTxt = new QLineEdit(tipoFlujo);
        tipoFlujoTxt->setObjectName(QString::fromUtf8("tipoFlujoTxt"));
        tipoFlujoTxt->setEnabled(true);
        tipoFlujoTxt->setReadOnly(false);

        _8->addWidget(tipoFlujoTxt);


        verticalLayout_2->addWidget(tipoFlujo);

        longitud = new QGroupBox(datosIP);
        longitud->setObjectName(QString::fromUtf8("longitud"));
        _9 = new QVBoxLayout(longitud);
        _9->setObjectName(QString::fromUtf8("_9"));
        longitudTxt = new QLineEdit(longitud);
        longitudTxt->setObjectName(QString::fromUtf8("longitudTxt"));

        _9->addWidget(longitudTxt);


        verticalLayout_2->addWidget(longitud);

        identificador = new QGroupBox(datosIP);
        identificador->setObjectName(QString::fromUtf8("identificador"));
        _10 = new QVBoxLayout(identificador);
        _10->setObjectName(QString::fromUtf8("_10"));
        identificadorTxt = new QLineEdit(identificador);
        identificadorTxt->setObjectName(QString::fromUtf8("identificadorTxt"));

        _10->addWidget(identificadorTxt);


        verticalLayout_2->addWidget(identificador);

        flags = new QGroupBox(datosIP);
        flags->setObjectName(QString::fromUtf8("flags"));
        _11 = new QVBoxLayout(flags);
        _11->setObjectName(QString::fromUtf8("_11"));
        flagsTxt = new QTextEdit(flags);
        flagsTxt->setObjectName(QString::fromUtf8("flagsTxt"));
        sizePolicy2.setHeightForWidth(flagsTxt->sizePolicy().hasHeightForWidth());
        flagsTxt->setSizePolicy(sizePolicy2);
        flagsTxt->setMinimumSize(QSize(0, 80));
        flagsTxt->setMaximumSize(QSize(16777215, 80));
        flagsTxt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        _11->addWidget(flagsTxt);


        verticalLayout_2->addWidget(flags);

        fragmento = new QGroupBox(datosIP);
        fragmento->setObjectName(QString::fromUtf8("fragmento"));
        _12 = new QVBoxLayout(fragmento);
        _12->setObjectName(QString::fromUtf8("_12"));
        fragmentoTxt = new QLineEdit(fragmento);
        fragmentoTxt->setObjectName(QString::fromUtf8("fragmentoTxt"));

        _12->addWidget(fragmentoTxt);


        verticalLayout_2->addWidget(fragmento);

        ttl = new QGroupBox(datosIP);
        ttl->setObjectName(QString::fromUtf8("ttl"));
        _13 = new QVBoxLayout(ttl);
        _13->setObjectName(QString::fromUtf8("_13"));
        ttlTxt = new QLineEdit(ttl);
        ttlTxt->setObjectName(QString::fromUtf8("ttlTxt"));

        _13->addWidget(ttlTxt);


        verticalLayout_2->addWidget(ttl);

        protocolo = new QGroupBox(datosIP);
        protocolo->setObjectName(QString::fromUtf8("protocolo"));
        _14 = new QVBoxLayout(protocolo);
        _14->setObjectName(QString::fromUtf8("_14"));
        protocoloTxt = new QLineEdit(protocolo);
        protocoloTxt->setObjectName(QString::fromUtf8("protocoloTxt"));

        _14->addWidget(protocoloTxt);


        verticalLayout_2->addWidget(protocolo);

        checksum = new QGroupBox(datosIP);
        checksum->setObjectName(QString::fromUtf8("checksum"));
        _15 = new QVBoxLayout(checksum);
        _15->setObjectName(QString::fromUtf8("_15"));
        checksumTxt = new QLineEdit(checksum);
        checksumTxt->setObjectName(QString::fromUtf8("checksumTxt"));

        _15->addWidget(checksumTxt);


        verticalLayout_2->addWidget(checksum);

        dirOrigen = new QGroupBox(datosIP);
        dirOrigen->setObjectName(QString::fromUtf8("dirOrigen"));
        _16 = new QVBoxLayout(dirOrigen);
        _16->setObjectName(QString::fromUtf8("_16"));
        dirOrigenTxt = new QLineEdit(dirOrigen);
        dirOrigenTxt->setObjectName(QString::fromUtf8("dirOrigenTxt"));

        _16->addWidget(dirOrigenTxt);


        verticalLayout_2->addWidget(dirOrigen);

        dirDestino = new QGroupBox(datosIP);
        dirDestino->setObjectName(QString::fromUtf8("dirDestino"));
        _17 = new QVBoxLayout(dirDestino);
        _17->setObjectName(QString::fromUtf8("_17"));
        dirDestinoTxt = new QLineEdit(dirDestino);
        dirDestinoTxt->setObjectName(QString::fromUtf8("dirDestinoTxt"));

        _17->addWidget(dirDestinoTxt);


        verticalLayout_2->addWidget(dirDestino);

        datosExt = new QGroupBox(datosIP);
        datosExt->setObjectName(QString::fromUtf8("datosExt"));
        _18 = new QVBoxLayout(datosExt);
        _18->setObjectName(QString::fromUtf8("_18"));
        datosExtTxt = new QTextEdit(datosExt);
        datosExtTxt->setObjectName(QString::fromUtf8("datosExtTxt"));

        _18->addWidget(datosExtTxt);


        verticalLayout_2->addWidget(datosExt);


        verticalLayout_3->addWidget(datosIP);

        datosICMPGen = new QGroupBox(scrollAreaWidgetContents_2);
        datosICMPGen->setObjectName(QString::fromUtf8("datosICMPGen"));
        verticalLayout_5 = new QVBoxLayout(datosICMPGen);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tipoICMPv = new QGroupBox(datosICMPGen);
        tipoICMPv->setObjectName(QString::fromUtf8("tipoICMPv"));
        _19 = new QVBoxLayout(tipoICMPv);
        _19->setObjectName(QString::fromUtf8("_19"));
        tipoICMPvTxt = new QLineEdit(tipoICMPv);
        tipoICMPvTxt->setObjectName(QString::fromUtf8("tipoICMPvTxt"));

        _19->addWidget(tipoICMPvTxt);


        verticalLayout_5->addWidget(tipoICMPv);

        codeICMPv = new QGroupBox(datosICMPGen);
        codeICMPv->setObjectName(QString::fromUtf8("codeICMPv"));
        _20 = new QVBoxLayout(codeICMPv);
        _20->setObjectName(QString::fromUtf8("_20"));
        codeICMPvTxt = new QTextEdit(codeICMPv);
        codeICMPvTxt->setObjectName(QString::fromUtf8("codeICMPvTxt"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(codeICMPvTxt->sizePolicy().hasHeightForWidth());
        codeICMPvTxt->setSizePolicy(sizePolicy4);
        codeICMPvTxt->setMinimumSize(QSize(0, 41));
        codeICMPvTxt->setMaximumSize(QSize(16777215, 41));
        codeICMPvTxt->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        codeICMPvTxt->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        _20->addWidget(codeICMPvTxt);


        verticalLayout_5->addWidget(codeICMPv);

        checksumICMPv = new QGroupBox(datosICMPGen);
        checksumICMPv->setObjectName(QString::fromUtf8("checksumICMPv"));
        _21 = new QVBoxLayout(checksumICMPv);
        _21->setObjectName(QString::fromUtf8("_21"));
        checksumICMPvTxt = new QLineEdit(checksumICMPv);
        checksumICMPvTxt->setObjectName(QString::fromUtf8("checksumICMPvTxt"));

        _21->addWidget(checksumICMPvTxt);


        verticalLayout_5->addWidget(checksumICMPv);

        datosICMP = new QGroupBox(datosICMPGen);
        datosICMP->setObjectName(QString::fromUtf8("datosICMP"));
        _22 = new QVBoxLayout(datosICMP);
        _22->setObjectName(QString::fromUtf8("_22"));
        datosICMPvTxt = new QTextEdit(datosICMP);
        datosICMPvTxt->setObjectName(QString::fromUtf8("datosICMPvTxt"));
        datosICMPvTxt->setMinimumSize(QSize(0, 100));
        datosICMPvTxt->setMaximumSize(QSize(16777215, 100));

        _22->addWidget(datosICMPvTxt);


        verticalLayout_5->addWidget(datosICMP);


        verticalLayout_3->addWidget(datosICMPGen);

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

        datosTCP = new QGroupBox(scrollAreaWidgetContents_2);
        datosTCP->setObjectName(QString::fromUtf8("datosTCP"));
        verticalLayout_16 = new QVBoxLayout(datosTCP);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        puertoOrigenTCP = new QGroupBox(datosTCP);
        puertoOrigenTCP->setObjectName(QString::fromUtf8("puertoOrigenTCP"));
        verticalLayout_17 = new QVBoxLayout(puertoOrigenTCP);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        puertoOrigenTCPtxt = new QLineEdit(puertoOrigenTCP);
        puertoOrigenTCPtxt->setObjectName(QString::fromUtf8("puertoOrigenTCPtxt"));

        verticalLayout_17->addWidget(puertoOrigenTCPtxt);


        verticalLayout_16->addWidget(puertoOrigenTCP);

        puertoDestinoTCP = new QGroupBox(datosTCP);
        puertoDestinoTCP->setObjectName(QString::fromUtf8("puertoDestinoTCP"));
        verticalLayout_18 = new QVBoxLayout(puertoDestinoTCP);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        puertoDestinoTCPtxt = new QLineEdit(puertoDestinoTCP);
        puertoDestinoTCPtxt->setObjectName(QString::fromUtf8("puertoDestinoTCPtxt"));

        verticalLayout_18->addWidget(puertoDestinoTCPtxt);


        verticalLayout_16->addWidget(puertoDestinoTCP);

        numeroSecuenciaTCP = new QGroupBox(datosTCP);
        numeroSecuenciaTCP->setObjectName(QString::fromUtf8("numeroSecuenciaTCP"));
        verticalLayout_19 = new QVBoxLayout(numeroSecuenciaTCP);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        numeroSecuenciaTCPtxt = new QLineEdit(numeroSecuenciaTCP);
        numeroSecuenciaTCPtxt->setObjectName(QString::fromUtf8("numeroSecuenciaTCPtxt"));

        verticalLayout_19->addWidget(numeroSecuenciaTCPtxt);


        verticalLayout_16->addWidget(numeroSecuenciaTCP);

        numeroACKTCP = new QGroupBox(datosTCP);
        numeroACKTCP->setObjectName(QString::fromUtf8("numeroACKTCP"));
        verticalLayout_20 = new QVBoxLayout(numeroACKTCP);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        numeroACKTCPtxt = new QLineEdit(numeroACKTCP);
        numeroACKTCPtxt->setObjectName(QString::fromUtf8("numeroACKTCPtxt"));

        verticalLayout_20->addWidget(numeroACKTCPtxt);


        verticalLayout_16->addWidget(numeroACKTCP);

        longitudTCP = new QGroupBox(datosTCP);
        longitudTCP->setObjectName(QString::fromUtf8("longitudTCP"));
        verticalLayout_21 = new QVBoxLayout(longitudTCP);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        longitudTCPtxt = new QLineEdit(longitudTCP);
        longitudTCPtxt->setObjectName(QString::fromUtf8("longitudTCPtxt"));

        verticalLayout_21->addWidget(longitudTCPtxt);


        verticalLayout_16->addWidget(longitudTCP);

        banderasTCP = new QGroupBox(datosTCP);
        banderasTCP->setObjectName(QString::fromUtf8("banderasTCP"));
        verticalLayout_22 = new QVBoxLayout(banderasTCP);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        reservadoTCP = new QGroupBox(banderasTCP);
        reservadoTCP->setObjectName(QString::fromUtf8("reservadoTCP"));
        verticalLayout_23 = new QVBoxLayout(reservadoTCP);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        reservadoTCPtxt = new QLineEdit(reservadoTCP);
        reservadoTCPtxt->setObjectName(QString::fromUtf8("reservadoTCPtxt"));

        verticalLayout_23->addWidget(reservadoTCPtxt);


        verticalLayout_22->addWidget(reservadoTCP);

        nonceTCP = new QGroupBox(banderasTCP);
        nonceTCP->setObjectName(QString::fromUtf8("nonceTCP"));
        verticalLayout_24 = new QVBoxLayout(nonceTCP);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        nonceTCPtxt = new QLineEdit(nonceTCP);
        nonceTCPtxt->setObjectName(QString::fromUtf8("nonceTCPtxt"));

        verticalLayout_24->addWidget(nonceTCPtxt);


        verticalLayout_22->addWidget(nonceTCP);

        cwrTCP = new QGroupBox(banderasTCP);
        cwrTCP->setObjectName(QString::fromUtf8("cwrTCP"));
        verticalLayout_25 = new QVBoxLayout(cwrTCP);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        cwrTCPtxt = new QLineEdit(cwrTCP);
        cwrTCPtxt->setObjectName(QString::fromUtf8("cwrTCPtxt"));

        verticalLayout_25->addWidget(cwrTCPtxt);


        verticalLayout_22->addWidget(cwrTCP);

        eceTCP = new QGroupBox(banderasTCP);
        eceTCP->setObjectName(QString::fromUtf8("eceTCP"));
        verticalLayout_26 = new QVBoxLayout(eceTCP);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        eceTCPtxt = new QLineEdit(eceTCP);
        eceTCPtxt->setObjectName(QString::fromUtf8("eceTCPtxt"));

        verticalLayout_26->addWidget(eceTCPtxt);


        verticalLayout_22->addWidget(eceTCP);

        urgTCP = new QGroupBox(banderasTCP);
        urgTCP->setObjectName(QString::fromUtf8("urgTCP"));
        verticalLayout_27 = new QVBoxLayout(urgTCP);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        urgTCPtxt = new QLineEdit(urgTCP);
        urgTCPtxt->setObjectName(QString::fromUtf8("urgTCPtxt"));

        verticalLayout_27->addWidget(urgTCPtxt);


        verticalLayout_22->addWidget(urgTCP);

        ackTCP = new QGroupBox(banderasTCP);
        ackTCP->setObjectName(QString::fromUtf8("ackTCP"));
        verticalLayout_28 = new QVBoxLayout(ackTCP);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        ackTCPtxt = new QLineEdit(ackTCP);
        ackTCPtxt->setObjectName(QString::fromUtf8("ackTCPtxt"));

        verticalLayout_28->addWidget(ackTCPtxt);


        verticalLayout_22->addWidget(ackTCP);

        pushTCP = new QGroupBox(banderasTCP);
        pushTCP->setObjectName(QString::fromUtf8("pushTCP"));
        verticalLayout_29 = new QVBoxLayout(pushTCP);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        pushTCPtxt = new QLineEdit(pushTCP);
        pushTCPtxt->setObjectName(QString::fromUtf8("pushTCPtxt"));

        verticalLayout_29->addWidget(pushTCPtxt);


        verticalLayout_22->addWidget(pushTCP);

        resetTCP = new QGroupBox(banderasTCP);
        resetTCP->setObjectName(QString::fromUtf8("resetTCP"));
        verticalLayout_30 = new QVBoxLayout(resetTCP);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        resetTCPtxt = new QLineEdit(resetTCP);
        resetTCPtxt->setObjectName(QString::fromUtf8("resetTCPtxt"));

        verticalLayout_30->addWidget(resetTCPtxt);


        verticalLayout_22->addWidget(resetTCP);

        synTCP = new QGroupBox(banderasTCP);
        synTCP->setObjectName(QString::fromUtf8("synTCP"));
        verticalLayout_31 = new QVBoxLayout(synTCP);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        synTCPtxt = new QLineEdit(synTCP);
        synTCPtxt->setObjectName(QString::fromUtf8("synTCPtxt"));

        verticalLayout_31->addWidget(synTCPtxt);


        verticalLayout_22->addWidget(synTCP);

        finTCP = new QGroupBox(banderasTCP);
        finTCP->setObjectName(QString::fromUtf8("finTCP"));
        verticalLayout_32 = new QVBoxLayout(finTCP);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        finTCPtxt = new QLineEdit(finTCP);
        finTCPtxt->setObjectName(QString::fromUtf8("finTCPtxt"));

        verticalLayout_32->addWidget(finTCPtxt);


        verticalLayout_22->addWidget(finTCP);


        verticalLayout_16->addWidget(banderasTCP);

        ventanaTCP = new QGroupBox(datosTCP);
        ventanaTCP->setObjectName(QString::fromUtf8("ventanaTCP"));
        verticalLayout_33 = new QVBoxLayout(ventanaTCP);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        ventanaTCPtxt = new QLineEdit(ventanaTCP);
        ventanaTCPtxt->setObjectName(QString::fromUtf8("ventanaTCPtxt"));

        verticalLayout_33->addWidget(ventanaTCPtxt);


        verticalLayout_16->addWidget(ventanaTCP);

        checksumTCP = new QGroupBox(datosTCP);
        checksumTCP->setObjectName(QString::fromUtf8("checksumTCP"));
        verticalLayout_34 = new QVBoxLayout(checksumTCP);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        checksumTCPtxt = new QLineEdit(checksumTCP);
        checksumTCPtxt->setObjectName(QString::fromUtf8("checksumTCPtxt"));

        verticalLayout_34->addWidget(checksumTCPtxt);


        verticalLayout_16->addWidget(checksumTCP);

        puntUrgenteTCP = new QGroupBox(datosTCP);
        puntUrgenteTCP->setObjectName(QString::fromUtf8("puntUrgenteTCP"));
        verticalLayout_35 = new QVBoxLayout(puntUrgenteTCP);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        puntUrgenteTCPtxt = new QLineEdit(puntUrgenteTCP);
        puntUrgenteTCPtxt->setObjectName(QString::fromUtf8("puntUrgenteTCPtxt"));

        verticalLayout_35->addWidget(puntUrgenteTCPtxt);


        verticalLayout_16->addWidget(puntUrgenteTCP);

        dumpTCP = new QGroupBox(datosTCP);
        dumpTCP->setObjectName(QString::fromUtf8("dumpTCP"));
        verticalLayout_36 = new QVBoxLayout(dumpTCP);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        dumpTCPtxt = new QTextEdit(dumpTCP);
        dumpTCPtxt->setObjectName(QString::fromUtf8("dumpTCPtxt"));

        verticalLayout_36->addWidget(dumpTCPtxt);


        verticalLayout_16->addWidget(dumpTCP);


        verticalLayout_3->addWidget(datosTCP);

        datosUDP = new QGroupBox(scrollAreaWidgetContents_2);
        datosUDP->setObjectName(QString::fromUtf8("datosUDP"));
        verticalLayout_37 = new QVBoxLayout(datosUDP);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        puertoOrigenUDP = new QGroupBox(datosUDP);
        puertoOrigenUDP->setObjectName(QString::fromUtf8("puertoOrigenUDP"));
        verticalLayout_38 = new QVBoxLayout(puertoOrigenUDP);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        puertoOrigenUDPtxt = new QLineEdit(puertoOrigenUDP);
        puertoOrigenUDPtxt->setObjectName(QString::fromUtf8("puertoOrigenUDPtxt"));
        puertoOrigenUDPtxt->setReadOnly(true);

        verticalLayout_38->addWidget(puertoOrigenUDPtxt);


        verticalLayout_37->addWidget(puertoOrigenUDP);

        puertoDestinoUDP = new QGroupBox(datosUDP);
        puertoDestinoUDP->setObjectName(QString::fromUtf8("puertoDestinoUDP"));
        verticalLayout_39 = new QVBoxLayout(puertoDestinoUDP);
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        puertoDestinoUDPtxt = new QLineEdit(puertoDestinoUDP);
        puertoDestinoUDPtxt->setObjectName(QString::fromUtf8("puertoDestinoUDPtxt"));
        puertoDestinoUDPtxt->setReadOnly(false);

        verticalLayout_39->addWidget(puertoDestinoUDPtxt);


        verticalLayout_37->addWidget(puertoDestinoUDP);

        longitudUDP = new QGroupBox(datosUDP);
        longitudUDP->setObjectName(QString::fromUtf8("longitudUDP"));
        verticalLayout_40 = new QVBoxLayout(longitudUDP);
        verticalLayout_40->setObjectName(QString::fromUtf8("verticalLayout_40"));
        longitudUDPtxt = new QLineEdit(longitudUDP);
        longitudUDPtxt->setObjectName(QString::fromUtf8("longitudUDPtxt"));
        longitudUDPtxt->setReadOnly(true);

        verticalLayout_40->addWidget(longitudUDPtxt);


        verticalLayout_37->addWidget(longitudUDP);

        checksumUDP = new QGroupBox(datosUDP);
        checksumUDP->setObjectName(QString::fromUtf8("checksumUDP"));
        verticalLayout_41 = new QVBoxLayout(checksumUDP);
        verticalLayout_41->setObjectName(QString::fromUtf8("verticalLayout_41"));
        checksumUDPtxt = new QLineEdit(checksumUDP);
        checksumUDPtxt->setObjectName(QString::fromUtf8("checksumUDPtxt"));
        checksumUDPtxt->setReadOnly(true);

        verticalLayout_41->addWidget(checksumUDPtxt);


        verticalLayout_37->addWidget(checksumUDP);

        dumpUDP = new QGroupBox(datosUDP);
        dumpUDP->setObjectName(QString::fromUtf8("dumpUDP"));
        verticalLayout_42 = new QVBoxLayout(dumpUDP);
        verticalLayout_42->setObjectName(QString::fromUtf8("verticalLayout_42"));
        dumpUDPtxt = new QTextEdit(dumpUDP);
        dumpUDPtxt->setObjectName(QString::fromUtf8("dumpUDPtxt"));
        dumpUDPtxt->setReadOnly(true);

        verticalLayout_42->addWidget(dumpUDPtxt);


        verticalLayout_37->addWidget(dumpUDP);


        verticalLayout_3->addWidget(datosUDP);

        datosDNS = new QGroupBox(scrollAreaWidgetContents_2);
        datosDNS->setObjectName(QString::fromUtf8("datosDNS"));
        verticalLayout_431 = new QVBoxLayout(datosDNS);
        verticalLayout_431->setObjectName(QString::fromUtf8("verticalLayout_431"));
        idDns = new QGroupBox(datosDNS);
        idDns->setObjectName(QString::fromUtf8("idDns"));
        verticalLayout_44 = new QVBoxLayout(idDns);
        verticalLayout_44->setObjectName(QString::fromUtf8("verticalLayout_44"));
        idDnsTxt = new QLineEdit(idDns);
        idDnsTxt->setObjectName(QString::fromUtf8("idDnsTxt"));

        verticalLayout_44->addWidget(idDnsTxt);


        verticalLayout_431->addWidget(idDns);

        flagsDns = new QGroupBox(datosDNS);
        flagsDns->setObjectName(QString::fromUtf8("flagsDns"));
        verticalLayout_45 = new QVBoxLayout(flagsDns);
        verticalLayout_45->setObjectName(QString::fromUtf8("verticalLayout_45"));
        flagsDnsTxt = new QTextEdit(flagsDns);
        flagsDnsTxt->setObjectName(QString::fromUtf8("flagsDnsTxt"));
        flagsDnsTxt->setMinimumSize(QSize(0, 150));
        flagsDnsTxt->setReadOnly(true);

        verticalLayout_45->addWidget(flagsDnsTxt);


        verticalLayout_431->addWidget(flagsDns);

        opCodeDns = new QGroupBox(datosDNS);
        opCodeDns->setObjectName(QString::fromUtf8("opCodeDns"));
        verticalLayout_46 = new QVBoxLayout(opCodeDns);
        verticalLayout_46->setObjectName(QString::fromUtf8("verticalLayout_46"));
        opCodeDnsTxt = new QLineEdit(opCodeDns);
        opCodeDnsTxt->setObjectName(QString::fromUtf8("opCodeDnsTxt"));

        verticalLayout_46->addWidget(opCodeDnsTxt);


        verticalLayout_431->addWidget(opCodeDns);

        rCodeDns = new QGroupBox(datosDNS);
        rCodeDns->setObjectName(QString::fromUtf8("rCodeDns"));
        verticalLayout_52 = new QVBoxLayout(rCodeDns);
        verticalLayout_52->setObjectName(QString::fromUtf8("verticalLayout_52"));
        rCodeDnsTxt = new QLineEdit(rCodeDns);
        rCodeDnsTxt->setObjectName(QString::fromUtf8("rCodeDnsTxt"));

        verticalLayout_52->addWidget(rCodeDnsTxt);


        verticalLayout_431->addWidget(rCodeDns);

        QDcount = new QGroupBox(datosDNS);
        QDcount->setObjectName(QString::fromUtf8("QDcount"));
        verticalLayout_47 = new QVBoxLayout(QDcount);
        verticalLayout_47->setObjectName(QString::fromUtf8("verticalLayout_47"));
        QDcountTxt = new QLineEdit(QDcount);
        QDcountTxt->setObjectName(QString::fromUtf8("QDcountTxt"));

        verticalLayout_47->addWidget(QDcountTxt);


        verticalLayout_431->addWidget(QDcount);

        ANcount = new QGroupBox(datosDNS);
        ANcount->setObjectName(QString::fromUtf8("ANcount"));
        verticalLayout_48 = new QVBoxLayout(ANcount);
        verticalLayout_48->setObjectName(QString::fromUtf8("verticalLayout_48"));
        ANcountTxt = new QLineEdit(ANcount);
        ANcountTxt->setObjectName(QString::fromUtf8("ANcountTxt"));

        verticalLayout_48->addWidget(ANcountTxt);


        verticalLayout_431->addWidget(ANcount);

        NScount = new QGroupBox(datosDNS);
        NScount->setObjectName(QString::fromUtf8("NScount"));
        verticalLayout_49 = new QVBoxLayout(NScount);
        verticalLayout_49->setObjectName(QString::fromUtf8("verticalLayout_49"));
        NScountTxt = new QLineEdit(NScount);
        NScountTxt->setObjectName(QString::fromUtf8("NScountTxt"));

        verticalLayout_49->addWidget(NScountTxt);


        verticalLayout_431->addWidget(NScount);

        ARcount = new QGroupBox(datosDNS);
        ARcount->setObjectName(QString::fromUtf8("ARcount"));
        verticalLayout_50 = new QVBoxLayout(ARcount);
        verticalLayout_50->setObjectName(QString::fromUtf8("verticalLayout_50"));
        ARcountTxt = new QLineEdit(ARcount);
        ARcountTxt->setObjectName(QString::fromUtf8("ARcountTxt"));

        verticalLayout_50->addWidget(ARcountTxt);


        verticalLayout_431->addWidget(ARcount);

        PreguntaDNS = new QGroupBox(datosDNS);
        PreguntaDNS->setObjectName(QString::fromUtf8("PreguntaDNS"));
        verticalLayout_51 = new QVBoxLayout(PreguntaDNS);
        verticalLayout_51->setObjectName(QString::fromUtf8("verticalLayout_51"));
        nombreDominio = new QGroupBox(PreguntaDNS);
        nombreDominio->setObjectName(QString::fromUtf8("nombreDominio"));
        verticalLayout_53 = new QVBoxLayout(nombreDominio);
        verticalLayout_53->setObjectName(QString::fromUtf8("verticalLayout_53"));
        nombreDominioTxt = new QLineEdit(nombreDominio);
        nombreDominioTxt->setObjectName(QString::fromUtf8("nombreDominioTxt"));

        verticalLayout_53->addWidget(nombreDominioTxt);


        verticalLayout_51->addWidget(nombreDominio);

        preguntaTipoDns = new QGroupBox(PreguntaDNS);
        preguntaTipoDns->setObjectName(QString::fromUtf8("preguntaTipoDns"));
        verticalLayout_54 = new QVBoxLayout(preguntaTipoDns);
        verticalLayout_54->setObjectName(QString::fromUtf8("verticalLayout_54"));
        preguntaTipoDnsTxt = new QLineEdit(preguntaTipoDns);
        preguntaTipoDnsTxt->setObjectName(QString::fromUtf8("preguntaTipoDnsTxt"));

        verticalLayout_54->addWidget(preguntaTipoDnsTxt);


        verticalLayout_51->addWidget(preguntaTipoDns);

        preguntaClaseDns = new QGroupBox(PreguntaDNS);
        preguntaClaseDns->setObjectName(QString::fromUtf8("preguntaClaseDns"));
        verticalLayout_55 = new QVBoxLayout(preguntaClaseDns);
        verticalLayout_55->setObjectName(QString::fromUtf8("verticalLayout_55"));
        preguntaClaseDnsTxt = new QLineEdit(preguntaClaseDns);
        preguntaClaseDnsTxt->setObjectName(QString::fromUtf8("preguntaClaseDnsTxt"));

        verticalLayout_55->addWidget(preguntaClaseDnsTxt);


        verticalLayout_51->addWidget(preguntaClaseDns);


        verticalLayout_431->addWidget(PreguntaDNS);


        verticalLayout_3->addWidget(datosDNS);

        datosPaquete->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(datosPaquete);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sniffer", nullptr));
        tituloPrograma->setText(QCoreApplication::translate("MainWindow", "Sniffer Equipo 1 (D03)", nullptr));
        seleccionarArchivo->setText(QCoreApplication::translate("MainWindow", "Seleccionar archivo...", nullptr));
        pcapGroup->setTitle(QCoreApplication::translate("MainWindow", "Leer desde tarjeta de red", nullptr));
        sniffBtn->setText(QCoreApplication::translate("MainWindow", "Sniff", nullptr));
        pathArchivo->setText(QCoreApplication::translate("MainWindow", "Ruta archivo...", nullptr));
        macOrigen->setTitle(QCoreApplication::translate("MainWindow", "Direccion MAC Origen:", nullptr));
        macDestino->setTitle(QCoreApplication::translate("MainWindow", "Direccion MAC Destino:", nullptr));
        ethernetType->setTitle(QCoreApplication::translate("MainWindow", "Ethernet Type Code:", nullptr));
        datosEthernet->setTitle(QCoreApplication::translate("MainWindow", "Datos:", nullptr));
        datosEthernetTxt->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        datosIP->setTitle(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        versionIP->setTitle(QCoreApplication::translate("MainWindow", "Version:", nullptr));
        cabecera->setTitle(QCoreApplication::translate("MainWindow", "Tama\303\261o de cabecera:", nullptr));
        tipoServicio->setTitle(QCoreApplication::translate("MainWindow", "Tipo de servicio:", nullptr));
        tipoServicioTxt->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tipoFlujo->setTitle(QCoreApplication::translate("MainWindow", "Tipo de Flujo:", nullptr));
        longitud->setTitle(QCoreApplication::translate("MainWindow", "Longitud total:", nullptr));
        identificador->setTitle(QCoreApplication::translate("MainWindow", "Identificador:", nullptr));
        flags->setTitle(QCoreApplication::translate("MainWindow", "Flags:", nullptr));
        flagsTxt->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        fragmento->setTitle(QCoreApplication::translate("MainWindow", "Posicion del fragmento: ", nullptr));
        ttl->setTitle(QCoreApplication::translate("MainWindow", "Tiempo de vida (TTL):", nullptr));
        protocolo->setTitle(QCoreApplication::translate("MainWindow", "Protocolo:", nullptr));
        checksum->setTitle(QCoreApplication::translate("MainWindow", "Checksum:", nullptr));
        dirOrigen->setTitle(QCoreApplication::translate("MainWindow", "Direcci\303\263n origen:", nullptr));
        dirDestino->setTitle(QCoreApplication::translate("MainWindow", "Direcci\303\263n destino:", nullptr));
        datosExt->setTitle(QCoreApplication::translate("MainWindow", "Datos del paquete:", nullptr));
        datosICMPGen->setTitle(QCoreApplication::translate("MainWindow", "ICMP", nullptr));
        tipoICMPv->setTitle(QCoreApplication::translate("MainWindow", "Tipo:", nullptr));
        codeICMPv->setTitle(QCoreApplication::translate("MainWindow", "Codigo:", nullptr));
        codeICMPvTxt->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        checksumICMPv->setTitle(QCoreApplication::translate("MainWindow", "Checksum:", nullptr));
        datosICMP->setTitle(QCoreApplication::translate("MainWindow", "Datos ICMP:", nullptr));
        datosARP->setTitle(QCoreApplication::translate("MainWindow", "ARP", nullptr));
        hardARP->setTitle(QCoreApplication::translate("MainWindow", "Hardware", nullptr));
        protocoloARP->setTitle(QCoreApplication::translate("MainWindow", "Tipo Protocolo", nullptr));
        lngMAC->setTitle(QCoreApplication::translate("MainWindow", "Longitud MAC", nullptr));
        lngIP->setTitle(QCoreApplication::translate("MainWindow", "Longitud IP", nullptr));
        opCodeARP->setTitle(QCoreApplication::translate("MainWindow", "Codigo de Operacion", nullptr));
        MACARPorg->setTitle(QCoreApplication::translate("MainWindow", "MAC Origen", nullptr));
        IPARPorg->setTitle(QCoreApplication::translate("MainWindow", "IP Origen", nullptr));
        MACARPDes->setTitle(QCoreApplication::translate("MainWindow", "MAC Destino", nullptr));
        IPARPDes->setTitle(QCoreApplication::translate("MainWindow", "IP Destino", nullptr));
        datosTCP->setTitle(QCoreApplication::translate("MainWindow", "TCP", nullptr));
        puertoOrigenTCP->setTitle(QCoreApplication::translate("MainWindow", "Puerto Origen:", nullptr));
        puertoDestinoTCP->setTitle(QCoreApplication::translate("MainWindow", "Puerto Destino: ", nullptr));
        numeroSecuenciaTCP->setTitle(QCoreApplication::translate("MainWindow", "Numero de secuencia:", nullptr));
        numeroACKTCP->setTitle(QCoreApplication::translate("MainWindow", "Numero de acuse de recibo: ", nullptr));
        longitudTCP->setTitle(QCoreApplication::translate("MainWindow", "Longitud de Cabecera:", nullptr));
        banderasTCP->setTitle(QCoreApplication::translate("MainWindow", "Banderas:", nullptr));
        reservadoTCP->setTitle(QCoreApplication::translate("MainWindow", "Reservado:", nullptr));
        nonceTCP->setTitle(QCoreApplication::translate("MainWindow", "Nonce:", nullptr));
        cwrTCP->setTitle(QCoreApplication::translate("MainWindow", "CWR:", nullptr));
        eceTCP->setTitle(QCoreApplication::translate("MainWindow", "ECE:", nullptr));
        urgTCP->setTitle(QCoreApplication::translate("MainWindow", "Urgente:", nullptr));
        ackTCP->setTitle(QCoreApplication::translate("MainWindow", "Acuse:", nullptr));
        pushTCP->setTitle(QCoreApplication::translate("MainWindow", "Push:", nullptr));
        resetTCP->setTitle(QCoreApplication::translate("MainWindow", "Reset:", nullptr));
        synTCP->setTitle(QCoreApplication::translate("MainWindow", "Syn:", nullptr));
        finTCP->setTitle(QCoreApplication::translate("MainWindow", "Fin:", nullptr));
        ventanaTCP->setTitle(QCoreApplication::translate("MainWindow", "Tama\303\261o de ventana:", nullptr));
        checksumTCP->setTitle(QCoreApplication::translate("MainWindow", "Checksum:", nullptr));
        puntUrgenteTCP->setTitle(QCoreApplication::translate("MainWindow", "Puntero Urgente:", nullptr));
        dumpTCP->setTitle(QCoreApplication::translate("MainWindow", "Datos:", nullptr));
        datosUDP->setTitle(QCoreApplication::translate("MainWindow", "UDP", nullptr));
        puertoOrigenUDP->setTitle(QCoreApplication::translate("MainWindow", "Puerto Origen:", nullptr));
        puertoDestinoUDP->setTitle(QCoreApplication::translate("MainWindow", "Puerto Destino:", nullptr));
        longitudUDP->setTitle(QCoreApplication::translate("MainWindow", "Longitud total:", nullptr));
        checksumUDP->setTitle(QCoreApplication::translate("MainWindow", "Checksum:", nullptr));
        dumpUDP->setTitle(QCoreApplication::translate("MainWindow", "Datos:", nullptr));
        datosDNS->setTitle(QCoreApplication::translate("MainWindow", "DNS", nullptr));
        idDns->setTitle(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        flagsDns->setTitle(QCoreApplication::translate("MainWindow", "Flags", nullptr));
        opCodeDns->setTitle(QCoreApplication::translate("MainWindow", "OpCode:", nullptr));
        rCodeDns->setTitle(QCoreApplication::translate("MainWindow", "RCode:", nullptr));
        QDcount->setTitle(QCoreApplication::translate("MainWindow", "QDcount:", nullptr));
        ANcount->setTitle(QCoreApplication::translate("MainWindow", "ANcount:", nullptr));
        NScount->setTitle(QCoreApplication::translate("MainWindow", "NScount:", nullptr));
        ARcount->setTitle(QCoreApplication::translate("MainWindow", "ARcount:", nullptr));
        PreguntaDNS->setTitle(QCoreApplication::translate("MainWindow", "Preguntas:", nullptr));
        nombreDominio->setTitle(QCoreApplication::translate("MainWindow", "Nombre de dominio:", nullptr));
        preguntaTipoDns->setTitle(QCoreApplication::translate("MainWindow", "Tipo:", nullptr));
        preguntaClaseDns->setTitle(QCoreApplication::translate("MainWindow", "Clase:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
