/**
 * @file MaterialLectura.hpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo header para clase MaterialLectura.
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#ifndef MATERIAL_LECTURA_HPP
#define MATERIAL_LECTURA_HPP

#include "Material.hpp"

/**
 * @brief Clase principal para objetos lectura.
 * 
 * Funciona como la clase madre de clases Libro y Noticia.
 */
class MaterialLectura : public Material{
    protected:
        /**
         * @brief Establece los valores específicos a lectura del material por medio de la terminal.
         * 
         */
        void setLectura();

        /**
         * @brief Imprime valores específicos a lectura del material.
         * 
         */
        void mostrarLectura();

        int cantidadHojas;  /**< Cantidad de hojas del material lectura. */

    private:
        string editorial;   /**< Editorial del material lectura. */
        
};

#endif