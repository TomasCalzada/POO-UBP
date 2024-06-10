#include <iostream>
#include <vector>
#include <QCoreApplication>
#include "jugador.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Crear un vector de Jugador
    std::vector<Jugador> jugadores;

    // Insertar 10 jugadores distintos en el vector
    for (int i = 1; i <= 10; ++i) {
        Jugador jugador(i * 5, i * 10, "Jugador " + std::to_string(i));
        jugadores.push_back(jugador);
    }

    // Imprimir los datos de cada jugador
    for (const auto& jugador : jugadores) {
        cout << "Nombre: " << jugador.getNombre() << ", Velocidad: " << jugador.getVelocidad() << ", Fuerza: " << jugador.getFuerza() << endl;
    }

    return a.exec();
}
