#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

// Se incluyen librerías necesarias.
#include <iostream>
#include <cstdlib> // Se incluye para generar un numero random.
#include <ctime>  // Se incluye para crear numeros random diferentes en cada caso.
using namespace std;

struct DatosJuego
{
    int limInferior;
    int limSuperior;
    int opcion = 0;
    int guess;
    int tamañoIntervalo;
    int buscado;
};


DatosJuego mostrarMenu();
void procesarOpcion(DatosJuego Datos);
int numRandom(DatosJuego Datos);
void pista(DatosJuego Datos);
void calcularTemperatura(DatosJuego Datos);
void mensajeGanador();
void mensajePerdedor();

#endif