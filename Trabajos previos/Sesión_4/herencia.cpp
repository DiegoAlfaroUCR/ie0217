#include <iostream>
using namespace std;

class Animal {
    public:
    // Se crean funciones publicas de la clase Animal.
    void eat(){
        cout << "I can eat!" << endl;
    }

    void sleep(){
        cout << "I can sleep!" << endl;
    }
};

// Se establece clase Dog como clase hija a Animal.
class Dog : public Animal {
    public:
    // Se crea funcion pública de clase Dog.
    void bark(){
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main(){
    Dog dog1; // Se crea objeto tipo Dog.

    // Se llaman funciones de Animal.
    dog1.eat();
    dog1.sleep();

    // Se llaman funciones de Dog.
    dog1.bark();
    return 0;
}