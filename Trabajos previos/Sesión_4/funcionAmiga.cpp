#include <iostream>
using namespace std;

class Distance {
    // Se establecen metodos y atributos privados.
    private:
        int meter; // Atributo metro privado.
    
    friend int addFive(Distance); // Se establece funcion amiga para acceder a metro.

    // Se establece constructor con metros 0.
    public:
        Distance() : meter (0) {}
};

// Funcion para agregar la cantidad de metros. Es la funcion amiga.
int addFive(Distance d) {

    d.meter += 5;
    return d.meter;
}

int main(){
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}