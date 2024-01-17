/**
 * @file MaterialPrecio.hpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo header para clase MaterialPrecio.
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#ifndef MATERIAL_PRECIO_HPP
#define MATERIAL_PRECIO_HPP

#include "MaterialOrdenado.hpp"

/**
 * @brief Clase hija que implementa todas las funciones y datos necesarios.
 * 
 * Esta clase hereda de todas las demás, contiene un struct con datos necesarios de materiales
 * y un vector que contiene instancias de dicho struct. Posee los métodos para registrar la información
 * de los materiales ingresados en el vector datos, ordenar los datos según el precio de los materiales e imprimir los datos.
 * 
 */
class MaterialPrecio : public MaterialOrdenado{
    public:
        /**
         * @brief Método para ordenar datos según el precio de materiales.
         * 
         * Este método emplea un algoritmo de ordenamiento bubble sort para ordenar los structs en orden
         * ascendente o descendente según el precio del material.
         * 
         */
        void ordenar();
    
    private:
        /** @struct
         * @brief Struct que contiene información por mostrar de elementos ordenados. 
         * 
         */
        struct datosMaterial
        {   // Atributos originados en clase Material, se vuelven a registrar aquí.
            string titulo;  /**< Titulo del material. */
            string tipo;    /**< Tipo del material (ej. Libro). */
            int precio;     /**< Precio del material. */
        };

        vector<datosMaterial> datos;    /**< Vector que contiene instancias de datosMaterial. */

        /**
         * @brief Método para guardar información de un Material en datos.
         * 
         * Se lee la información del titulo, precio y tipo de los materiales guardados en Libros, Noticias,
         * Podcasts y Peliculas, y se registran en datos por medio de instancias de datosMaterial. 
         * 
         */
        void obtenerDatos();
        
        /**
         * @brief Método para imprimir la información guardada en datos.
         * 
         */
        void imprimir();
};

#endif