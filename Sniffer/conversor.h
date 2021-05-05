#ifndef CONVERSOR_H
#define CONVERSOR_H

#include <QString>
#include <sstream>
#include <cmath>

class Conversor{
public:
    QString hexToBinaryQString(std::string dump);
    int binaryToDecimal(long long int n);
    std::string intToString(int aux);
    QString stringToDecimalQString(std::string cadena);
    QString binarioToDecimal(QString aux);
    QString binarioToHex(QString aux);
    QString hexToDecimal(QString aux);
};
#endif // CONVERSOR_H
