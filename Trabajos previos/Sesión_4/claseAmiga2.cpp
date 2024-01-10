#include <iostream>
using namespace std;

class ClassB; // Se crea clase B.

// Se crea clase A.
class ClassA {
    private:
        int numA;

        // Se declara clase amiga B.
        friend class ClassB;

    public:
    // Constructor inicializa numA como 12.
    ClassA(): numA (12) {}
};


class ClassB {
    private:
        int numB;

    public:
    // Constructor inicializa numB como 1.
    ClassB(): numB (1) {}

    // Funcion para sumar numA con numB.
    // Como classB es amiga de classA, puede acceder a numA.
    int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main() {
    ClassB objectB; // Se crea objeto objectB.
    cout << "Sum: " << objectB.add();
    return 0;
}