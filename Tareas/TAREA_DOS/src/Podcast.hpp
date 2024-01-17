/**
 * @file Podcast.hpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo header para clase Podcast.
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "MaterialAudiovisual.hpp"

/**
 * @brief Clase hija de tipo Podcast.
 * 
 */
class Podcast : public MaterialAudiovisual {
    public:
        /**
         * @brief Establece los valores de un objeto Podcast.
         * 
         * Este método define el tipo, información propia de Podcast y llama funciones setLectura() y setGeneral().
         * 
         */
        void crearPodcast();
        
        /**
         * @brief Muestra información de objeto Podcast.
         * 
         * Imprime resumen, material relacionado y llama funciones mostrarGeneral() y mostrarLectura().
         * 
         */
        void mostrarInfo();

    private:
        /**
         * @brief Imprime el tamaño de Podcast según duracion.
         * 
         */
        void tamaño();

        string resumen;         /**< Resumen de Podcast. */
        string relacionado;     /**< Material relacionado a Podcast. */
};

#endif