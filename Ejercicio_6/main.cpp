#include <QCoreApplication>
#include <iostream>
#include "deporte.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Deporte deporte1("Futbol", "Equipo", 11);
    Deporte deporte2("Tenis", "Individual", 2);

    std::cout << "Deporte 1:" << std::endl;
    std::cout << deporte1.getDescripcion() << std::endl;

    std::cout << "-------------------------------" << std::endl;

    std::cout << "Deporte 2:" << std::endl;
    std::cout << deporte2.getDescripcion() << std::endl;

    return a.exec();
}
