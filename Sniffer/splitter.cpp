#include "splitter.h"

using namespace std;

Splitter::Splitter()
{

}


QString Splitter::ethernetTypeCode(QString tipo)
{
    if(tipo=="0800")
    {
        return "IPv4";
    }
    else if(tipo=="0806")
    {
        return "ARP";
    }
    else if(tipo=="8035")
    {
        return "RARP";
    }
    else if(tipo=="86DD")
    {
        return "IPv6";
    }
    else
    {
        return "Invalid Type";
    }
}

QString Splitter::macOrigen(string dump)
{
    QString macO;
    int i;
    for(i=12;i<24;i++)
    {
        macO+=toupper(dump[i],loc);
        if((i+1)%2==0 && i!=23)
        {
            macO+=":";
        }
    }
    return macO;
}

QString Splitter::macDestino(string dump)
{
    QString macD;
    int i;
    for(i=0;i<12;i++)
    {
        macD += toupper(dump[i],loc);
        if((i+1)%2==0 && i!=11)
        {
            macD+=":";
        }
    }
    return macD;
}
