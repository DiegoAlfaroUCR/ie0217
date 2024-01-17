/**
 * @file Libro.hpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>
using namespace std;

/**
 * @brief Clase Libro.
 * 
 * Contiene un constructor, método para mostrar información e información autor y titulo.
 * 
 */
class Libro {
    public:
        /**
         * @brief Constructor de objeto Libro.
         * 
         * @param titulo 
         * @param autor 
         */
        Libro(const string& titulo, const string& autor);

        /**
         * @brief Método que muestra la información del Libro.
         * 
         */
        void mostrarInfo() const;

    private:
        string titulo;  /**< titulo del libro. */
        string autor;   /**< Autor del libro. */
};

#endif