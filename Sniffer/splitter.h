#ifndef SPLITTER_H
#define SPLITTER_H

#include <QString>

class Splitter
{
public:
    Splitter();
    QString ethernetTypeCode(QString);
    QString macOrigen(std::string);
    QString macDestino(std::string);
private:
    std::locale loc;
};

#endif // SPLITTER_H
