/**
 * @file set.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <set>
using namespace std;

/**
 * @brief Funcion que inicializa el programa.
 * 
 * @return int Codigo de salida del programa.
 */
int main(){
    /* Se inicializa un set de tipo entero. Se inicializa desordenado. */
    set<int> numbers = {1, 100, 10, 70, 100};

    /* Se imprime el set, sale ordenado. Tampoco muestra el 100 repetido. */
    cout << "Numbers are: ";
    for (auto &num: numbers)
    {
        cout << num << ", ";
    }
    
    return 0;
}