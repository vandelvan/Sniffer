#ifndef READER_H
#define READER_H

#include <QByteArray>
#include <QFile>
#include <QMessageBox>

class Reader{
public:
    QByteArray readFile(QString fileName);
};

#endif // READER_H
