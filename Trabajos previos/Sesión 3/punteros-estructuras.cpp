#include <iostream>
using namespace std;

struct Distance { // Se crea la estructura Distance
    int feet;
    float inch;
};

int main(){
    Distance *ptr, d; // Se crean la distancia d y un puntero ptr de tipo Distance.

    ptr = &d; // Se asigna la dirección de d al puntero.

    cout << "Enter feet: ";
    cin >> ptr->feet; // Se asigna el valor de feet con el puntero. Tambien válido: (*ptr).feet
    cout << "Enter inch: ";
    cin >> ptr->inch; // También válido (*ptr).feet

    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches." << endl;
    return 0;
}