/**
 * @file iteradorVector.cpp
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
    vector<string> languages = {"Python", "C++", "Java"};

    /* Se crea un iterador a un vector tipo string.
       Tambien se pordía usar: auto itr = languages.begin() para el
       puntero que apunta al inicio del vector. */
    vector<string>::iterator itr;
    
    /* Se itera sobre los elementos del vector. */
    for (itr = languages.begin(); itr < languages.end(); ++itr)
    {
        cout << *itr << ", ";
    }
    
    return 0;
}