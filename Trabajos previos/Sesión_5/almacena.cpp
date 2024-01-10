#include <iostream>
using namespace std;

// Se crea variable global que se almacena la sección de memoria data.
int globalVariable = 42;

int main(){
    // Se crea variables dinámicas.
    int stackVariable = 10; // Esta se almacena en el stack.

    int* heapVariable = new int(20); // Esta se almacena en el heap.

    cout << "Valor de globalVariable: " << globalVariable << endl;
    cout << "Valor de stackVariable: " << stackVariable << endl;
    cout << "Valor de heaplVariable: " << *heapVariable << endl;

    // Se libera la memoria asignada en el heap.
    delete heapVariable;

    return 0;
}