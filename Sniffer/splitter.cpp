#include "splitter.h"

using namespace std;

Splitter::Splitter()
{

}


QString Splitter::ethernetTypeCode(QString tipo,string dump)
{
    QString tipoNData="";
    int i=28;
    if(tipo=="0800")
    {
        tipoNData=tipo+" IPv4\n";
    }
    else if(tipo=="0806")
    {
        tipoNData=tipo+" ARP \n";
        //Cambiar cuando lleguemos
        while(dump[i])
        {
            tipoNData+=toupper(dump[i],loc);
            i++;
            if(i%2==0)
            {
                tipoNData+=" ";
            }
        }
    }
    else if(tipo=="8035")
    {
        tipoNData=tipo+" RARP\n";

        //Cambiar cuando lleguemos
        while(dump[i])
        {
            tipoNData+=toupper(dump[i],loc);
            i++;
            if(i%2==0)
            {
                tipoNData+=" ";
            }
        }
    }
    else if(tipo=="86DD")
    {
        tipoNData=tipo+" IPv6\n";

        //Cambiar cuando lleguemos
        while(dump[i])
        {
            tipoNData+=toupper(dump[i],loc);
            i++;
            if(i%2==0)
            {
                tipoNData+=" ";
            }
        }
    }
    else
    {
        tipoNData="Invalid Type\n";
    }
    return tipoNData;
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

