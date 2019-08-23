#ifndef FILEPARSER_H
#define FILEPARSER_H

#include <QFile>


class FileParser
{
public:
    FileParser();

    void parseToJson(QFile file);
};

#endif // FILEPARSER_H
