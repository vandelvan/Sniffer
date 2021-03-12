#ifndef SPLITTER_H
#define SPLITTER_H

#include <QString>
#include <locale>

class Splitter
{
public:
    Splitter();
    QString ethernetTypeCode(QString,std::string);
    QString macOrigen(std::string);
    QString macDestino(std::string);
private:
    std::locale loc;
};

#endif // SPLITTER_H
