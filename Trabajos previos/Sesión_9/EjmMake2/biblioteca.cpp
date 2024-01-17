/**
 * @file biblioteca.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "biblioteca.hpp"

/**
 * @brief Método para agregar un Libro al catalogo.
 * 
 * @param titulo 
 * @param autor 
 */
void Biblioteca::agregarLibro(
            const string& titulo,
            const string& autor
        ) {
            catalogo.emplace_back(titulo, autor);
        }

/**
 * @brief Método para mostrar el catalogo agregado.
 * 
 */
void Biblioteca::mostrarCatalogo(){
    for (const auto& libro : catalogo)
    {
        libro.mostrarInfo();
    }
    
}