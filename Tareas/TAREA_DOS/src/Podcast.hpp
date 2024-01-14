#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "MaterialAudiovisual.hpp"

class Podcast : public MaterialAudiovisual {
    public:
        void crearPodcast();
        void tamaño();
        void mostrarInfo();
    private:
        string resumen;
        string relacionado;
};

#endif