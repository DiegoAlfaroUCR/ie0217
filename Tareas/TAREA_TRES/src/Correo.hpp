#ifndef CORREO_HPP
#define CORREO_HPP

#include <iostream>
#include <string>
#include <regex>
#include <stdexcept>
using namespace std;

class Correo {
    private:
        const regex expresion = regex("^(?![\\.\\-\\_])[a-zA-Z0-9\\.\\-\\_]{0,14}[a-zA-Z0-9]@[a-zA-Z]+\\.[a-zA-Z]{2,4}$");
        const regex arroba = regex("@");
    public:
        bool verificar();
};

#endif