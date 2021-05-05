#include<conversor.h>

using namespace std;

QString Conversor::hexToBinaryQString(string dump){
    QString datos="";
    long int i = 0;
    while (dump[i])
    {
        switch (dump[i])
        {
          case '0':
             datos+= "0000";
             break;
          case '1':
             datos+= "0001";
             break;
          case '2':
             datos+= "0010";
             break;
          case '3':
             datos+= "0011";
             break;
          case '4':
             datos+= "0100";
             break;
          case '5':
             datos+= "0101";
             break;
          case '6':
             datos+= "0110";
             break;
          case '7':
             datos+= "0111";
             break;
          case '8':
             datos+= "1000";
             break;
          case '9':
             datos+= "1001";
             break;
          case 'A':
          case 'a':
             datos+= "1010";
             break;
          case 'B':
          case 'b':
             datos+= "1011";
             break;
          case 'C':
          case 'c':
             datos+= "1100";
             break;
          case 'D':
          case 'd':
             datos+= "1101";
             break;
          case 'E':
          case 'e':
             datos+= "1110";
             break;
          case 'F':
          case 'f':
             datos+= "1111";
             break;
          default:
             datos+="";
        }

        i++;
    }
    return datos;
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

QString Conversor::binarioToDecimal(QString aux)
{
    bool Ok;
    int iValue = aux.toInt(&Ok, 2);
    aux= QString::number(iValue);
    return aux;
}


QString Conversor::binarioToHex(QString aux)
{
    bool Ok;
    int iValue = aux.toInt(&Ok, 2);
    aux= QString::number(iValue, 16);
    aux=aux.toUpper();
    return aux;
}

QString Conversor::hexToDecimal(QString aux)
{
    bool Ok;
    int iValue = aux.toInt(&Ok, 16);
    aux= QString::number(iValue);
    return aux;
}
