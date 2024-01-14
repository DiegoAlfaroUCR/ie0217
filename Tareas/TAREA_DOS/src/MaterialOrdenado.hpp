#ifndef MATERIAL_ORDENADO_HPP
#define MATERIAL_ORDENADO_HPP

#include "Libro.hpp"
#include "Noticia.hpp"
#include "Podcast.hpp"
#include "Pelicula.hpp"

class MaterialOrdenado : public Libro, public Noticia, public Podcast, public Pelicula{
    public:
        void agregar();
        void eliminar();
        void buscar();
    private:
        vector<Libro*> Libros;
        vector<Noticia*> Noticias;
        vector<Podcast*> Podcasts;
        vector<Pelicula*> Peliculas;
};

#endif