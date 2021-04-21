#include <splitter.h>

using namespace std;

QString Splitter::macDestino(string dump){
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


QString Splitter::macOrigen(string dump){
    QString macD;
    int i;
    for(i=12;i<24;i++){
        macD += toupper(dump[i]);
        if((i+1)%2==0 && i!=23){ macD+=":";}
    }
    return macD;
}

QString Splitter::tipoCodigo(string dump){
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

QString Splitter::versionIP(QString aux){
    if(aux=="0100"){
        aux="4";
    }else if(aux=="0110"){
        aux="6";
    }
    return aux;
}

QString Splitter::tamanoCabecera(QString aux){
    bool Ok;
    int iValue = aux.toInt(&Ok, 2);
    aux= QString::number(iValue);
    aux+=" palabra(s)";
    return aux;
}

QString Splitter::bitRead(QString cadena,int modo)
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

QString Splitter::tipoSer(QString aux){
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
    cadena+=bitRead(aux.mid(5,1), 2);

    return cadena;
}

QString Splitter::flags(QString aux){
    QString cadena= "Reservado\n";
    cadena+=bitRead(aux.mid(0,1), 3)+"\n";
    cadena+=bitRead(aux.mid(1,1), 4)+"\n";
    return cadena;
}

QString Splitter::tipoProtocolo(QString aux){
    QString nTipo=conversor.binarioToDecimal(aux), xd="";
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

QString Splitter::setIP(QString aux){
    QString salida=conversor.binarioToDecimal(aux.mid(0,8))+".";
    salida+=conversor.binarioToDecimal(aux.mid(8,8))+".";
    salida+=conversor.binarioToDecimal(aux.mid(16,8))+".";
    salida+=conversor.binarioToDecimal(aux.mid(24,8));
    return salida;
}

QString Splitter::setDatos(QString aux){
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

QString Splitter::tipoICMP(QString aux){
    QString salida = conversor.binarioToDecimal(aux);
    if(salida=="0"){
        salida+=" Echo Reply";
    }else if(salida=="3"){
        salida+=" Destination Unreacheable";
    }else if(salida=="4"){
        salida+=" Source Quench";
    }else if(salida=="5"){
        salida+=" Redirect";
    }else if(salida=="8"){
        salida+=" Echo";
    }else if(salida=="11"){
        salida+=" Time Exceeded";
    }else if(salida=="12"){
        salida+=" Parameter Problem";
    }else if(salida=="13"){
        salida+=" Timestamp";
    }else if(salida=="14"){
        salida+=" Timestamp Reply";
    }else if(salida=="15"){
        salida+=" Information Request";
    }else if(salida=="16"){
        salida+=" Information Reply";
    }else if(salida=="17"){
        salida+=" Addressmask";
    }else if(salida=="18"){
        salida+=" Addressmask Reply";
    }
    return salida;
}

QString Splitter::codigoICMP(QString aux){
    QString salida = conversor.binarioToDecimal(aux);
    if(salida=="0"){
        salida+=" no se puede llegar a la red";
    }else if(salida=="1"){
        salida+=" no se puede llegar al host destino";
    }else if(salida=="2"){
        salida+=" el destino no dispone del protocolo solicitado";
    }else if(salida=="3"){
        salida+=" no se puede llegar al puerto destino o la aplicacion destino no esta libre";
    }else if(salida=="4"){
        salida+=" se necesita aplicar fragmentacion, pero el flag indica lo contrario";
    }else if(salida=="5"){
        salida+=" la ruta de origen no es correcta";
    }else if(salida=="6"){
        salida+=" no se conoce la red destino";
    }else if(salida=="7"){
        salida+=" no se conoce el host destino";
    }else if(salida=="8"){
        salida+=" el host origen esta aislado";
    }else if(salida=="9"){
        salida+=" la comunicacion con la red destino esta prohibida por razones administrativas";
    }else if(salida=="10"){
        salida+=" la comunicacion con el host destino esta prohibida por razones administrativas";
    }else if(salida=="11"){
        salida+=" no se puede llegar a la red destino debido al tipo de servicio";
    }else if(salida=="12"){
        salida+=" no se puede llegar al host destino debido al tipo de servicio";
    }
    return salida;
}

QString Splitter::hardARP(QString aux){
    QString salida = conversor.binarioToDecimal(aux);
    if(salida == "0"){
        salida+=" Reserved";
    }else if(salida=="1"){
        salida+=" Ethernet(10 Mb)";
    }else if(salida=="2"){
        salida+=" Experimental Ethernet (3Mb)";
    }else if(salida=="3"){
        salida+=" Amateur Radio AX.25";
    }else if(salida=="4"){
        salida+=" Proteon ProNET Token Ring";
    }else if(salida=="5"){
        salida+=" Chaos";
    }else if(salida=="6"){
        salida+=" IEEE 802 Networks";
    }else if(salida=="7"){
        salida+=" ARCNET";
    }else if(salida=="8"){
        salida+=" Hyperchannel";
    }else if(salida=="9"){
        salida+=" Lanstar";
    }else if(salida=="10"){
        salida+=" Autonet Short Address";
    }else if(salida=="11"){
        salida+=" LocalTalk";
    }else if(salida=="12"){
        salida+=" LocalNet (IBM PCNet or SYTEK LocalNET)";
    }else if(salida=="13"){
        salida+=" Ultra link";
    }else if(salida=="14"){
        salida+=" SMDS";
    }else if(salida=="15"){
        salida+=" Frame Relay";
    }else if(salida=="16"){
        salida+=" Asynchronous Transfer Mode (ATM)";
    }else if(salida=="17"){
        salida+=" HDLC";
    }else if(salida=="18"){
        salida+=" Fiber Channel";
    }else if(salida=="19"){
        salida+=" Asynchronous Transfer Mode (ATM)";
    }else if(salida=="20"){
        salida+=" Serial Line";
    }else if(salida=="21"){
        salida+=" Asynchronous Transmission Mode (ATM)";
    }else if(salida=="22"){
        salida+=" MIL-STD-188-220";
    }else if(salida=="23"){
        salida+=" Metricom";
    }else if(salida=="24"){
        salida+=" IEEE 1394.1995";
    }else if(salida=="25"){
        salida+=" MAPOS";
    }else if(salida=="26"){
        salida+=" Twinaxial";
    }else if(salida=="27"){
        salida+=" EUI-64";
    }else if(salida=="28"){
        salida+=" HIPARP";
    }else if(salida=="29"){
        salida+=" IP and ARP over ISO 7816-3";
    }else if(salida=="30"){
        salida+=" ARPSec";
    }else if(salida=="31"){
        salida+=" IPsec tunnel";
    }else if(salida=="32"){
        salida+=" InfiniBand (TM)";
    }else if(salida=="33"){
        salida+=" TIA-102 Project 25 Common Air Interface (CAI)";
    }else if(salida=="34"){
        salida+=" Wiegand Interface";
    }else if(salida=="35"){
        salida+=" Pure IP";
    }else if(salida=="36"){
        salida+=" HW_EXP1";
    }else if(salida=="37"){
        salida+=" HFI";
    }else if(salida.toInt() >= 38 && salida.toInt() <= 255){
        salida+=" Unassigned";
    }else if(salida=="256"){
        salida+=" HW_EXP2";
    }else if(salida=="257"){
        salida+=" AEthernet";
    }else if(salida.toInt() >= 258 && salida.toInt() <= 65535){
        salida+=" Reserved";
    }
    return salida;
}


QString Splitter::opCodeARP(QString aux){
    QString salida = conversor.binarioToDecimal(aux);
    if(salida == "0"){
        salida+=" Reserved";
    }else if(salida=="1"){
        salida+=" ARP Request";
    }else if(salida=="2"){
        salida+=" ARP Reply";
    }else if(salida=="3"){
        salida+=" RARP Request";
    }else if(salida=="4"){
        salida+=" RARP Reply";
    }else if(salida=="5"){
        salida+=" DRARP Request";
    }else if(salida=="6"){
        salida+=" DRARP Reply";
    }else if(salida=="7"){
        salida+=" DRARP Error";
    }else if(salida=="8"){
        salida+=" InARP Request";
    }else if(salida=="9"){
        salida+=" InARP Reply";
    }else if(salida=="10"){
        salida+=" ARP-NAK";
    }else if(salida=="11"){
        salida+=" MARS-Request";
    }else if(salida=="12"){
        salida+=" MARS-Multi";
    }else if(salida=="13"){
        salida+=" MARS-MServ";
    }else if(salida=="14"){
        salida+=" MARS-Join";
    }else if(salida=="15"){
        salida+=" MARS-Leave";
    }else if(salida=="16"){
        salida+=" MARS-NAK";
    }else if(salida=="17"){
        salida+=" MARS-Unserv";
    }else if(salida=="18"){
        salida+=" MARS-SJoin";
    }else if(salida=="19"){
        salida+=" MARS-SLeave";
    }else if(salida=="20"){
        salida+=" MARS-Grouplist-Request";
    }else if(salida=="21"){
        salida+=" MARS-Grouplist-Reply";
    }else if(salida=="22"){
        salida+=" MARS-Redirect-Map";
    }else if(salida=="23"){
        salida+=" MAPOS-UNARP";
    }else if(salida=="24"){
        salida+=" OP_EXP1";
    }else if(salida=="25"){
        salida+=" OP_EXP2";
    }else if(salida.toInt() >= 26 && salida.toInt() <= 65534){
        salida+=" Unassigned";
    }else if(salida=="65535"){
        salida+=" Reserved";
    }
    return salida;
}

QString Splitter::tipoCodigoARP(QString aux)
{
    QString tipo = conversor.binarioToHex(aux);
    if(tipo=="800")
    {
        tipo+=" IPv4";
    }
    else if(tipo=="806")
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
        tipo+=" Invalid Type";
    }
    return tipo;
}

int Splitter::getLongitud(QString aux)
{
    return conversor.binarioToDecimal(aux).toInt()*8;
}


