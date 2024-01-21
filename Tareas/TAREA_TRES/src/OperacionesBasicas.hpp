#ifndef OPERACIONES_BASICAS_HPP
#define OPERACIONES_BASICAS_HPP

#include "Matriz.hpp"

template <class T>
class OperacionesBasicas: public Matriz<T> {
    public: // De momento
        void validar(const OperacionesBasicas<T>& B, const string& tipoOperacion);
        OperacionesBasicas<T> operator+ (const OperacionesBasicas<T> &otraMatriz);
        OperacionesBasicas<T> operator- (const OperacionesBasicas<T> &otraMatriz);
        OperacionesBasicas<T> operator* (const OperacionesBasicas<T> &otraMatriz);
};

#include "OperacionesBasicas.cpp"
#endif