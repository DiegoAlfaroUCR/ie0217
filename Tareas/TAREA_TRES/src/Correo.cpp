#include "Correo.hpp"

bool Correo::verificar(){
    cout << "Introduzca la direccion de correo: ";
    string cadena;
    getline(cin>>ws, cadena);

    try {
        const bool condicion = regex_search(cadena, arroba);
        if(!condicion){
            throw invalid_argument("Direccion dada no contiene @.");
        }
    }
    catch(const std::exception& e) {
        std::cerr << "\nERROR: "<< e.what() << '\n';
        exit(0);
    }
    
    return (regex_match(cadena, expresion));
}