#ifndef OPERACIONES_COMPLEJAS_HPP
#define OPERACIONES_COMPLEJAS_HPP

#include "OperacionesBasicas.hpp"
#include <complex>

class OperacionCompleja : public Matriz<complex<float>>{
    public:
        void stringComplejo(complex<float> complejo);
        OperacionCompleja operator+ (const OperacionCompleja &otraMatriz);
        OperacionCompleja operator- (const OperacionCompleja &otraMatriz);
        OperacionCompleja operator* (const OperacionCompleja &otraMatriz);

};

#include "OperacionCompleja.cpp"
#endif