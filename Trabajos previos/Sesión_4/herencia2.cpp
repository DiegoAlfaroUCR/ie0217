#include <iostream>
using namespace std;

// Se crea clase Animal.
class Animal {
    public:
        void info() {cout << "I am an animal." << endl; }
};

// Se crea clase Dog hija publica de Animal.
class Dog : public Animal {
    public:
      void bark() { cout << "I am a Dog. Woof woof." << endl; }
};

// Se crea clase Cat hija publica de Animal.
class Cat : public Animal {
    public:
      void meow() { cout << "I am a Cat. Meow." << endl; }
};


int main() {
    // Se crea objeto de clase Dog.
    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info(); // Se llama una función de clase Animal.
    dog1.bark();

    // Se crea objeto de clase Cat.
    Cat cat1;
    cout <<"\nCat Class:" << endl;
    cat1.info(); // Se llama una función de clase Animal.
    cat1. meow();

    return 0;
}