#ifndef OPERADORA_HPP
#define OPERADORA_HPP

#include "OperacionesBasicas.hpp"
#include "OperacionCompleja.hpp"


class Operadora{
    public:
        int imprimirMenu();
        template <class T>
        void iniciarProceso(T matrizA, T matrizB);

        template <class T>
        void mostrarMatriz(T matrizDada);
};

#include "Operadora.cpp"
#endif