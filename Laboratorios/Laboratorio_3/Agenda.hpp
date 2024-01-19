#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <stdexcept>
#include "Contacto.hpp"

template <typename T>
class Agenda {
    public:
        void agregarContacto(const Contacto<T>& contacto);
        void eliminarContacto(const T& telefono);
        void mostrarContactos() const;

        std::list<Contacto<T>> buscarContactos(const std::string& patron) const;
    
    private:
        // Lista de contactos tipo Contacto<T>
        std::list< Contacto <T> > contactos;
};

/* Esto se agrega por ser un template para que no tire un error del compilador. */
#include "Agenda.cpp"
#endif