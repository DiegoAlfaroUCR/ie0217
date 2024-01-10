#include <iostream>
using namespace std;

// Se crea la clase Base.
class Base {
    public:
    // Se crea una funcion virtual print.
     virtual void print(){
        cout << "Base Function" << endl;
     }
};

// Se crea la clase Derived, hija de Base.
class Derived : public Base {
    public:
    // Se sobreescribe la funcion print.
     void print(){
        cout << "Derived Function" << endl;
     }
};

int main(){
    Derived derived1;

    // Se crea un puntero tipo Base a referencia de un objeto tipo Derived.
    Base* base1 = &derived1;

    base1->print(); // Se usa operador -> para llamar la funcion print del Derived.

    return 0;
}