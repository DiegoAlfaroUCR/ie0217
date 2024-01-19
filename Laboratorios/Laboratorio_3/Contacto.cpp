#include "Contacto.hpp"

// Constructor que asigna los atributos de la clase. 
template <typename T>
Contacto<T>::Contacto(T nombre, T telefono, T email)
 : nombre(nombre), telefono(telefono), email(email) {}

// Devuelve el nombre del contacto.
template <typename T>
T Contacto<T>::getNombre() const {
    return nombre;
}

// Devuelve el telefono del contacto.
template <typename T>
T Contacto<T>::getTelefono() const {
    return telefono;
}

// Devuelve el email del contacto.
template <typename T>
T Contacto<T>::getEmail() const {
    return email;
}
