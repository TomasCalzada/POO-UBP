#include "jugador.h"

// Constructor por defecto
Jugador::Jugador() : velocidad(0), fuerza(0), nombre("sin nombre") {}

// Constructor con parámetros
Jugador::Jugador(int velocidad, int fuerza, const std::string& nombre)
    : velocidad(velocidad), fuerza(fuerza), nombre(nombre) {}

// Setter y Getter para velocidad
void Jugador::setVelocidad(int v) { velocidad = v; }
int Jugador::getVelocidad() const { return velocidad; }

// Setter y Getter para fuerza
void Jugador::setFuerza(int f) { fuerza = f; }
int Jugador::getFuerza() const { return fuerza; }

// Setter y Getter para nombre
void Jugador::setNombre(const std::string& n) { nombre = n; }
std::string Jugador::getNombre() const { return nombre; }

// Destructor
Jugador::~Jugador() {}
