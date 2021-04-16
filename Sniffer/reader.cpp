#include<reader.h>

QByteArray Reader::readFile(QString fileName)
{
    QMessageBox errorMsg;
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly)){    //Si no se puede abrir
        errorMsg.setText("Error al abrir "+ fileName + "!");
        errorMsg.exec();
        return nullptr;
    }
    QByteArray byteArray;
    byteArray = file.readAll(); //toma el contenido del bin
    file.close();
    return byteArray;
}
