#include <iostream>
using namespace std;

// Se crea la clase Fraccion.
class Fraccion{
    int numerador, denominador;
    public:
    // Se asignan valores dados al constructor a atributos.
    Fraccion(int n, int d) : numerador(n), denominador(d){} 

    // Se define la función para la suma con operador + .
    Fraccion operator+ (const Fraccion &f) {
        Fraccion resultado( 
            numerador * f.denominador + f.numerador * denominador,
            denominador * f.denominador
            );
            return resultado;
    }

    // Funcion para imprimir el valor de un objeto Fraccion.
    void imprimir(){
        cout << numerador << "/" << denominador << endl;
    }
};


int main(){
    Fraccion f1(1, 2);
    Fraccion f2(3, 4);

    Fraccion f3 = f1 + f2;

    f3.imprimir();

    return 0;
}