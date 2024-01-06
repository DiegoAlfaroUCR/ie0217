#include <iostream>
using namespace std;

// Funciones para cambiar los valores.
void swap_ref(int &n1, int &n2){ // Esta emplea las referencias de las variables.
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap_punt(int* n1, int* n2){ // Esta emplea los punteros hacia las variables.
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(){
    // Se definen las variables.
    int a = 1, b = 2;

    cout << "Antes de cambiar" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap_ref(a, b);
    cout << "Despues de cambiar con referencias:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Se devuelve con funcion empleando punteros.
    cout << "Se devuelve con punteros:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;

    swap_punt(&a, &b);

    cout << "Despues de devolver con punteros:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}