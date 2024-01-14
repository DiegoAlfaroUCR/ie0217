#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "MaterialLectura.hpp"

class Noticia : public MaterialLectura {
    public:
        Noticia();
        void tamaño();
        void mostrarInfo();
    private:
        string resumen;
        string relacionado;
};

#endif