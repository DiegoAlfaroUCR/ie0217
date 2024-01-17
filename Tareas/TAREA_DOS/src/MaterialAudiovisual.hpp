/**
 * @file MaterialAudiovisual.hpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo header para clase MaterialAudiovisual.
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#ifndef MATERIAL_AUDIOVISUAL_HPP
#define MATERIAL_AUDIOVISUAL_HPP

#include "Material.hpp"

/**
 * @brief Clase principal para objetos audiovisuales.
 * 
 * Funciona como la clase madre de clases Pelicula y Podcast.
 */
class MaterialAudiovisual : public Material{
    protected:
        /**
         * @brief Establece los valores específicos a audiovisuales del material por medio de la terminal.
         */
        void setVisual();

        /**
         * @brief Imprime valores específicos a audiovisuales del material.
         */
        void mostrarVisual();

        int duracion; /**< Duracion del material audiovisual en minutos. */
};

#endif