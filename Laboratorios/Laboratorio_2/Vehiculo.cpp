#include "Vehiculo.hpp"

// Tambien sirve Vehiculo::Vehiculo(int param_velocidad) : velocidad(param_velocidad){}

Vehiculo::Vehiculo(int param_velocidad){
    this->velocidad = param_velocidad;
}

void Vehiculo::acelerar(){
    cout << "Acelerando el vehiculo hasta " << velocidad << "km/h." << endl;
}

void Vehiculo::frenar(){
    cout << "Frenando el vehiculo." << endl;
}