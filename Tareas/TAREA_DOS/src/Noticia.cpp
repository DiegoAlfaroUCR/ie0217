#include "Noticia.hpp"

Noticia::Noticia(){
    tipo = "Noticia";
    setGeneral();
    setLectura();

    cout << "Ingrese un resumen del contenido: ";
    getline(cin>>ws, resumen);

    cout << "Ingrese material relacionado: ";
    getline(cin>>ws, relacionado);

    cout << endl;
}

void Noticia::tamaño(){
    if (cantidadHojas < 5)
    {
        cout << "La noticia '"<< titulo <<"' es corta. "<< endl;
    } else if (cantidadHojas < 10)
    {
        cout << "La noticia '"<< titulo <<"' es mediana. "<< endl;
    } else if (10 <= cantidadHojas)
    {
        cout << "La noticia '"<< titulo <<"' es larga. "<< endl;
    }
}

void Noticia::mostrarInfo(){
    mostrarGeneral();
    mostrarLectura();

    cout << "Mostrando resumen de la Noticia '" << titulo << "':" << endl;
    cout << resumen << endl << endl;

    cout << "Material relacionado a '" << titulo << "' que le podria gustar:" << endl;
    cout << relacionado << endl;
}