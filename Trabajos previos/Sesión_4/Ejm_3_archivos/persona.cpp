#include "persona.hpp"
using namespace std;

// Se crea la funcion constructora de Persona.
Persona::Persona(string nombre, int edad){
    this->nombre = nombre; // Operador flecha sirve para definir las variables como un = .
    this->edad = edad;
}

// Función para retornar variable privada nombre.
string Persona::getNombre(){
    return nombre;
}

// Función para retornar variable privada edad.
int Persona::getEdad(){
    return edad;
}

// Función para definir variable privada edad.
void Persona::setEdad(int edad){
    this->edad = edad;
}