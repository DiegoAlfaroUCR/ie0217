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

#include "estudiante.hpp"

/**
 * @brief Funcion main que inicia el programa.
 * 
 * @return int Código de sálida 0.
 * 
 */
int main(){
    Estudiante estudiante("Juan", 20);
    estudiante.mostrarDatos();

    return 0;
}