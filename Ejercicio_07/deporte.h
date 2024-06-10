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

    // Operador de comparación para ordenar
    bool operator<(const Deporte& other) const;
};

#endif // DEPORTE_H
