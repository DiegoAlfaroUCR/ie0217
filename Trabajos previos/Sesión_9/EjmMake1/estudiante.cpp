/**
 * @file estudiante.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include "estudiante.hpp"

/**
 * @brief Constructor de objeto Estudiante.
 * 
 * @param nombre Nombre del estudiante.
 * @param edad Edad del estudiante.
 */
Estudiante::Estudiante(
    const std::string& nombre, int edad
) : nombre(nombre), edad(edad) {}

/**
 * @brief Método para mostrar los datos del Estudiante.
 * 
 */
void Estudiante::mostrarDatos(){
    std::cout << "Nombre: " << nombre;
    std::cout << ", Edad: " << edad << std::endl;
}