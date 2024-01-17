/**
 * @file MaterialPrecio.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo fuente para métodos de MaterialPrecio.
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#include "MaterialPrecio.hpp"

/**
 * @brief Método para guardar información de un Material en datos.
 * 
 * Se lee la información del titulo, precio y tipo de los materiales guardados en Libros, Noticias,
 * Podcasts y Peliculas, y se registran en datos por medio de instancias de datosMaterial. 
 * 
 */
void MaterialPrecio::obtenerDatos(){
    // Se limpia el vector para evitar repeticiones, inclusión de materiales borrados.
    datos.clear();

    /* Se recorre cada vector de materiales, por cada material se accede al titulo, precio y tipo,
       se guardan en un nuevo struct de datosMaterial y este se agrega a datos.
    */
    for (auto &material : Libros)
    {
        datosMaterial nuevoMaterial;
        nuevoMaterial.titulo = material->titulo;
        nuevoMaterial.tipo = material->tipo;
        nuevoMaterial.precio = material->precio;
        datos.push_back(nuevoMaterial);
    }

    for (auto &material : Noticias)
    {
        datosMaterial nuevoMaterial;
        nuevoMaterial.titulo = material->titulo;
        nuevoMaterial.tipo = material->tipo;
        nuevoMaterial.precio = material->precio;
        datos.push_back(nuevoMaterial);
    }

    for (auto &material : Peliculas)
    {
        datosMaterial nuevoMaterial;
        nuevoMaterial.titulo = material->titulo;
        nuevoMaterial.tipo = material->tipo;
        nuevoMaterial.precio = material->precio;
        datos.push_back(nuevoMaterial);
    }

    for (auto &material : Podcasts)
    {
        datosMaterial nuevoMaterial;
        nuevoMaterial.titulo = material->titulo;
        nuevoMaterial.tipo = material->tipo;
        nuevoMaterial.precio = material->precio;
        datos.push_back(nuevoMaterial);
    }
}

/**
 * @brief Método para ordenar datos según el precio de materiales.
 * 
 * Este método emplea un algoritmo de ordenamiento bubble sort para ordenar los structs en orden
 * ascendente o descendente según el precio del material.
 * 
 */
void MaterialPrecio::ordenar(){
    // Se llama obtenerDatos() para actualizar datos con la información actual.
    obtenerDatos();

    // Caso donde no hay elementos por ordenar.
    if (datos.size() == 0)
    {
        cout << endl << "No hay datos por ordenar." << endl;
        return;
    }
    
    // Se imprime menu, se ordena ascendiente o descendiente según la opción dada.
    cout << "Ordenar en orden ascendiente (1) o descendiente (2) ?" << endl;
    cout << "Ingrese la opcion: ";
    int opcion; cin >> opcion;

    /*  Bubble Sort */
    /* Se recorre todo el vector por pasos (steps), el tipo del contador se cambio para ser compatible con size(). */
    for (long long unsigned int step = 0; step < (datos.size()-1); ++step)
    {
        int swapped = 0; // Contador de swaps hecho por step.

        /* Se recorren todos los elementos en datos. inicia en primer elemento y se llega hasta el final - numero de pasos. */
        for (long long unsigned int i = 0; i < (datos.size()-step-1); i++)
        {
            bool comparacion; // Bandera de cual comparación se debe hacer.
            switch (opcion)
            {
            case 1: {   // Caso de orden ascendiente.
                comparacion = (datos[i].precio > datos[i + 1].precio);
                break;}
            case 2: {   // Caso de orden descendiente.
                comparacion = (datos[i].precio < datos[i + 1].precio);
                break;
            }
            default:{
                cout << "Opcion no valida." << endl;
                return;}
            }

            if (comparacion)
            {
                // Se cambian los elementos de posición.
                datosMaterial temp = datos[i];
                datos[i] = datos[i + 1];
                datos[i + 1] = temp;

                swapped = 1; // Se registra que se realizaron cambios.
            }           
        }
        /* Si no se hicieron cambios se finaliza el algoritmo, esto para reducir redundancias. */
        if (swapped == 0)
        {
            break;
        }
    }
    /* Se imprimen los contenidos de datos. */
    imprimir();
}

/**
 * @brief Método para imprimir la información guardada en datos.
 * 
 */
void MaterialPrecio::imprimir(){
    /* Se imprime la infomación de cada struct en datos. */
    cout << endl << "Materiales ordenados: " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    for (auto &elemento : datos)
    {
        cout << "Tipo: " << left << setw(20) << elemento.tipo;
        cout << "Titulo: " << left << setw(20) << elemento.titulo;
        cout << "Precio: " << elemento.precio << endl;
    }
    cout << "---------------------------------------------------------------------" << endl;
}