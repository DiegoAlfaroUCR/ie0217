#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "MaterialLectura.hpp"

class Libro : public MaterialLectura {
    public:
        void crearLibro();
        void tamaño();
        void mostrarInfo();
    private:
        string resumen;
        string relacionado;
};

#endif