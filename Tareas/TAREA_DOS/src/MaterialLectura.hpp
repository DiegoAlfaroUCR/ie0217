#ifndef MATERIAL_LECTURA_HPP
#define MATERIAL_LECTURA_HPP

#include "Material.hpp"

class MaterialLectura : public Material{
    public:
        void setLectura();
    protected:
        string editorial;
        int cantidadHojas;
};

#endif