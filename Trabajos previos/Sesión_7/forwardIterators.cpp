/**
 * @file forwardIterators.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <forward_list>
using namespace std;

/**
 * @brief Funcion que inicializa el programa.
 * 
 * @return int Codigo de salida del programa.
 */
int main(){
    forward_list<int> nums{1, 2, 3, 4};

    /* Se inicializa un iterador que apunta al inicio de la forward list. */
    forward_list<int>::iterator itr = nums.begin();

    while (itr != nums.end())
    {
        /* Se accede al valor del iterador y se guarda. */
        int original_value = *itr;

        /* Se asigna el nuevo valor al operador. */
        *itr = original_value * 2;

        /* Se mueve el operador a la siguiente posicion. */
        itr++;
    }
    
    /* Se muestran los contenidos de los numeros. */
    for (int num: nums)
    /* Esta sintaxis itera por cada elemento de la lista. Sirve para arrays tambien. */
    {
        cout << num << ", ";
    }
    
    return 0;
}