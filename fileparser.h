#ifndef FILEPARSER_H
#define FILEPARSER_H

#include <QFile>
#include <QJsonParseError>


class FileParser
{
public:
    FileParser();

    void parseToJson(QString file);

private:
    QJsonParseError *err;
};

#endif // FILEPARSER_H
