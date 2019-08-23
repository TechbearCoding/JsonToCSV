#include "startform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    startForm w;
    w.show();

    return a.exec();
}
