#include "Material.hpp"


void Material::setGeneral() {

    string pronombre = "de la ";

    if (this->tipo == "Libro" || this->tipo == "Podcast")
    {
        pronombre = "del ";
    }
    
    cout << "Ingrese el titulo " << pronombre << this->tipo << ": ";
    cin >> titulo;

    cout << "Ingrese el autor " << pronombre << this->tipo << ": ";
    cin >> autor;

    cout << "Ingrese el genero " << pronombre << this->tipo << ": ";
    cin >> genero;

    cout << "Ingrese el precio " << pronombre << this->tipo << ": ";
    cin >> precio;

    cout << "Ingrese el estado " << pronombre << this->tipo << ": ";
    cin >> estado;
}