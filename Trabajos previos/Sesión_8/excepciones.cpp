/**
 * @file excepciones.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

/**
 * @brief Funcion main que inicia el programa.
 * 
 * @return int Código de sálida 0.
 */
int main(){
    double numerator, denominator, divide;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try
    {
        // Se muestra excepción si denominador es 0.
        if (denominator == 0)
        {
            throw 0; // El numero es capturado por catch().
        }
        
        // Caso donde denominador no es 0.
        divide = numerator / denominator;
        cout << numerator << " / " << denominator << " = " << divide << endl;
    }

    catch(int num_exception) // Si se obtiene el error generado por throw().
    {
        cout << "ERROR: Cannot divide by " << num_exception << endl;
    }

    /*Tambien se puede generar una excepción general en caso de que se de un error desconocido.
      Se usa la sintaxis; */
    catch(...){}

    return 0;
}