#ifndef SPLITTER_H
#define SPLITTER_H

#include <conversor.h>

#include <QString>
#include <string>

class Splitter{
public:
    QString macDestino(std::string dump);
    QString macOrigen(std::string dump);
    QString mac128(QString binary);
    QString relleno(QString cad);
    QString tipoCodigo(std::string dump);
    QString versionIP(QString aux);
    QString tamanoCabecera(QString aux);
    QString bitRead(QString cadena,int modo);
    QString tipoSer(QString aux);
    QString flags(QString aux);
    QString tipoProtocolo(QString aux);
    QString setIP(QString aux);
    QString setDatos(QString aux);
    QString tipoICMP(QString aux);
    QString codigoICMP(QString aux);
    QString tipoICMPv6(QString aux);
    QString codigoICMPv6(QString aux, QString tipo);
    QString hardARP(QString aux);
    QString opCodeARP(QString aux);
    QString tipoCodigoARP(QString aux);
    QString puertosTCP(QString aux);
    QString banderasDNS(QString aux);
    QString opCodeDNS(QString aux);
    QString rCode(QString aux);
    QString nombreDominio(std::string aux);
    QString tipoDns(std::string aux);
    QString claseDns(std::string aux);
    int getLongitud(QString aux);
private:
    Conversor conversor;
};
#endif // SPLITTER_H
