/**
 * @file runtimeError.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <stdexcept>
using namespace std;

/**
 * @brief Funcion main que inicia el programa.
 * 
 * @return int Código de sálida 0.
 */
int main(){
    int numerador, denominador, resultado;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    // Se inicia bloque try.
    try {
        // Excepcion si division entre 0.
        if (denominador == 0) {
            // Se lanza un runtime error para el formato con e.what().
            throw runtime_error("Error: el denominador no puede ser cero.");
        }
        resultado = numerador / denominador;
        cout << "El resultado es: " << resultado << endl;

    }
    // Se imprime la excepcion con cerr en vez de cout.
    catch(const exception& e)
    {
        // e.what() muestra el mensaje defnido con runtime_error()
        cerr << e.what() << '\n';
    }
    
    return 0;
}