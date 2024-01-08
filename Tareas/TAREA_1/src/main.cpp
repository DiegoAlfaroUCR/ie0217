/**
 * @file main.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo principal, contiene funcion main que inicia le programa.
 * @version 0.1
 * @date 2024-01-08
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#include "funciones.hpp"

/** @fn
 * @brief Función principal, inicia el programa y mantiene un bucle para repetir el juego.
 * 
 * @return int 0
 */
int main(){
    // Se declara un struct de tipo DatosJuego "Datos" para contener a definir. 
    DatosJuego Datos;

    while (1)
    {
        // Se imprime el menu y se piden los datos.
        Datos = mostrarMenu();

        // Se procesan las opciones con los datos guardados.
        procesarOpcion(Datos);
    }
    
    return 0;
}