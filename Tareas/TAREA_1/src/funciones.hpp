#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

// Se incluyen librerías necesarias.
#include <iostream>
#include <string>
#include <cstdlib> // Se incluye para generar un numero random.
#include <ctime>  // Se incluye para crear numeros random diferentes en cada caso.
using namespace std;

int mostrarMenu();
void procesarOpcion(int limInferior, int limSuperior, int opcion);
int numRandom(int limInferior, int limSuperior);
void pista(int guess, int buscado, int opcion, int tamañoIntervalo);
string calcularTemperatura(int tamañoIntervalo, int guess, int buscado);
void mensajeGanador();
void mensajePerdedor();

#endif