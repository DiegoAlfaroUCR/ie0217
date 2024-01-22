#ifndef CORREO_HPP
#define CORREO_HPP

#include <iostream>
#include <string>
#include <regex>
using namespace std;

class Correo {
    private:
        const regex expresion = regex("a");
    public:
        bool verificar();
};

#endif