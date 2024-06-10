#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <algorithm>
#include "deporte.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    // Crear un vector de objetos Deporte
    std::vector<Deporte> deportes;
    deportes.push_back(Deporte("Futbol", "Equipo", 11));
    deportes.push_back(Deporte("Tenis", "Individual", 2));
    deportes.push_back(Deporte("Baloncesto", "Equipo", 5));
    deportes.push_back(Deporte("Voleibol", "Equipo", 6));
    deportes.push_back(Deporte("Beisbol", "Equipo", 9));

    // Ordenar los deportes por el número de jugadores de menor a mayor
    std::sort(deportes.begin(), deportes.end());

    // Imprimir los deportes ordenados
    for (const auto& deporte : deportes) {
        std::cout << deporte.getDescripcion() << std::endl;
        std::cout << "-------------------------------" << std::endl;
    }

    return a.exec();
}
