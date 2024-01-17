/**
 * @file classTemplate2.cpp
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
 * @brief Template de ClassTemplate.
 * 
 * @tparam T Tipo de variable T.
 * @tparam U Tipo de variable U.
 * @tparam V Tipo de variable V.
 */
template <class T, class U, class V = char> // Se declara V como char por defecto.
class ClassTemplate {
    private:
    T var1; /**< Variable de tipo T. */
    U var2; /**< Variable de tipo U. */
    V var3; /**< Variable de tipo V. */
    
    public:
    /**
     * @brief Constructor de ClassTemplate.
     * 
     * @param v1 
     * @param v2 
     * @param v3 
     */
    ClassTemplate(T v1, U v2, V v3) : var1(v1),  var2(v2), var3(v3) {}

    /**
     * @brief Imprime los valores guardados en ClassTemplate.
     * 
     */
    void printVar(){
        cout << "Var1 = " << var1 << endl;
        cout << "Var2 = " << var2 << endl;
        cout << "Var3 = " << var3 << endl;
    }
};


/**
 * @brief Funcion main que inicia el programa.
 * 
 * @return int Código de sálida 0.
 */
int main(){
    /* Se crea un objetos de tipo int, dobule y char. */
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "obj1 values: " << endl;
    obj1.printVar();

    /* Se crea objetos de tipo int, double y booleanos. */
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();

    return 0;
}