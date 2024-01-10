#include <iostream>
using namespace std;

// Se crea la clase Molde
class Molde {

    public: // Especificador de acceso público. Es necesario para clases definidas de misma forma que pared.
    // Se asignan los atributos.
    double largo;
    double ancho;
    double altura;

    // Función que siempre se ejecuta al crear un objeto. Es el constructor, para serlo debe tener el mismo nombre de la clase.
    Molde(){
        cout << "Esto se ejecuta en cada instanciacion" << endl;
        cout << "Iniciando un objeto de la clase Room" << endl;
    }

    // Métodos.
    double calcularArea (){
        return largo * ancho;
    }

    double calcularVolumen(){
        return largo * ancho * altura;
    }
};

int main(){
    // Se instancia un objeto tipo molde llamado pared.
    Molde pared;

    // Se asignan valores a pared.
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.altura = 315.2;

    // Se calcula y muestra el área y el volumen de pared.
    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;
    return 0;
}

/**
 * Otra forma de crear un constructor que asigne valores al crear la clase:
 * 
 * Molde(double largo_p, double ancho_p, double alto_p) : largo(largo_p), ancho(ancho_p), alto(alto_p) {}
 * 
 * Y al construir se llama así:
 * Molde pared(10.0, 20.0, 35.0);
 */