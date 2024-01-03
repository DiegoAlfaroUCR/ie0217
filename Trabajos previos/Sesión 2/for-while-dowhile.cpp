#include <iostream>
using namespace std;


// Estructura para llamar los códigos de ejemplo en un mismo archivo.
// Esto lo hice para no escribir 4 archivos diferentes.

// Header de las funciones.
int ej_for(void);
int ej_for_array(void);
int ej_while(void);
int dowhile(void);

// Se llaman los ejemplos.
int main(){
    cout << "Ejemplo for: " << endl;
    ej_for();

    cout << "\nEjemplo for con array: " << endl;
    ej_for_array();

    cout << "\nEjemplo while: " << endl;
    ej_while();

    cout << "\nEjemplo do-while: " << endl;
    dowhile();
    return 0;
}

int ej_for(){
    for (int i = 1; i <= 5; ++i){
        cout << i << " "; // Se imprime el numero hasta llegar a 5.
    }
    return 0;
}

int ej_for_array(){
    // Se construye un array con lus numeros por imprimir.
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int n : num_array){ // Se itera sobre el array con n.
        cout << n << " "; // Se imprimen los valores del array.
    }

    return 0;
}


int ej_while(){
    // Se establece el contador.
    int i = 1;

    while (i <= 5) // While hasta que contador llegue a 5.
    {
        cout << i << " "; // Se imprime el contador.
        ++i; // Se aumenta el contador.
    }
    
    return 0;
}

int dowhile(){ // Mismo concepto que el while, con un formato diferente.
    int i = 1;

    do
    {
        cout << i << " ";
        i++;
    } while (i <= 5);
    
    return 0;
}