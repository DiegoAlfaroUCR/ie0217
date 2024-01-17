/**
 * @file Pelicula.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo fuente de métodos de Pelicula.
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#include "Pelicula.hpp"

/**
 * @brief Establece los valores de un objeto Pelicula.
 * 
 * Este método define el tipo, información propia de Pelicula y llama funciones setLectura() y setGeneral().
 * 
 */
void Pelicula::crearPelicula(){
    tipo = "Pelicula";
    setGeneral();
    setVisual();

    cout << "Ingrese un resumen del contenido: ";
    getline(cin>>ws, resumen);

    cout << "Ingrese material relacionado: ";
    getline(cin>>ws, relacionado);

    cout << endl;
}

/**
 * @brief Imprime el tamaño de Pelicula según duracion.
 * 
 */
void Pelicula::tamaño(){
    if (duracion < 90)
    {
        cout << "La Pelicula '"<< titulo <<"' es corta. "<< endl;
    } else if (duracion < 150)
    {
        cout << "La Pelicula '"<< titulo <<"' es mediana. "<< endl;
    } else if (150 <= duracion)
    {
        cout << "La Pelicula '"<< titulo <<"' es larga. "<< endl;
    }
}

/**
 * @brief Muestra información de objeto Pelicula.
 * 
 * Imprime resumen, material relacionado y llama funciones mostrarGeneral() y mostrarLectura().
 * 
 */
void Pelicula::mostrarInfo(){
    mostrarGeneral();
    mostrarVisual();

    tamaño();
    cout << "Mostrando resumen de la Pelicula '" << titulo << "':" << endl;
    cout << resumen << endl << endl;

    cout << "Material relacionado a '" << titulo << "' que le podria gustar:" << endl;
    cout << relacionado << endl;
}