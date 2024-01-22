#include "Correo.hpp"

bool Correo::verificar(){
    cout << "Introduzca la direccion de correo: ";
    string cadena;
    getline(cin>>ws, cadena);
    return (regex_match(cadena, expresion));
}