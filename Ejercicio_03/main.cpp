#include <QCoreApplication>
#include <QDebug>
#include "programacion.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    qDebug() << Programacion::getVersion();

    return a.exec();
}
