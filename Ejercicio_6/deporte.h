#ifndef DEPORTE_H
#define DEPORTE_H

#include <string>

class Deporte {
public:
    std::string nombre;
    std::string tipo;
    int jugadores;

    // Constructor
    Deporte(std::string _nombre, std::string _tipo, int _jugadores);

    // Métodos
    std::string getDescripcion() const;
};

#endif // DEPORTE_H
