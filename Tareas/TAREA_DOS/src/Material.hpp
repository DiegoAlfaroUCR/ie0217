/**
 * @file Material.hpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo header para clase Material.
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#ifndef MATERIAL_HPP
#define MATERIAL_HPP

// Se definen las librerías que se emplean en el resto del código.
#include <iostream>  /* Entrada y salida en la terminal. */
#include <vector>    /* Uso de vectores incluyendo declaración, pushback, size, clear, etc. */
#include <string>    /* Uso de strings, incluyendo declaración, getline(), etcS. */
#include <algorithm> /* Uso de algoritmo find() en MaterialOrdenado.cpp, usado para encontrar índices. */
#include <iomanip>   /* Uso de setw() para espaciar correctamente información imprimida en terminal. */
using namespace std;

/**
 * @brief Clase base de todos los objetos.
 * 
 * Funciona como clase base de todas las demás, contiene información que emplean todos los tipos de materiales.
 * 
 */
class Material {
    public:
        /*Atributos generales, estos se mantienen públicos 
        por la forma en que se leen en MaterialPrecio y MaterialOrdenado.*/
        string titulo;      /**< Titulo del material. */
        string autor;       /**< Autor del material. */
        int precio;         /**< Precio del material. */
        string tipo;        /**< Tipo, representa que clase de material. */

    protected:
        /**
         * @brief Establece los valores generales del material por medio de la terminal.
         */
        void setGeneral();

        /**
         * @brief Imprime valores generales del material.
         */
        void mostrarGeneral();

        // Variables usadas solo internamente.
        string estado;      /**< Estado del material. */
        string genero;      /**< Genero del material. */
        string grupo;       /**< Grupo, representa a cual principal clase pertenece. */
        
};

#endif