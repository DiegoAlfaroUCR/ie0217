#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <string>

template <typename T>
class Contacto {
    public:
        Contacto(T nombre, T telefono, T email);
        T getNombre() const; /* const significa que siempre se retorna lo mismo, no se cambia. */
        T getTelefono() const;
        T getEmail() const;

    private:
        T nombre;
        T telefono;
        T email;
};

/* Esto se agrega por ser un template para que no tire un error del compilador. */
#include "Contacto.cpp"
#endif