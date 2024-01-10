#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // Se crea un puntero ptr.
    int *ptr;
    // Se asigna la dirección de memoria del primer elemento en un array de 5 ints.
    // Como es calloc inicializa con valor 0.
    ptr = (int *)calloc(5, sizeof(int)); // El 5 reserva memoria para 5 copias de size of.

    if (!ptr) // En caso de que no se pueda inicializar.
    {
        cout << "Memory allocation failed.";
        exit(1);
    }

    // Se cambian los valores a i*2 + 1.
    cout << "Initializing values..." << endl << endl;
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i * 2 + 1;
    }
    
    cout << "Initialized values..." << endl;
    for (int i = 0; i < 5; i++)
    {
        // ptr[i] y *(ptr+i) son lo mismo en este caso.
        cout << *(ptr + i) << endl;
    }
    
    free(ptr);
    return 0;
}