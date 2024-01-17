/**
 * @file MaterialOrdenado.hpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo header para clase MaterialOrdenado.
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#ifndef MATERIAL_ORDENADO_HPP
#define MATERIAL_ORDENADO_HPP

#include "Libro.hpp"
#include "Noticia.hpp"
#include "Podcast.hpp"
#include "Pelicula.hpp"

/**
 * @brief Clase que contiene vectores de clases y métodos para modificarlos.
 * 
 * Esta clase hereda de las 4 clases hijas del programa, genera 4 vectores de tipo puntero a cada clase respectivamente,
 * y contiene los métodos para agregar punteros asignados en memoria dinámica, eliminarlos (liberar la memoria y sacarlos del vector) y
 * para liberar toda la memoria asignada.
 * 
 */
class MaterialOrdenado : public Libro, public Noticia, public Podcast, public Pelicula{
    public:
        /**
         * @brief Método para agregar un elemento en uno de los vectores de materiales.
         * 
         * Dependiendo de la opción usada, se crea un puntero por medio de memoria dinámica 
         * a un objeto del tipo de material y se agrega al vector que contiene el mismo tipo de punteros.
         * 
         */
        void agregar();

        /**
         * @brief Método para eliminar un elemento de los vectores de materiales.
         * 
         * Acorde a la opción y nombre dado, se libera la memoria del puntero y se elimina el material del vector correspondiente. 
         * 
         */
        void eliminar();

        /**
         * @brief Método para imprimir información de materiales por tipo o nombre.
         * 
         * Se muestra la información de un material o la información de materiales de un mismo tipo acorde a la opcion dada.
         * Se imprime información general si se busca por tipo de material, si es por nombre se imprime toda la informacion del material.
         * 
         */
        void buscar();

        /**
         * @brief Método para liberar toda la memoria asignada en los vectores.
         * 
         * Se liberan todos los punteros asignados en cada vector.
         * 
         */
        void liberar();

    protected:
        vector<Libro*> Libros;              /**< Vector de punteros dinámicos de tipo Libro. */
        vector<Noticia*> Noticias;          /**< Vector de punteros dinámicos de tipo Noticia. */
        vector<Podcast*> Podcasts;          /**< Vector de punteros dinámicos de tipo Podcast. */
        vector<Pelicula*> Peliculas;        /**< Vector de punteros dinámicos de tipo Pelicula. */

    private:
        /**
         * @brief Método privado para mostrar información de material por nombre.
         * 
         * Se itera por cada material guardado y se muestra la información completa si se encuentra
         * un material con el mismo nombre al buscado.
         * 
         */
        void buscarNombre();
};

#endif