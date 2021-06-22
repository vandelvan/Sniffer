#include <splitter.h>

using namespace std;

QString Splitter::macDestino(string dump){
    string macD;
    int i;
    for(i=0;i<12;i++)
    {
        macD += toupper(dump[i]);
        if((i+1)%2==0 && i!=11)
        {
            macD+=":";
        }
    }
    return QString::fromStdString(macD);
}


QString Splitter::macOrigen(string dump){
    string macD;
    int i;
    for(i=12;i<24;i++){
        macD += toupper(dump[i]);
        if((i+1)%2==0 && i!=23){ macD+=":";}
    }
    return QString::fromStdString(macD);
}

QString Splitter::mac128(QString binary){
    QString mac="";
    mac=relleno(conversor.binarioToHex(binary.mid(0,16)))+":";
    mac+=relleno(conversor.binarioToHex(binary.mid(16,16)))+":";
    mac+=relleno(conversor.binarioToHex(binary.mid(32,16)))+":";
    mac+=relleno(conversor.binarioToHex(binary.mid(48,16)))+":";
    mac+=relleno(conversor.binarioToHex(binary.mid(64,16)))+":";
    mac+=relleno(conversor.binarioToHex(binary.mid(80,16)))+":";
    mac+=relleno(conversor.binarioToHex(binary.mid(96,16)))+":";
    mac+=relleno(conversor.binarioToHex(binary.mid(112,16)));
    return mac;
}

QString Splitter::relleno(QString cad)
{
    QString res="";
    int ln=cad.length();
    int i=4-ln;
    while(i>0)
    {
        res+="0";
        i--;
    }
    return res+cad;

}

QString Splitter::tipoCodigo(string dump){
    string tipo="";
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
    return QString::fromStdString(tipo);
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
    for(int i=0; i<=aux.length(); i++){
        salida+=aux[i];
        if((i+1)%4==0){
            salida+=" ";
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

QString Splitter::tipoICMPv6(QString aux){
    QString salida=conversor.hexToDecimal(aux);
    if(salida=="1"){
        salida+=" Destination Unreachable";
    }else if(salida=="2"){
        salida+=" Packet Too Big";
    }else if(salida=="3"){
        salida+=" Time Exceeded";
    }else if(salida=="4"){
        salida+=" Parameter Problem";
    }else if(salida=="100"){
        salida+=" Private experimentation";
    }else if(salida=="101"){
        salida+=" Private experimentation";
    }else if(salida=="128"){
        salida+=" Echo Request";
    }else if(salida=="129"){
        salida+=" Echo Reply";
    }else if(salida=="133"){
        salida+=" Router Solicitation (NDP)";
    }else if(salida=="134"){
        salida+=" Router Advertisement (NDP)";
    }else if(salida=="135"){
        salida+=" Neighbor Solicitation (NDP)";
    }else if(salida=="136"){
        salida+=" Neighbor Advertisement (NDP)";
    }else if(salida=="137"){
        salida+=" Redirect Message (NDP)";
    }
    return salida;
}

QString Splitter::codigoICMP(QString aux){
    QString salida = conversor.binarioToDecimal(aux);
    if(salida=="0"){
        salida+=" No se puede llegar a la red";
    }else if(salida=="1"){
        salida+=" No se puede llegar al host destino";
    }else if(salida=="2"){
        salida+=" El destino no dispone del protocolo solicitado";
    }else if(salida=="3"){
        salida+=" No se puede llegar al puerto destino o la aplicacion destino no esta libre";
    }else if(salida=="4"){
        salida+=" Se necesita aplicar fragmentacion, pero el flag indica lo contrario";
    }else if(salida=="5"){
        salida+=" La ruta de origen no es correcta";
    }else if(salida=="6"){
        salida+=" No se conoce la red destino";
    }else if(salida=="7"){
        salida+=" No se conoce el host destino";
    }else if(salida=="8"){
        salida+=" El host origen esta aislado";
    }else if(salida=="9"){
        salida+=" La comunicacion con la red destino esta prohibida por razones administrativas";
    }else if(salida=="10"){
        salida+=" La comunicacion con el host destino esta prohibida por razones administrativas";
    }else if(salida=="11"){
        salida+=" No se puede llegar a la red destino debido al tipo de servicio";
    }else if(salida=="12"){
        salida+=" No se puede llegar al host destino debido al tipo de servicio";
    }
    return salida;
}

QString Splitter::codigoICMPv6(QString aux, QString tipo){
    QString salida=conversor.hexToDecimal(aux);
    if(tipo=="1 Destination Unreachable"){
        if(salida=="0"){
            salida+=" No existe ruta de destino";
        }else if(salida=="1"){
            salida+=" Comunicacion con el destino administrativamente prohibida";
        }else if(salida=="2"){
            salida+=" No asignado";
        }else if(salida=="3"){
            salida+=" Direccion inalcanzable";
        }
    }else if(tipo=="2 Packet Too Big"){
        salida="0";
    }else if(tipo=="3 Time Exceeded"){
        if(salida=="0"){
            salida+=" Limite de salto excedido";
        }else if(salida=="1"){
            salida+=" Teiempo de reensamble de fragmento excedido";
        }
    }else if(tipo=="4 Parameter Problem"){
        if(salida=="0"){
            salida+=" Se encontro un encabezado erroneo";
        }else if(salida=="1"){
            salida+=" Se encontro un tipo desconocido en el siguiente fragmento";
        }else if(salida=="2"){
            salida+=" Se encontro una opcion IPv6 desconocida";
        }
    }else{
        salida="0";
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
        tipo="0800 IPv4";
    }
    else if(tipo=="806")
    {
        tipo="0806 ARP";

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

QString Splitter::puertosTCP(QString aux)
{
    QString puerto = conversor.binarioToDecimal(aux);
    int prt = puerto.toInt();
    if(prt >= 0 && prt <= 1023)
    {
        puerto += " Puerto conocido";
        switch (prt) {
        case 20:
        case 21:
            puerto += " FTP";
            break;
        case 22:
            puerto += " SSH";
            break;
        case 23:
            puerto += " TELNET";
            break;
        case 25:
            puerto += " SMTP";
            break;
        case 53:
            puerto += " DNS";
            break;
        case 80:
            puerto += " HTTP";
            break;
        case 110:
            puerto += " POP3";
            break;
        case 143:
            puerto += " IMAP";
            break;
        case 443:
            puerto += " HTTPS";
            break;
        case 993:
            puerto += " IMAP SSL";
            break;
        case 995:
            puerto += " POP SSL";
            break;
        }
    }
    else if(prt == 1024 && prt <= 49152)
        puerto += " Puerto registrado";
    else
        puerto += " Puerto dinamico o privado";
    return puerto;
}

int Splitter::getLongitud(QString aux)
{
    return conversor.binarioToDecimal(aux).toInt()*8;
}

QString Splitter::banderasDNS(QString aux){
    QString banderas;
    banderas.append("QR: ");
    banderas.append(aux[0]);
    banderas.append("\n");
    banderas.append("AA: ");
    banderas.append(aux[5]);
    banderas.append("\n");
    banderas.append("TC: ");
    banderas.append(aux[6]);
    banderas.append("\n");
    banderas.append("RD: ");
    banderas.append(aux[7]);
    banderas.append("\n");
    banderas.append("RA: ");
    banderas.append(aux[8]);
    banderas.append("\n");
    banderas+="Z: 0\n";
    banderas+="AD: 0\n";
    banderas+="CD: 0";
    return banderas;
}

QString Splitter::opCodeDNS(QString aux){
    QString opcode;
    if(aux=="0"){
        opcode="0 Consulta estandar(QUERY)";
    }else if(aux=="1"){
        opcode="1 Consulta inversa(iQUERY)";
    }else if(aux=="2"){
        opcode="2 Solicitud del estado del servidor(STATUS)";
    }else{
        opcode="Codigo no valido";
    }
    return opcode;
}

QString Splitter::rCode(QString aux){
    QString rcode;
    if(aux=="0"){
        rcode="0 Ningun error";
    }else if(aux=="1"){
        rcode="1 Error de formato";
    }else if(aux=="2"){
        rcode="2 Fallo en el servidor";
    }else if(aux=="3"){
        rcode="3 Error en nombre";
    }else if(aux=="4"){
        rcode="4 No implementado";
    }else if(aux=="5"){
        rcode="5 Rechazado";
    }
    return rcode;
}

QString Splitter::nombreDominio(string aux){
    QString nombre;
    int i=0, letras, let;
    char a;
    do{
        letras = stoi(aux.substr(i,2), 0, 16);
        i+=2;
        for(int j=0; j<letras; j++){
            let=stoi(aux.substr(i,2), 0, 16);
            i+=2;
            a=let;
            nombre+=a;
        }
        if(letras!=0){
            nombre+='.';
        }
    }while(letras!=0);
    return nombre;
}


QString Splitter::tipoDns(string aux){
    QString tipo;
    int i=0, iterador;
    do{
        iterador = stoi(aux.substr(i,2), 0, 16);
        i+=2;
    }while(iterador!=0);
    iterador=stoi(aux.substr(i,4), 0, 16);
    switch (iterador) {
        case 1:{
            tipo="1- A";
            break;
        }
        case 5:{
            tipo="5- CNAME";
            break;
        }
        case 13:{
            tipo="13- HINFO";
            break;
        }
        case 15:{
            tipo="15- MX";
            break;
        }
        case 22:{
            tipo="22- NS";
            break;
        }
        case 23:{
            tipo="23- NS";
            break;
        }
    }
    return tipo;
}


QString Splitter::claseDns(string aux){
    QString clase;
    int i=0, iterador;
    do{
        iterador = stoi(aux.substr(i,2), 0, 16);
        i+=2;
    }while(iterador!=0);
    iterador=stoi(aux.substr(i+4,4), 0, 16);
    switch (iterador) {
        case 1:{
            clase="1- IN";
            break;
        }
        case 3:{
            clase="3- CH";
            break;
        }
    }
    return clase;
}
