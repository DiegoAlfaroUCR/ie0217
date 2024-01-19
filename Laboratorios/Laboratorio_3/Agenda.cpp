#include "Agenda.hpp"

// Método para agregar contacto
template <typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& contacto){
    // Verificar si ya existe el contacto
    typename std::list<Contacto<T>>::const_iterator it;         // Se crea un iterador de la lista.
    for(it = contactos.begin(); it != contactos.end(); it++){
        if (it->getTelefono() == contacto.getTelefono()) {
            // Se lanza error de argumento invalido.
            throw std::invalid_argument("Ya existe un contacto con este numero");
        }
    }
    // Se agrega el contacto.
    contactos.push_back(contacto);
}

//  Método para eliminar contacto de la agenda.
template <typename T>
void Agenda<T>::eliminarContacto(const T& telefono){
    typename std::list<Contacto<T>>::const_iterator it; // Se crea un iterador de la lista.

    for(it = contactos.begin(); it != contactos.end(); it++){
        if (it->getTelefono() == telefono) { // Si el numero dado se encuentra.
            contactos.erase(it);             // Se borra el contacto de la lista contactos.
            return;
        }
    }
    // Se lanza error de fuera de rango.
    throw std::out_of_range("No se encuentra un contacto con ese numero");
}

// Método para mostrar los contactos guardados.
template <typename T>
void  Agenda<T>::mostrarContactos() const {
    typename std::list<Contacto<T>>::const_iterator it;     // Se crea un iterador de la lista.

    // Se imprimen todos los atributos de cada contacto en contactos.
    for(it = contactos.begin(); it != contactos.end(); ++it){
        std::cout << "Nombre: " << it->getNombre() << " "
                  << "Telefono: " << it->getTelefono() << " "
                  << "Email: " << it->getEmail() << std::endl;
    }
}

/**
 * @brief Método para encontrar contactos según un patron string.
 * 
 * El método busca un patrón dado en el email y nombre del contacto, si lo encuentra en alguno de estos
 * agrega el contacto a una lista de contactos con el patrón.
 * 
 * @tparam T Tipo de variable dado en la información del contacto, se espera string.
 * @param patron Un string a buscar en los nombres y emails de los contactos.
 * @return std::list<Contacto<T>> Lista de contactos que poseen el patron buscado en sus nombres o emails.
 */
template <typename T>
std::list<Contacto<T>> Agenda<T>::buscarContactos(const std::string& patron) const {
    /* Se crea una lista de Contactos<T> para guardar contactos con el patron. */
    std::list<Contacto<T>> resultados;

    /* Se crea una variable que apunta a la posición de un patron en un string. */
    std::string::size_type pos;

    /* Se crea un iterador para recorrer una lista de Contactos. */
    typename std::list<Contacto<T>>::const_iterator it;

    /* For loop para recorrer los contactos y leer sus nombres. */
    for (it = contactos.begin(); it != contactos.end(); it++) {

        /* Se asigna la posición del primer elemento en el nombre donde se da el patrón. https://cplusplus.com/reference/string/string/find/ */
        pos = it->getNombre().find(patron);

        /* Si pos no es igual a npos significa que si se encontró una posición, si no está el patrón sería npos.*/
        if (pos != std::string::npos) {
            /* Se agrega el contacto a resultados.*/
            resultados.push_back(*it);
        } else {
            /* Se repite el procedimiento pero ahora con el email. */
            pos = it->getEmail().find(patron);
            if (pos != std::string::npos) {
                resultados.push_back(*it);
            } 
        }
    }
    return resultados;
}