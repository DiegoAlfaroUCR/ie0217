#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "MaterialAudiovisual.hpp"

class Pelicula : public MaterialAudiovisual {
    public:
        void crearPelicula();
        void tamaño();
        void mostrarInfo();
    private:
        string resumen;
        string relacionado;
};

#endif