#include "MaterialAudiovisual.hpp"

void MaterialAudiovisual::setVisual(){
    cout << "Ingrese la duracion en minutos: ";
    cin >> duracion;

    cout << endl;
}

void MaterialAudiovisual::mostrarVisual(){
    cout << "Duracion en minutos: " << duracion << endl << endl;
}