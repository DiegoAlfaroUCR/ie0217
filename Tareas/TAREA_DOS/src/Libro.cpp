/**
 * @file Libro.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo fuente para métodos de Libro.
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#include "Libro.hpp"

/**
 * @brief Establece los valores de un objeto libro.
 * 
 * Este método define el tipo, información propia de Libro y llama funciones setLectura() y setGeneral().
 * 
 */
void Libro::crearLibro(){
    tipo = "Libro";
    setGeneral();
    setLectura();

    cout << "Ingrese un resumen del contenido: ";
    getline(cin>>ws, resumen);

    cout << "Ingrese material relacionado: ";
    getline(cin>>ws, relacionado);

    cout << endl;
}

/**
 * @brief Imprime el tamaño del Libro según cantidadHojas.
 * 
 */
void Libro::tamaño(){
    if (cantidadHojas < 100)
    {
        cout << "El libro '"<< titulo <<"' es corto. "<< endl;
    } else if (cantidadHojas < 200)
    {
        cout << "El libro '"<< titulo <<"' es mediano. "<< endl;
    } else if (200 <= cantidadHojas)
    {
        cout << "El libro '"<< titulo <<"' es largo. "<< endl;
    }
}

/**
 * @brief Muestra información de objeto Libro.
 * 
 * Imprime resumen, material relacionado y llama funciones mostrarGeneral() y mostrarLectura().
 * 
 */
void Libro::mostrarInfo(){
    mostrarGeneral();
    mostrarLectura();

    tamaño();
    cout << "Mostrando resumen del Libro '" << titulo << "':" << endl;
    cout << resumen << endl << endl;

    cout << "Material relacionado a '" << titulo << "' que le podria gustar:" << endl;
    cout << relacionado << endl;
}