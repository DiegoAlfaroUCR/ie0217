#include <iostream>
#include <string>
using namespace std;

// Se crea clase Animal.
class Animal {
    // Se crean atributos privados.
    private:
    string color;

    // Se crean atributos protegidos.
    protected:
    string type;

    // Se crean los metodos publicos.
    public:
        void run() { cout << "I can run BASE!" << endl; }
        void eat () { cout << "I can eat!" << endl; }
        void sleep() { cout << "I can sleep!" << endl; }
        void setColor(string clr) { color = clr; }
        string getColor() { return color; }
};

// Se crea clase Dog, clase hija de Animal.
class Dog: public Animal {
    // Se crean funciones públicas.
    public:
    void run() { cout << "I can run DERIVED!" << endl; }
    void setType(string tp) { type = tp; }
    void displayInfo(string c) {
        cout << "I am a" << type << endl;
        cout << "My color is " << c << endl;
        }
    void bark(){ cout << "I can bark! Woof woof!!" << endl;}
};

int main() {
    // Se crea un objeto dog 1 clase Dog.
    Dog dog1;
    // Se llaman las funciones publicas de Animal.
    dog1.run(); // Se llama la función de Dog, no de Animal.
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    // Se llaman las funciones publicas de Dog.
    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());
    return 0;
    }