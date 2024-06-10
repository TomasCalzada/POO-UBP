#include <iostream>
#include <QCoreApplication>
#include <QDebug>

using namespace std;

// Definición de la clase Persona
class Persona {
public:
    Persona(const QString &nombre) : m_nombre(nombre) {}

    QString nombre() const {
        return m_nombre;
    }

private:
    QString m_nombre;
};

// Definición de la clase Poste
class Poste {
public:
    Poste(double altura, double diametro) : m_altura(altura), m_diametro(diametro) {}

    double altura() const {
        return m_altura;
    }

    double diametro() const {
        return m_diametro;
    }

private:
    double m_altura;
    double m_diametro;
};

// Función genérica para imprimir la descripción de un objeto
template<typename T>
void imprimirDescripcion(const T &obj) {
    cout << obj << endl;
}

// Especialización de la función genérica para la clase Persona
template<>
void imprimirDescripcion<Persona>(const Persona &persona) {
    cout << "Persona con nombre: " << persona.nombre().toStdString() << endl;
}

// Especialización de la función genérica para la clase Poste
template<>
void imprimirDescripcion<Poste>(const Poste &poste) {
    cout << "Poste con altura de " << poste.altura() << " metros y " << poste.diametro() << " cm de diametro" << endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Crear objetos de la clase Persona
    Persona persona1("Lucrecia");
    Persona persona2("Juan");

    // Crear objetos de la clase Poste
    Poste poste1(8.0, 15.0);
    Poste poste2(10.0, 20.0);

    // Imprimir descripciones utilizando la función genérica
    imprimirDescripcion(persona1);
    imprimirDescripcion(persona2);
    imprimirDescripcion(poste1);
    imprimirDescripcion(poste2);

    return a.exec();
}
