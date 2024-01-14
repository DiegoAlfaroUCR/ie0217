#include "Pelicula.hpp"

void Pelicula::crearPelicula(){
    tipo = "Pelicula";
    setGeneral();
    setVisual();

    cout << "Ingrese un resumen del contenido: ";
    getline(cin>>ws, resumen);

    cout << "Ingrese material relacionado: ";
    getline(cin>>ws, relacionado);

    cout << endl;
}

void Pelicula::tamaño(){
    if (duracion < 90)
    {
        cout << "La Pelicula '"<< titulo <<"' es corta. "<< endl;
    } else if (duracion < 150)
    {
        cout << "La Pelicula '"<< titulo <<"' es mediana. "<< endl;
    } else if (150 <= duracion)
    {
        cout << "La Pelicula '"<< titulo <<"' es larga. "<< endl;
    }
}

void Pelicula::mostrarInfo(){
    mostrarGeneral();
    mostrarVisual();

    tamaño();
    cout << "Mostrando resumen de la Pelicula '" << titulo << "':" << endl;
    cout << resumen << endl << endl;

    cout << "Material relacionado a '" << titulo << "' que le podria gustar:" << endl;
    cout << relacionado << endl;
}