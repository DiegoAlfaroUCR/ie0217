#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>   /* Uso de setw() para espaciar correctamente información imprimida en terminal. */
using namespace std;

template <class T>
class Matriz {
    public: // De momento en public
        vector<vector<T>> contenido;
        void crearMatriz();
        void mostrarMatriz();
};

#include "Matriz.cpp"
#endif