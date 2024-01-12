/**
 * @file vector.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Funcion que inicializa el programa.
 * 
 * @return int Codigo de salida del programa.
 */
int main(){
    /* Se inicializa un vector de tipo entero. */ 
    vector<int> numbers = {1, 100, 10, 70, 100};

    /* Se muestra el vector, sale en el orden que se asigno. 
       Ademas no se repite el 100, pues no acepta numeros repetidos.*/
    cout << "Numbers are: ";
    for (auto &num: numbers)
    {
        cout << num << ", ";
    }
    
    return 0;
}