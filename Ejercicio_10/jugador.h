#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>

class Jugador {
public:
    Jugador(); // Constructor por defecto
    Jugador(int velocidad, int fuerza, const std::string& nombre); // Constructor con parámetros

    // Setter y Getter para velocidad
    void setVelocidad(int v);
    int getVelocidad() const;

    // Setter y Getter para fuerza
    void setFuerza(int f);
    int getFuerza() const;

    // Setter y Getter para nombre
    void setNombre(const std::string& n);
    std::string getNombre() const;

    // Destructor
    ~Jugador();

private:
    int velocidad;
    int fuerza;
    std::string nombre;
};

#endif // JUGADOR_H
