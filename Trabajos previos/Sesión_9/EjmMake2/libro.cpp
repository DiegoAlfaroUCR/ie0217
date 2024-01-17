/**
 * @file Libro.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include "Libro.hpp"

/**
 * @brief Constructor de objeto Libro.
 * 
 * @param titulo 
 * @param autor 
 */
Libro::Libro(
    const string& titulo, const string& autor
) : titulo(titulo), autor(autor) {}

/**
 * @brief Método que muestra la información del Libro.
 * 
 */
void Libro::mostrarInfo() const {
    cout << "Titulo: " << titulo << ", Autor: " << autor << endl;
}