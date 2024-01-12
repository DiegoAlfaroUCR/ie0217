/**
 * @file iteradorBidireccional.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <list>
using namespace std;

/**
 * @brief Funcion que inicializa el programa.
 * 
 * @return int Codigo de salida del programa.
 */
int main(){
    /* Se crea una lista con numeros enteros nums. */
    list<int> nums {1, 2, 3, 4, 5};

    /* Se inicializa el iterador al punto inicial de nums. */
    list<int>::iterator itr = nums.begin();

    cout << "Moving forward: " << endl;

    /* Se muestran los elementos en orden hacia adelante. */
    while (itr != nums.end()) {
        cout << *itr << ", ";
        /* Se mueve el iterador a la siguiente posicion. */
        itr++;
    }
    
    cout << endl << "Moving backward: " << endl;

    /* Se muestran los elementos en orden hacia atras. */
    while (itr != nums.begin()) { // Se hace hasta que llegue de nuevo al inicio.
        if (itr != nums.end())    // Se hace si el iterador no se encuentra despues del ultimo elemento. 
        {
            cout << *itr << ", ";
        }

        /* Se mueve el iterador hacia atrás. */
        itr--;
    }
    
    /* Se muestran los elementos. */
    cout << *itr << endl;

    return 0;
}