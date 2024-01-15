#ifndef MATERIAL_PRECIO_HPP
#define MATERIAL_PRECIO_HPP

#include "MaterialOrdenado.hpp"

#include <iomanip> // https://www.oreilly.com/library/view/c-cookbook/0596007612/ch10s02.html

class MaterialPrecio : public MaterialOrdenado{
    public:
        struct datosMaterial
        {
            string titulo, tipo;
            int precio;
        };
        vector<datosMaterial> datos;
        void obtenerDatos(); 
        void ordenar();
        void imprimir();
};

#endif