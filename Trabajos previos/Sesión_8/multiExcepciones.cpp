/**
 * @file multiExcepciones.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-17
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
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;

    cout << "Enter array index: ";
    cin >> index;

    try
    {
        // Excepcion si índice se sale del array.
        if (index >= 4)
        {
            throw "Error: Array out of bounds!";
        }

        // Caso donde no se salió el índice.
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;

        // Excepcion si denominador es 0.
        if (denominator== 0) {
            throw 0;
        }
        
        // Solo ocurre si denominador no es 0.
        arr[index] = numerator / denominator;
        cout << arr[index] << endl;        
    }

    // Se atrapa la excepcion por índice fuera del array.
    catch(const char* msg) {
        cout << msg << endl;;
    }
    
    // Se atrapa la excepcion por division entre 0.
    catch(int num){
        cout << "Error: Cannot divide by " << num << endl;
    }

    // Se atrapa cualquier otra excepcion.
    catch(...){
        cout << "Unexpected exception!" << endl;
    }

    return 0;
}