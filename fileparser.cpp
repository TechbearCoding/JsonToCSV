#include "fileparser.h"
#include <QJsonDocument>
#include <QDebug>

FileParser::FileParser()
{
    err =  new QJsonParseError();
}

void FileParser::parseToJson(QString file)
{

    QFile f(file);

    f.open(QIODevice::ReadOnly | QIODevice::Text);
    QJsonDocument doc =  QJsonDocument::fromJson(f.readAll(), err);
    f.close();

    if (err->error != QJsonParseError::NoError){
        return;
        //TODO handle error
    }else{
        qDebug() << "yay";
    }

}
