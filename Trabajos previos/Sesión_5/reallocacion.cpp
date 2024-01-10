#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // Se crea un puntero ptr.
    float *ptr, *new_ptr;
    ptr = (float*) malloc(5*sizeof(float));
    if (ptr == NULL)
    {
        cout << "Memory Allocation Failed";
        exit(1);
    }

    // Inicializa el bloque de memoria.
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i * 1.5;
    }
    
    // Se realoca la memoria.
    new_ptr = (float*) realloc(ptr, 10*sizeof(float));
    if (new_ptr == NULL)
    {
        cout << "Memory Re-allocation Failed";
        exit(1);
    }

    // Se inicializa la memoria nueva.
    for (int i = 5; i < 10; i++) // Note que empieza en 5 pues los demas ya estan definidos.
    {
        new_ptr[i] = i * 2.5;
    }
    cout << "Printing Values" << endl;
    
    // Se imprimen los valores del array allocado.
    for (int i = 0; i < 10; i++)
    {
        cout << new_ptr[i] << endl;
    }

    // Se libera el nuevo puntero pues le cayó encima al viejo
    free(new_ptr);

    return 0;
}