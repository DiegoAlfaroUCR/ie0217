/**
 * @file biblioteca.hpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>
#include "Libro.hpp"

/**
 * @brief Clase Biblioteca.
 * 
 * Posee métodos para agregar un Libro, y mostrar el catálogo de Libros.
 * 
 */
class Biblioteca {
    public:
        /**
         * @brief Método para agregar un Libro al catalogo.
         * 
         * @param titulo 
         * @param autor 
         */
        void agregarLibro(
            const string& titulo,
            const string& autor
        );

        /**
         * @brief Método para mostrar el catalogo agregado.
         * 
         */
        void mostrarCatalogo();
    
    private:
        vector<Libro> catalogo; /**< Catalogo de objetos Libro agregados. */
};

#endif