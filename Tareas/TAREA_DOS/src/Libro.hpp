#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "MaterialLectura.hpp"

class Libro : public MaterialLectura {
    public:
        Libro();
        void tamaño();
        void info();
    private:
        string resumen;
        string relacionado;
};

#endif