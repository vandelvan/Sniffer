#ifndef CONVERSOR_H
#define CONVERSOR_H

#include <QByteArray>
#include <QString>
#include <QFile>
#include <QMessageBox>
#include <sstream>
#include <cmath>


class Conversor
{
public:
    Conversor();
    QString toBinary(QString);
    int binaryToDecimal(long long int);
    std::string intToString(int);
    QString stringToDecimalQString(std::string);
    std::string bitRead(std::string,int);


};

#endif // CONVERSOR_H
