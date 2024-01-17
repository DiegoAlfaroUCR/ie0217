/**
 * @file classTemplate.cpp
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
 * @brief Template de clase T
 * 
 * @tparam T Tipo de varable.
 */
template <class T>
class Number {
    private:
    T num; /**< Variable de tipo T. */

    public:
    /**
     * @brief Constructor de clase Number.
     * 
     * Establece el parametro de entrada como num.
     * 
     * @param n Variable de tipo T.
     */
    Number(T n) : num(n) {}

    /**
     * @brief Retorna valor de num.
     * 
     * @return T Valor de num.
     */
    T getNum(){
        return num;
    }
};

/**
 * @brief Funcion main que inicia el programa.
 * 
 * @return int Código de sálida 0.
 * 
 * */
int main(){
    // Se crea un objeto de tipo entero.
    Number<int> numberInt(7);

    // Se crea un objeto de tipo double.
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}