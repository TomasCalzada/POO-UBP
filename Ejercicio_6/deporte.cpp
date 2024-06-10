#include "deporte.h"

// Constructor
Deporte::Deporte(std::string _nombre, std::string _tipo, int _jugadores)
    : nombre(_nombre), tipo(_tipo), jugadores(_jugadores) {}

// Método para obtener la descripción del deporte
std::string Deporte::getDescripcion() const {
    return "Deporte: " + nombre + "\nTipo: " + tipo + "\nNumero de jugadores: " + std::to_string(jugadores);
}
