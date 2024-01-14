#include "Libro.hpp"

Libro::Libro(){
    tipo = "Libro";
    setGeneral();
    setLectura();

    cout << "Ingrese un resumen del contenido: ";
    getline(cin>>ws, resumen);

    cout << "Ingrese material relacionado: ";
    getline(cin>>ws, relacionado);

    cout << endl;
}

void Libro::tamaño(){
    if (cantidadHojas < 100)
    {
        cout << "El libro '"<< titulo <<"' es corto. "<< endl;
    } else if (cantidadHojas < 200)
    {
        cout << "El libro '"<< titulo <<"' es mediano. "<< endl;
    } else if (200 <= cantidadHojas)
    {
        cout << "El libro '"<< titulo <<"' es largo. "<< endl;
    }
}

void Libro::mostrarInfo(){
    mostrarGeneral();
    mostrarLectura();

    tamaño();
    cout << "Mostrando resumen del Libro '" << titulo << "':" << endl;
    cout << resumen << endl << endl;

    cout << "Material relacionado a '" << titulo << "' que le podria gustar:" << endl;
    cout << relacionado << endl;
}