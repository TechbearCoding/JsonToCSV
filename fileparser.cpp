#include "fileparser.h"



FileParser::FileParser()
{

}

void FileParser::parseToJson(QFile file)
{

    file.open(QIODevice::ReadOnly | QIODevice::Text);
//    auto jsonDoc = QJsonDocument::fromJson(file.readAll()).object();
    file.close();

}
