/**
 * @file Material.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo fuente de métodos de Material.
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#include "Material.hpp"

/**
* @brief Establece los valores generales del material por medio de la terminal.
* 
*/
void Material::setGeneral() {
    /**
    * Inicializa los valores de los siguientes atributos a través de la consola;
    * -titulo, autor, precio, genero y estado
    * 
    * Usa variables tipo y titulo para imprimir el mensaje de forma correcta, por esto se define tipo en Material.
    */

    // Se lee el tipo para saber como imprimir el mensaje con pronombre correcto.
    string pronombre = "de la ";
    if (this->tipo == "Libro" || this->tipo == "Podcast")
    {
        pronombre = "del ";
    }
    
    // Se registran los datos.
    cout << "Ingrese el titulo " << pronombre << this->tipo << ": ";
    getline(cin>>ws, titulo); // getline() permite recibir un string con espacios de input.

    cout << "Ingrese el autor " << pronombre << this->tipo << ": ";
    getline(cin>>ws, autor);

    cout << "Ingrese el genero " << pronombre << this->tipo << ": ";
    getline(cin>>ws, genero);

    cout << "Ingrese el precio " << pronombre << this->tipo << ": ";
    cin >> precio;

    cout << "Ingrese el estado " << pronombre << this->tipo << " (disponible, prestad@ o reservad@): ";
    cin >> estado;

    cout << endl;
}

/**
 * @brief Imprime valores generales del material.
 * 
 */
void Material::mostrarGeneral(){
    string pronombre = "de la ";

    if (tipo == "Libro" || tipo == "Podcast")
    {
        pronombre = "del ";
    }
    cout << "-----Informacion " << pronombre << tipo << "-----" << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Genero: " << genero << endl;
    cout << "Precio: " << precio << endl;
    cout << "Estado: " << estado << endl;
}