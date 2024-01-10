#include <iostream>
using namespace std;

int main(){
    // Se declara puntero a un entero.
    int* pointInt;

    // Se declara puntero a un float.
    float* pointFloat;

    // Se asigna memoria dinámica.
    pointInt = new int;             // Comando new siempre retorna una direccion de memoria
    pointFloat = new float;         // por eso debe asignarse a un puntero.

    // Se asigna valor a la memoria.
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // Se libera la memoria.
    delete pointInt;
    delete pointFloat;

    return 0;
}