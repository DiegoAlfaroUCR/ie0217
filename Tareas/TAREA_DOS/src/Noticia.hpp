/**
 * @file Noticia.hpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo header para clase Noticia.
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "MaterialLectura.hpp"

/**
 * @brief Clase hija de tipo Noticia.
 * 
 * Establece características de materiales tipo Noticia. 
 * 
 */
class Noticia : public MaterialLectura {
    public:
        /**
         * @brief Establece los valores de un objeto Noticia.
         * 
         * Este método define el tipo, información propia de Noticia y llama funciones setLectura() y setGeneral().
         * 
         */
        void crearNoticia();

        /**
         * @brief Muestra información de objeto Noticia.
         * 
         * Imprime resumen, material relacionado y llama funciones mostrarGeneral() y mostrarLectura().
         * 
         */
        void mostrarInfo();

    private:
        /**
         * @brief Imprime el tamaño de Noticia según cantidadHojas.
         * 
         */
        void tamaño();

        string resumen;         /**< Resumen de Noticia. */
        string relacionado;     /**< Material relacionado a Noticia. */
};

#endif