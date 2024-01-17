/**
 * @file Libro.hpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo header para clase Libro.
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "MaterialLectura.hpp"

/**
 * @brief Clase hija de tipo Libro.
 * 
 * Establece características de materiales tipo Libro.
 * 
 */
class Libro : public MaterialLectura {
    public:
        /**
         * @brief Establece los valores de un objeto Libro.
         * 
         * Este método define el tipo, información propia de Libro y llama funciones setLectura() y setGeneral().
         * 
         */
        void crearLibro();

        /**
         * @brief Muestra información de objeto Libro.
         * 
         * Imprime resumen, material relacionado y llama funciones mostrarGeneral() y mostrarLectura().
         * 
         */
        void mostrarInfo();
    
    private:
        /**
         * @brief Imprime el tamaño del Libro según cantidadHojas.
         * 
         */
        void tamaño();

        string resumen;         /**< Resumen del Libro. */
        string relacionado;     /**< Material relacionado a Libro. */
};

#endif