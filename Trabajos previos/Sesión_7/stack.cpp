/**
 * @file stack.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <stack>
using namespace std;

/**
 * @brief Funcion que inicializa el programa.
 * 
 * @return int Codigo de salida del programa.
 */
int main(){
    // Se crea un stack de ints.
    stack<int> numbers;

    // Se agregan al stack los numeros.
    numbers.push(1);
    numbers.push(100);
    numbers.push(10);

    cout << "Numbers are: ";

    // Se accede a cada elemento al leer el primer elemento y luego
    // sacarlo con la funcion pop.

    while (!numbers.empty())
    {
        // Se muestra el primer elemento.
        cout << numbers.top() << ", ";

        // Se elimina el primer elemento del stack.
        numbers.pop();
    }
    
    return 0;
}