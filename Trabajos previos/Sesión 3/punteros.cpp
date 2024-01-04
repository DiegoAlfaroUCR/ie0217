#include <iostream>
using namespace std;

int main(){
    int var = 5;

    // Se declara el puntero a la variable dada.
    int* pointVar;

    // Se guarda la dirección de la variable en el puntero.
    pointVar = &var;

    // Se muestra el valor de la variable.
    cout << "var = " << var << endl;

    // Se muestra la dirección de memoria de la variable.
    cout << "Address of var (&var) = " << &var << endl;

    // Se muestra el contenido del puntero pointVar.
    cout << "pointVar = " << pointVar << endl;

    // Se muestra el contenido al cual apunta el puntero pointVar.
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;

    // Se cambia el valor de var a 7.
    cout << "Changing value of var to 7:" << endl;
    var = 7;

    // Se muestra el valor de la variable.
    cout << "var = " << var << endl;

    // Se muestra el contenido de *pointVar.
    cout << "*pointVar = " << *pointVar << endl;

    // Se cambia el valor de var a 16 por medio del puntero.
    cout << "Changing value of *pointerVar to 16:" << endl;
    *pointVar = 16;

    // Se muestra var.
    cout << "var = " << var << endl;

    // Se muestra el valor de *pointVar.
    cout << "*pointVar = " << *pointVar << endl;
    return 0;
}