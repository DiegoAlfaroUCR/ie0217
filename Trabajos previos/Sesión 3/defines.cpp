#include <iostream>
using namespace std;

#define BOOK_ID_MAX 10 // Se define el valor BOOK_ID_MAX.

enum {
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX
} casas_t;

int main(){

    // El valor definido de BOOK_ID_MAX es pre procesado por el compilador
    // se imprime al igual que si se intercambiara la variable por un 10.
    cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;

    cout << "La cantidad de casas en el condominio es: " << CASA_MAX << endl;

    return 0;
}