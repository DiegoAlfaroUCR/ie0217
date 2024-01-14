#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Material {
    public:
        void setGeneral(); // TALVEZ SE DEBA TENER EN PROTECTED
        void mostrarGeneral();
    //protected: Cambio provisional.
        // Atributos generales.
        string titulo;
        string estado;
        string autor;
        string genero;
        int precio;

        // Atributos especificos.
        string grupo; // Clase Principal
        string tipo = "Libro";  // Clase Hija
};

#endif