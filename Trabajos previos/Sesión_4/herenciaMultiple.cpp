#include <iostream>
using namespace std;

// Se crea clase Mammal.
class Mammal {
    public:
        Mammal() {
          cout << "Mammals can give direct birth." << endl;
    }
};

// Se crea clase WingedAnimal.
class WingedAnimal {
    public:
        WingedAnimal() {
          cout << "Winged animal can flap." << endl;
    }
};

// Se crea clase Bat que es hija de forma pública ambas Mammal y WingedAnimal.
class Bat: public Mammal, public WingedAnimal {};

int main() {
    Bat b1; // Se genera el constructor de ambas clases en el mismo objeto tipo Bat.
    return 0;
}