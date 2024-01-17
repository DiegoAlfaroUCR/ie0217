/**
 * @file Noticia.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo fuente para métodos de Noticia.
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#include "Noticia.hpp"

/**
 * @brief Establece los valores de un objeto Noticia.
 * 
 * Este método define el tipo, información propia de Noticia y llama funciones setLectura() y setGeneral().
 * 
 */
void Noticia::crearNoticia(){
    tipo = "Noticia";
    setGeneral();
    setLectura();

    cout << "Ingrese un resumen del contenido: ";
    getline(cin>>ws, resumen);

    cout << "Ingrese material relacionado: ";
    getline(cin>>ws, relacionado);

    cout << endl;
}

/**
 * @brief Imprime el tamaño del Noticia según cantidadHojas.
 * 
 */
void Noticia::tamaño(){
    if (cantidadHojas < 5)
    {
        cout << "La noticia '"<< titulo <<"' es corta. "<< endl;
    } else if (cantidadHojas < 10)
    {
        cout << "La noticia '"<< titulo <<"' es mediana. "<< endl;
    } else if (10 <= cantidadHojas)
    {
        cout << "La noticia '"<< titulo <<"' es larga. "<< endl;
    }
}

/**
 * @brief Muestra información de objeto Noticia.
 * 
 * Imprime resumen, material relacionado y llama funciones mostrarGeneral() y mostrarLectura().
 * 
 */
void Noticia::mostrarInfo(){
    mostrarGeneral();
    mostrarLectura();

    tamaño();
    cout << "Mostrando resumen de la Noticia '" << titulo << "':" << endl;
    cout << resumen << endl << endl;

    cout << "Material relacionado a '" << titulo << "' que le podria gustar:" << endl;
    cout << relacionado << endl;
}