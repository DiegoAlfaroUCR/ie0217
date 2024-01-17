/**
 * @file MaterialAudiovisual.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo fuente para métodos de MaterialAudiovisual.
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#include "MaterialAudiovisual.hpp"

/**
* @brief Establece los valores específicos a audiovisuales del material por medio de la terminal.
* 
*/
void MaterialAudiovisual::setVisual(){
    grupo = "Material Visual";
    cout << "Ingrese la duracion en minutos: ";
    cin >> duracion;

    cout << endl;
}

/**
 * @brief Imprime valores específicos a audiovisuales del material.
 * 
 */
void MaterialAudiovisual::mostrarVisual(){
    cout << "Grupo: " << grupo << endl;
    cout << "Duracion en minutos: " << duracion << endl << endl;
}