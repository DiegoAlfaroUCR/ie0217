#include <iostream>
using namespace std;

class Base{
    public:
    // Se crea la funcion print para clase Base.
    void print(){
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
    public:
    // Se crea la funcion print para clase Derived.
    void print(){
        cout << "Derived Function" << endl;
    }
};


int main(){
    // Se crean objetos clase Derived.
    Derived derived1, derived2;

    // Se llama el print de la clase Derived.
    derived1.print();

    // Se llama el print de la clase Base.
    derived2.Base::print();
    return 0;
}