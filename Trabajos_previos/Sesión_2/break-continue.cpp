#include <iostream>
using namespace std;

// Estructura para llamar los códigos de ejemplo en un mismo archivo.
// Esto lo hice para no escribir varios archivos diferentes.

// Header de las funciones.
void ejbreak(void);
void ejcontinue(void);


int main(){
    ejbreak();
    cout << "\n";
    ejcontinue();
    return 0;
}

// Ambos conceptos se pueden ejecutar en for y while.
// Se hizo el break en el for, el continue en el while.

void ejbreak(void){
    for (int i = 1; i <= 3; i++){ // Se establece un for hasta 3.
        cout << i; // Se imprime el contador.
        if (i == 2){
            break; // Se rompe si contador llega a valer 2.
        }
    }
}

void ejcontinue(){
    int i = 1;
    while (i <= 5) // Se establece un while hasta llegar a 5.
    {
        cout << i; // Se imprime el contador.
        ++i;
        if (i == 3){
            continue; // Se continua si llega a 3.
        }
    }
    
}