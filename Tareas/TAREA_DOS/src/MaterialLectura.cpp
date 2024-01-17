/**
 * @file MaterialLectura.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo fuente para métodos de MaterialLectura.
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */
#include "MaterialLectura.hpp"

/**
 * @brief Establece los valores específicos a lectura del material por medio de la terminal.
 * 
 */
void MaterialLectura::setLectura(){
    grupo = "Material de Lectura";
    cout << "Ingrese el nombre de la Editorial: ";
    getline(cin>>ws, editorial);

    cout << "Ingrese la cantidad de hojas: ";
    cin >> cantidadHojas;

    cout << endl;
}

/**
 * @brief Imprime valores específicos a lectura del material.
 * 
 */
void MaterialLectura::mostrarLectura(){
    cout << "Grupo: " << grupo << endl;
    cout << "Editorial: " << editorial << endl;
    cout << "Cantidad de hojas: " << cantidadHojas << endl << endl;
}