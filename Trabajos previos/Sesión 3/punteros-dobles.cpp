#include <iostream>
using namespace std;

int main(){
    int var = 2050; // Se define la variable.
    int* ptr_var; // Se define un puntero a la variable.

    ptr_var = &var; // Se asigna el puntero.

    cout << "var: "<< var << ", ptr_var: " << ptr_var << endl;

    int** ptr_ptr_var; // Se define un puntero al puntero ptr_var.
    ptr_ptr_var = &ptr_var; // Se asigna el puntero al puntero.
    cout << "ptr_ptr_var: " << ptr_ptr_var << endl;

    // Se verifican las direcciones de los punteros.
    cout << "&ptr_var: " << &ptr_var << endl;
    cout << "&ptr_ptr_var: " << &ptr_ptr_var << endl;

    return 0;
}

