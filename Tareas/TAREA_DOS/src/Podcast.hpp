#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "MaterialAudiovisual.hpp"

class Podcast : public MaterialAudiovisual {
    public:
        Podcast();
        void tamaño();
        void mostrarInfo();
    private:
        string resumen;
        string relacionado;
};

#endif