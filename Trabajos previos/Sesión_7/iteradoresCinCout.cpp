/**
 * @file iteradoresCinCout.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <iterator>
using namespace std;

/**
 * @brief Funcion que inicializa el programa.
 * 
 * @return int Codigo de salida del programa.
 */
int main(){
    /* Se crea un iterador que lee valores de cin. */
    istream_iterator<int> input_itr(cin);

    /* Se crea un iterador que muestra valores en la consola. */
    ostream_iterator<int> output_itr(cout, " ");

    return 0;
}