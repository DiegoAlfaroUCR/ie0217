#include <iostream>
using namespace std;

class ClassB; // Se crea clase B.

// Se crea clase A.
class ClassA {
    private:
        int numA;

        // Se declara funcion amiga para sumar numA y numB.
        friend int add(ClassA, ClassB);

    public:
    // Constructor inicializa numA como 12.
    ClassA(): numA (12) {}
};


class ClassB {
    private:
        int numB;
        // Se declara funcion amiga para sumar numA y numB.
        friend int add(ClassA, ClassB);

    public:
    // Constructor inicializa numB como 1.
    ClassB(): numB (1) {}
};

// Se construye la funcion para sumar numA y numB.
int add(ClassA objectA, ClassB objectB){
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA; // Se crea objeto objectA.
    ClassB objectB; // Se crea objeto objectB.
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}