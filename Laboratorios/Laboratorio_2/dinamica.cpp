#include <iostream>
using namespace std;

// Se guarda en la data section la cual se puede modificar en runtime.
int variableGlobal = 10;

// La funcion se guarda en la seccion text, no se modifica nunca.
void funcionGlobal(){
    // Se guarda en la seccion data pues se puede modificar.
    // Como es estatica solo se ejecuta una vez, aun si la funcion se vuelve a llamar.
    // Se puede modificar en otro punto.
    static int variableLocalEstatica = 5;

    // Se guarda en el stack.
    int variableLocal = 20;

    cout << "Variable Global: " << variableGlobal << endl;
    cout << "Variable local estatica: " << variableLocalEstatica << endl;
    cout << "Variable local: " << variableLocal << endl;
}

int main(){
    // Se guarda en el stack.
    int variableLocalMain = 15;

    funcionGlobal();

    cout << "Variable local en main: " << variableLocalMain << endl;

    // Se guarda en el heap. Ya que es memoria reservada.
    int* variableDinamica = new int;
    *variableDinamica = 25;

    cout << "Variable dinamica: " << *variableDinamica << endl;
    
    delete variableDinamica;
    
    return 0;
}