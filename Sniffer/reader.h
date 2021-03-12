#ifndef READER_H
#define READER_H

#include <QByteArray>
#include <QString>
#include <QFile>
#include <QMessageBox>

class Reader
{
public:
    Reader();
    QByteArray readFile(QString);
};

#endif // READER_H
