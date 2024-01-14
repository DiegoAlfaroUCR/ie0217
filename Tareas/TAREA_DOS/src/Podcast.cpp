#include "Podcast.hpp"

Podcast::Podcast(){
    tipo = "Podcast";
    setGeneral();
    setVisual();

    cout << "Ingrese un resumen del contenido: ";
    getline(cin>>ws, resumen);

    cout << "Ingrese material relacionado: ";
    getline(cin>>ws, relacionado);

    cout << endl;
}

void Podcast::tamaño(){
    if (duracion < 30)
    {
        cout << "El Podcast '"<< titulo <<"' es corto. "<< endl;
    } else if (duracion < 90)
    {
        cout << "El Podcast '"<< titulo <<"' es mediano. "<< endl;
    } else if (90 <= duracion)
    {
        cout << "El Podcast '"<< titulo <<"' es largo. "<< endl;
    }
}

void Podcast::mostrarInfo(){
    mostrarGeneral();
    mostrarVisual();

    tamaño();
    cout << "Mostrando resumen del Podcast '" << titulo << "':" << endl;
    cout << resumen << endl << endl;

    cout << "Material relacionado a '" << titulo << "' que le podria gustar:" << endl;
    cout << relacionado << endl;
}