#include <iostream>
using namespace std;

int main(){
    float arr[3];

    // Se declara el puntero.
    float *ptr;

    cout << "Displaying address using arrays: " << endl;

    // Se usa un for loop para imprimir todas las direcciones de los elementos del array.
    for (int i = 0; i < 3; ++i){
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // Se asigna el puntero a la dirección de arr[0].
    ptr = arr;

    // Se imprimen nuevamente pero usando la notación de los punteros.
    cout << "\nDisplaying address using pointers: " << endl;

    for (int i = 0; i < 3; ++i){
         cout << "ptr + " << i << " = " << ptr + i << endl;
    }

    return 0;
}