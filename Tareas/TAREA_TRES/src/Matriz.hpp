#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <string>
#include <vector>
//#include <complex>
#include <iomanip>   /* Uso de setw() para espaciar correctamente información imprimida en terminal. */
using namespace std;

template <class T>
class Matriz {
    //friend class OperacionesBasicas<T>;
    public: // De momento en public
        vector<vector<T>> contenido;
        void crearMatriz();

        Matriz<T> operator+ (Matriz<T> &otraMatriz);
        Matriz<T> operator- (Matriz<T> &otraMatriz);
        Matriz<T> operator* (Matriz<T> &otraMatriz);
        //void soliticarOperacion();

        void mostrarMatriz();
};

//#include "Matriz.cpp"
#endif