#include <QCoreApplication>
#include <iostream>
#include <QString>
#include <QDebug>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<string> expresiones;

    expresiones.push_back("A caballo regalado no se le mira el diente");
    expresiones.push_back("Meter la pata");
    expresiones.push_back("Dar en el clavo");
    expresiones.push_back("Pasarse de la raya");
    expresiones.push_back("Estar entre la espada y la pared");

    sort(expresiones.begin(), expresiones.end());

    cout << "Expresiones idiomaticas ordenadas alfabeticamente:"<<endl;
        for(const auto& expresion : expresiones) {
            cout << expresion << endl;
        }
    return 0 ;
}
