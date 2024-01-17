/**
 * @file functionTemplate.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

/**
 * @brief Template para suma.
 * 
 * @tparam T Tipo de variable.
 * @param num1 Número por sumar con num2.
 * @param num2 Número por sumar con num1.
 * @return T Suma de num1 y num2 de tipo T.
 */
template<typename T> 
T add(T num1, T num2) {
    return (num1 + num2);
}

/**
 * @brief Funcion main que inicia el programa.
 * 
 * @return int Código de sálida 0.
 */
int main(){
    int result1;
    double result2;

    // Se llama con ints.
    result1 = add<int>(2, 3);
    cout << result1 << endl;

    // Se llama con doubles.
    result2 = add<double>(2.2, 3.3);
    cout << result2 << endl;

    return 0;
}
