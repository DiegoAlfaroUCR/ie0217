#include <iostream>
#include "persona.hpp"

using namespace std;

int main(){
    Persona p("Juan", 25); // Se crea el objeto p de clase Persona.

    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Edad: " << p.getEdad() << endl;

    p.setEdad(26); // Se redefine la edad.

    cout << "Nueva Edad: " << p.getEdad() << endl;
    return 0;
}