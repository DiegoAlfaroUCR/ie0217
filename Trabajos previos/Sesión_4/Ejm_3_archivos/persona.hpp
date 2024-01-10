#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

// Se declara la clase Persona.
class Persona{
    // Variables privadas.
    private:
    string nombre;
    int edad;

    // Variables publicas.
    public:
    // Se da el prototipo de funciones miembras a la clase.
    Persona(string nombre, int edad); 
    string getNombre();
    int getEdad();
    void setEdad(int edad);
};

#endif // Se termina el define de PERSONA_H