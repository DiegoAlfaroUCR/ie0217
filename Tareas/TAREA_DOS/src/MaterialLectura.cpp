#include "MaterialLectura.hpp"

void MaterialLectura::setLectura(){
    cout << "Ingrese el nombre de la Editorial: ";
    getline(cin>>ws, editorial);

    cout << "Ingrese la cantidad de hojas: ";
    cin >> cantidadHojas;

    cout << endl;
}

void MaterialLectura::mostrarLectura(){
    cout << "Editorial: " << editorial << endl;
    cout << "Cantidad de hojas: " << cantidadHojas << endl << endl;
}