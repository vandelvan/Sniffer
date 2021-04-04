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
    QTextEdit *textEdit;
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
    QVBoxLayout *ipOrigen;
    QLabel *ipOrigenLbl;
    QLineEdit *ipOrigenTxt;
    QVBoxLayout *ipDestino;
    QLabel *ipDestinoLbl;
    QLineEdit *ipDestinoTxt;
    QGroupBox *datosICMPv4;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *tipoICMPv4;
    QLabel *tipoICMPv4Lbl;
    QLineEdit *tipoICMPv4Txt;
    QVBoxLayout *codeICMPv4;
    QLabel *codeICMPv4Lbl;
    QLineEdit *codeICMPv4Txt;
    QVBoxLayout *checksumICMPv4;
    QLabel *checksumICMPv4Lbl;
    QLineEdit *checksumICMPv4Txt;
    QVBoxLayout *datosICMP;
    QLabel *datosICMPv4Lbl;
    QTextEdit *datosICMPv4Txt;

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
        scrollAreaWidgetContents_2->setGeometry(QRect(0, -402, 403, 1516));
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
        textEdit = new QTextEdit(datosEthernet);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy2);
        textEdit->setMinimumSize(QSize(0, 180));
        textEdit->setMaximumSize(QSize(16777215, 180));
        textEdit->setMouseTracking(true);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(textEdit);


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
        flagsTxt->setMinimumSize(QSize(0, 70));
        flagsTxt->setMaximumSize(QSize(16777215, 70));
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

        ipOrigen = new QVBoxLayout();
        ipOrigen->setObjectName(QString::fromUtf8("ipOrigen"));
        ipOrigenLbl = new QLabel(datosIP);
        ipOrigenLbl->setObjectName(QString::fromUtf8("ipOrigenLbl"));

        ipOrigen->addWidget(ipOrigenLbl);

        ipOrigenTxt = new QLineEdit(datosIP);
        ipOrigenTxt->setObjectName(QString::fromUtf8("ipOrigenTxt"));

        ipOrigen->addWidget(ipOrigenTxt);


        verticalLayout_2->addLayout(ipOrigen);

        ipDestino = new QVBoxLayout();
        ipDestino->setObjectName(QString::fromUtf8("ipDestino"));
        ipDestinoLbl = new QLabel(datosIP);
        ipDestinoLbl->setObjectName(QString::fromUtf8("ipDestinoLbl"));

        ipDestino->addWidget(ipDestinoLbl);

        ipDestinoTxt = new QLineEdit(datosIP);
        ipDestinoTxt->setObjectName(QString::fromUtf8("ipDestinoTxt"));

        ipDestino->addWidget(ipDestinoTxt);


        verticalLayout_2->addLayout(ipDestino);


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

        codeICMPv4Txt = new QLineEdit(datosICMPv4);
        codeICMPv4Txt->setObjectName(QString::fromUtf8("codeICMPv4Txt"));

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
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
        longitudLbl->setText(QApplication::translate("MainWindow", "Longitud total:", nullptr));
        identificadorLbl->setText(QApplication::translate("MainWindow", "Identificador:", nullptr));
        flagsLbl->setText(QApplication::translate("MainWindow", "Flags:", nullptr));
        flagsTxt->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        fragmentoLbl->setText(QApplication::translate("MainWindow", "Posicion del fragmento: ", nullptr));
        ttlLbl->setText(QApplication::translate("MainWindow", "Tiempo de vida (TTL)", nullptr));
        protocoloLbl->setText(QApplication::translate("MainWindow", "Protocolo:", nullptr));
        checksumLbl->setText(QApplication::translate("MainWindow", "Checksum:", nullptr));
        ipOrigenLbl->setText(QApplication::translate("MainWindow", "IP origen:", nullptr));
        ipDestinoLbl->setText(QApplication::translate("MainWindow", "IP destino:", nullptr));
        datosICMPv4->setTitle(QApplication::translate("MainWindow", "ICMP", nullptr));
        tipoICMPv4Lbl->setText(QApplication::translate("MainWindow", "Tipo:", nullptr));
        codeICMPv4Lbl->setText(QApplication::translate("MainWindow", "Codigo:", nullptr));
        checksumICMPv4Lbl->setText(QApplication::translate("MainWindow", "Checksum:", nullptr));
        datosICMPv4Lbl->setText(QApplication::translate("MainWindow", "Datos ICMP:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
