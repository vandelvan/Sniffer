/********************************************************************************
** Form generated from reading UI file 'listsniff.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTSNIFF_H
#define UI_LISTSNIFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_listSniff
{
public:
    QGridLayout *gridLayout;
    QListView *pktList;

    void setupUi(QDialog *listSniff)
    {
        if (listSniff->objectName().isEmpty())
            listSniff->setObjectName(QString::fromUtf8("listSniff"));
        listSniff->resize(400, 300);
        gridLayout = new QGridLayout(listSniff);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pktList = new QListView(listSniff);
        pktList->setObjectName(QString::fromUtf8("pktList"));

        gridLayout->addWidget(pktList, 0, 0, 1, 1);


        retranslateUi(listSniff);

        QMetaObject::connectSlotsByName(listSniff);
    } // setupUi

    void retranslateUi(QDialog *listSniff)
    {
        listSniff->setWindowTitle(QCoreApplication::translate("listSniff", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listSniff: public Ui_listSniff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTSNIFF_H
