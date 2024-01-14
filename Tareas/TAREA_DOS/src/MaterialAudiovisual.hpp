#ifndef MATERIAL_AUDIOVISUAL_HPP
#define MATERIAL_AUDIOVISUAL_HPP

#include "Material.hpp"

class MaterialAudiovisual : public Material{
    public:
        void setVisual();
        void mostrarVisual();
    protected:
        int duracion;
};

#endif