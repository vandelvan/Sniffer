#ifndef SPLITTER_H
#define SPLITTER_H

#include <conversor.h>

#include <QString>
#include <string>

using namespace std;

QString macDestino(string dump){
    QString macD;
    int i;
    for(i=0;i<12;i++)
    {
        macD += toupper(dump[i]);
        if((i+1)%2==0 && i!=11)
        {
            macD+=":";
        }
    }
    return macD;
}


QString macOrigen(string dump){
    QString macD;
    int i;
    for(i=12;i<24;i++){
        macD += toupper(dump[i]);
        if((i+1)%2==0 && i!=23){ macD+=":";}
    }
    return macD;
}

QString tipoCodigo(string dump){
    QString tipo="";
    for(int i=24;i<28;i++)
    {
        tipo+=toupper(dump[i]);
    }
    if(tipo=="0800")
    {
        tipo+=" IPv4";
    }
    else if(tipo=="0806")
    {
        tipo+=" ARP";

    }
    else if(tipo=="8035")
    {
        tipo+=" RARP";


    }
    else if(tipo=="86DD")
    {
        tipo+=" IPv6";
    }
    else
    {
        tipo="Invalid Type\n";
    }
    return tipo;
}

QString versionIP(QString aux){
    if(aux=="0100"){
        aux="4";
    }else if(aux=="0110"){
        aux="6";
    }
    return aux;
}

QString tamanoCabecera(QString aux){
    bool Ok;
    int iValue = aux.toInt(&Ok, 2);
    aux= QString::number(iValue);
    aux+=" palabra(s)";
    return aux;
}

QString bitRead(QString cadena,int modo)
{
    switch(modo)
    {
    case 1:
        if(cadena=="1")
            return "Bajo";
        else
            return "Normal";
        break;
    case 2:
        if(cadena=="1")
            return "Alto";
        else
            return "Normal";
        break;
    case 3:
        if(cadena=="1")
            return "No divisible";
        else
            return "Divisible";
        break;
    case 4:
        if(cadena=="1")
            return "Fragmento Intermedio";
        else
            return "Ultimo Fragmento";
        break;
    default:
        return "Error";
        break;

    }
}

QString tipoSer(QString aux){
    QString cadena= "Prioridad: ";
    if(aux.mid(0, 3)=="000")
        cadena+="De Rutina\n";
    else if(aux.mid(0, 3)=="001")
        cadena+="Prioritario\n";
    else if(aux.mid(0, 3)=="010")
        cadena+="Inmediato\n";
    else if(aux.mid(0, 3)=="011")
        cadena+="Relampago\n";
    else if(aux.mid(0, 3)=="100")
        cadena+="Invalidacion Relampago\n";
    else if(aux.mid(0, 3)=="101")
        cadena+="Procesando llamada crítica y de emergencia\n";
    else if(aux.mid(0, 3)=="110")
        cadena+="Control de trabajo de Internet\n";
    else if(aux.mid(0, 3)=="111")
        cadena+="Control de red\n";
    else
        cadena+="Error\n";

    cadena+="Retardo: ";
    cadena+=bitRead(aux.mid(3,1), 1)+"\n";
    cadena+="Rendimiento: ";
    cadena+=bitRead(aux.mid(4,1), 2)+"\n";
    cadena+="Fiabilidad: ";
    cadena+=bitRead(aux.mid(5,1), 2)+"\n";

    return cadena;
}

QString flags(QString aux){
    QString cadena= "Reservado\n";
    cadena+=bitRead(aux.mid(0,1), 3)+"\n";
    cadena+=bitRead(aux.mid(1,1), 4)+"\n";
    return cadena;
}

QString tipoProtocolo(QString aux){
    QString nTipo=binarioToDecimal(aux), xd="";
    if(nTipo=="1"){
        xd="ICMPv4";
    }else if(nTipo=="6"){
        xd="TCP";
    }else if(nTipo=="17"){
        xd="UDP";
    }else if(nTipo=="58"){
        xd="ICMPv6";
    }else if(nTipo=="118"){
        xd="STP";
    }else if(nTipo=="121"){
        xd="SMP";
    }else{
        xd="Otro\n";
    }
    return xd;
}

QString setIP(QString aux){
    QString salida=binarioToDecimal(aux.mid(0,8))+".";
    salida+=binarioToDecimal(aux.mid(8,8))+".";
    salida+=binarioToDecimal(aux.mid(16,8))+".";
    salida+=binarioToDecimal(aux.mid(24,8));
    return salida;
}

QString setDatos(QString aux){
    QString salida;
    for(int i=0; i<aux.length(); i++){
        salida+=aux[i];
        if(i%2==1){
            salida+=":";
        }
    }
    salida[salida.length()-1]=' ';
    return salida;
}

#endif // SPLITTER_H
