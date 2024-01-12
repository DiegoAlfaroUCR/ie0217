/**
 * @file unorderedSet.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <unordered_set>
using namespace std;

/**
 * @brief Funcion que inicializa el programa.
 * 
 * @return int Codigo de salida del programa.
 */
int main(){
    /* Se inicializa un set desordenado de tipo entero. Se inicializa desordenado. */
    unordered_set<int> numbers = {1, 100, 10, 70, 100};

    /* Se imprime y devuelve los numeros sin un orden claro, es aleatorio a como se almacena.
       Tampoco repite el 100. */
    cout << "Numbers are: ";
    for (auto &num: numbers)
    {
        cout << num << ", ";
    }
    
    return 0;
}