#ifndef CORREO_HPP
#define CORREO_HPP

#include <iostream>
#include <string>
#include <regex>
#include <stdexcept>
using namespace std;

class Correo {
    private:
        const regex expresion = regex("a@");
        const regex arroba = regex("@");
    public:
        bool verificar();
};

#endif