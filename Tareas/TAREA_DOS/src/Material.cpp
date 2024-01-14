#include "Material.hpp"


void Material::setGeneral() {

    string pronombre = "de la ";

    if (this->tipo == "Libro" || this->tipo == "Podcast")
    {
        pronombre = "del ";
    }
    
    cout << "Ingrese el titulo " << pronombre << this->tipo << ": ";
    getline(cin>>ws, titulo);

    cout << "Ingrese el autor " << pronombre << this->tipo << ": ";
    getline(cin>>ws, autor);

    cout << "Ingrese el genero " << pronombre << this->tipo << ": ";
    getline(cin>>ws, genero);

    cout << "Ingrese el precio " << pronombre << this->tipo << ": ";
    cin >> precio;

    cout << "Ingrese el estado " << pronombre << this->tipo << " (disponible, prestad@ o reservad@): ";
    cin >> estado;

    cout << endl;
}

void Material::mostrarGeneral(){
    string pronombre = "de la ";

    if (tipo == "Libro" || tipo == "Podcast")
    {
        pronombre = "del ";
    }
    cout << "-----Informacion " << pronombre << tipo << "-----" << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Genero: " << genero << endl;
    cout << "Precio: " << precio << endl;
    cout << "Estado: " << estado << endl;
}