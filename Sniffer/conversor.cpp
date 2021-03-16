#include "conversor.h"
using namespace std;

Conversor::Conversor()
{

}

QString Conversor::toBinary(QString paquete)
{
    long int i = 0;
    string data="",hexa;
    hexa=paquete.toStdString();
    while (hexa[i])
    {
        switch (hexa[i])
        {
          case '0':
             data+= "0000";
             break;
          case '1':
             data+= "0001";
             break;
          case '2':
             data+= "0010";
             break;
          case '3':
             data+= "0011";
             break;
          case '4':
             data+= "0100";
             break;
          case '5':
             data+= "0101";
             break;
          case '6':
             data+= "0110";
             break;
          case '7':
             data+= "0111";
             break;
          case '8':
             data+= "1000";
             break;
          case '9':
             data+= "1001";
             break;
          case 'A':
          case 'a':
             data+= "1010";
             break;
          case 'B':
          case 'b':
             data+= "1011";
             break;
          case 'C':
          case 'c':
             data+= "1100";
             break;
          case 'D':
          case 'd':
             data+= "1101";
             break;
          case 'E':
          case 'e':
             data+= "1110";
             break;
          case 'F':
          case 'f':
             data+= "1111";
             break;
          default:
             data+="";
        }

        i++;
    }
    paquete=QString::fromStdString(data);
    return paquete;

}


int Conversor::binaryToDecimal(long long int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

string Conversor::intToString(int aux)
{
    stringstream ss;
    string cadena;
    ss.clear();
    ss.str();
    ss<<aux;
    ss>>cadena;
    ss.clear();
    ss.str();
    return cadena;

}

QString Conversor::stringToDecimalQString(string cadena)
{
    QString temp;
    long long int aux;
    temp=QString::fromStdString(cadena);
    aux=temp.toLongLong();
    aux=binaryToDecimal(aux);
    cadena=intToString(aux);
    temp=QString::fromStdString(cadena);
    return temp;
}

string Conversor::bitRead(string cadena,int modo)
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
