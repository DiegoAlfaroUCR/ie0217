/**
 * @file main.cpp
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
 * @brief Funcion main que inicia el programa.
 * 
 * @return int Código de sálida 0.
 * 
 */
int main(){
    // Se crea un objeto Biblioteca.
    Biblioteca biblioteca;

    // Se agregan libros.
    biblioteca.agregarLibro("El Gran Gatsby", "F. Scott Fitzgerald");
    biblioteca.agregarLibro("1984", "George Orwell");

    // Se muestra el catalogo.
    biblioteca.mostrarCatalogo();

    return 0;
}