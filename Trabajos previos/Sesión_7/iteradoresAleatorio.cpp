/**
 * @file iteradoresAleatorio.cpp
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
    /* Se crea un vector de enteros vec. */
    vector<int> vec{1, 2, 3, 4};

    /* Se crean iteradores que apuntan al primer y ultimo elementos. */
    vector<int>::iterator itr_first = vec.begin();
    vector<int>::iterator itr_last = vec.end() - 1; // Menos 1 pues .end() apunta adelante del ultimo elemento. 

    /* Se muestran los elementos del vector. */
    cout << "First Element: " << *itr_first << endl;
    cout << "Second Element: " << itr_first[1] << endl;

    cout << "Second Last Element: " << *(itr_last - 1) << endl;
    cout << "Last Element: " << *itr_last << endl;

    return 0;
}