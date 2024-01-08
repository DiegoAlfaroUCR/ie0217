/**
 * @file funciones.hpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Header file del programa, define el struct DatosJuego y funciones prototipo.
 * @version 0.1
 * @date 2024-01-08
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

// Se incluyen librerías necesarias.
#include <iostream> // Se incluye para generar los outputs e inputs.
#include <cstdlib> // Se incluye para generar un numero random.
#include <ctime>  // Se incluye para crear numeros random diferentes en cada caso.
using namespace std;



/**
 * @brief Struct que contiene los datos necesarios para configurar el juego.
 * 
 * Se incluyen la información de la opción de dificultad, del intervalo de numeros y el numero buscado/ingresado.
 * 
 */
struct DatosJuego
{
    int limInferior; /**< Límite inferior del intervalo de números a usar en el juego. */
    int limSuperior; /**< Límite superior del intervalo de números a usar en el juego. */
    int opcion = 0; /**< Indicador de modo de dificultad del juego. */
    int guess; /**< Número adivinado por el usuario durante el juego. */
    int tamañoIntervalo; /**< Tamaño del intervalo de números a usar en el juego. */
    int buscado; /**< Número aleatorio que debe ser adivinado para ganar el juego. */
};

// Aclaración de las funciones prototipo.
DatosJuego mostrarMenu();
void procesarOpcion(DatosJuego Datos);
int numRandom(DatosJuego Datos);
void pista(DatosJuego Datos);
void calcularTemperatura(DatosJuego Datos);
void mensajeGanador();
void mensajePerdedor();

#endif