#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <class T>
void imprimir(T *v, int cantidad, bool mayor_a_menor) {
    vector<T> vec(v, v + cantidad);

    if (mayor_a_menor) {
        sort(vec.begin(), vec.end(), greater<T>());
        cout << "Ordenado de mayor a menor: ";
    } else {
        sort(vec.begin(), vec.end());
        cout << "Ordenado de menor a mayor: ";
    }

    for (const T& valor : vec) {
        cout << valor << " ";
    }
    cout << endl;
}

int main() {
    int arrayInt[] = {9, 4, 6, 7, 1};
    int cantidadInt = sizeof(arrayInt) / sizeof(arrayInt[0]);

    float arrayFloat[] = {6.6, 1.2, 4.3, 9.7, 10.4};
    int cantidadFloat = sizeof(arrayFloat) / sizeof(arrayFloat[0]);

    cout<<"Numeros Float"<<endl;
    imprimir(arrayFloat, cantidadFloat, true);
    imprimir(arrayFloat, cantidadFloat, false);
    cout<<endl;

    cout<<"Numeros enteros:"<<endl;
    imprimir(arrayInt, cantidadInt, true);
    imprimir(arrayInt, cantidadInt, false);

    return 0;
}
