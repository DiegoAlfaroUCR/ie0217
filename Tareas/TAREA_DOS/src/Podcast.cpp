/**
 * @file Podcast.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo fuente de métodos de Podcast.
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#include "Podcast.hpp"

/**
 * @brief Establece los valores de un objeto Podcast.
 * 
 * Este método define el tipo, información propia de Podcast y llama funciones setLectura() y setGeneral().
 * 
 */
void Podcast::crearPodcast(){
    tipo = "Podcast";
    setGeneral();
    setVisual();

    cout << "Ingrese un resumen del contenido: ";
    getline(cin>>ws, resumen);

    cout << "Ingrese material relacionado: ";
    getline(cin>>ws, relacionado);

    cout << endl;
}

/**
 * @brief Imprime el tamaño de Podcast según duracion.
 * 
 */
void Podcast::tamaño(){
    if (duracion < 30)
    {
        cout << "El Podcast '"<< titulo <<"' es corto. "<< endl;
    } else if (duracion < 90)
    {
        cout << "El Podcast '"<< titulo <<"' es mediano. "<< endl;
    } else if (90 <= duracion)
    {
        cout << "El Podcast '"<< titulo <<"' es largo. "<< endl;
    }
}

/**
 * @brief Muestra información de objeto Podcast.
 * 
 * Imprime resumen, material relacionado y llama funciones mostrarGeneral() y mostrarLectura().
 * 
 */
void Podcast::mostrarInfo(){
    mostrarGeneral();
    mostrarVisual();

    tamaño();
    cout << "Mostrando resumen del Podcast '" << titulo << "':" << endl;
    cout << resumen << endl << endl;

    cout << "Material relacionado a '" << titulo << "' que le podria gustar:" << endl;
    cout << relacionado << endl;
}