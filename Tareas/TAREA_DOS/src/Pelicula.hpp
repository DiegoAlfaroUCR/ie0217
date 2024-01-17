/**
 * @file Pelicula.hpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo header para clase Pelicula.
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "MaterialAudiovisual.hpp"

/**
 * @brief Clase hija de tipo Pelicula.
 * 
 * Establece características de materiales tipo Noticia.
 * 
 */
class Pelicula : public MaterialAudiovisual {
    public:
        /**
         * @brief Establece los valores de un objeto Pelicula.
         * 
         * Este método define el tipo, información propia de Pelicula y llama funciones setLectura() y setGeneral().
         * 
         */
        void crearPelicula();
        
        /**
         * @brief Muestra información de objeto Pelicula.
         * 
         * Imprime resumen, material relacionado y llama funciones mostrarGeneral() y mostrarLectura().
         * 
         */
        void mostrarInfo();

    private:
        /**
         * @brief Imprime el tamaño de Pelicula según duracion.
         * 
         */
        void tamaño();

        string resumen;         /**< Resumen de Pelicula. */
        string relacionado;     /**< Material relacionado a Pelicula. */
};

#endif