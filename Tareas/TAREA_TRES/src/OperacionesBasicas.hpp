#ifndef OPERACIONES_BASICAS_HPP
#define OPERACIONES_BASICAS_HPP

#include "Matriz.hpp"
#include "Operadora.hpp"

template <class T>
class OperacionesBasicas: public Matriz<T> {
    friend class Operadora;
    public: // De momento
        template <class U>
        void validar(const U& A, const U& B, const string& tipoOperacion);

        OperacionesBasicas<T> operator+ (const OperacionesBasicas<T> &otraMatriz);
        OperacionesBasicas<T> operator- (const OperacionesBasicas<T> &otraMatriz);
        OperacionesBasicas<T> operator* (const OperacionesBasicas<T> &otraMatriz);
};

#include "OperacionesBasicas.cpp"
#endif