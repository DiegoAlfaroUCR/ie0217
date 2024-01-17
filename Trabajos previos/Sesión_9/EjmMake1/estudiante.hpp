/**
 * @file estudiante.hpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

/**
 * @brief Clase Estudiante.
 * 
 * Posee constructor, método para mostrar datos y datos de edad, edad2 y nombre.
 * 
 */
class Estudiante {
    public:
        /**
         * @brief Constructor de objeto Estudiante.
         * 
         * @param nombre Nombre del estudiante.
         * @param edad Edad del estudiante.
         */
        Estudiante(const std::string& nombre, int edad);

        /**
         * @brief Método para mostrar los datos del Estudiante.
         * 
         */
        void mostrarDatos();

    private:
        std::string nombre; /**< Nombre del estudiante.*/
        int edad;           /**< Edad del estudiante. */
        int edad2;          /**< Edad del estudiante 2. */
};

#endif