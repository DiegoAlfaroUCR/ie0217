/**
 * @file algoritmos.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>     // cout
#include <algorithm>    // sort
#include <vector>       // vector
using namespace std;

/**
 * @brief Funcion para identificar si un numero es menor a otro.
 * 
 * @param i Entero que se verifica si es menor a j.
 * @param j Entero que se verifica si es mayor a i.
 * @return true Si i<j
 * @return false Si i>j
 */
bool myfunction (int i, int j) { return(i<j);}

/**
 * @brief Struct myClass
 * 
 * Posee variable de tipo myClass myobject y se establece el retorno del
 * operador ().
 */
struct myClass {
    bool operator() (int i, int j) { return (i<j);}
} myobject;


/**
 * @brief Funcion que inicializa el programa.
 * 
 * @return int Codigo de salida del programa.
 */
int main(){
    /* Se genera un array de enteros de tamaño 8. */
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};
    /* Se genera un vector que contiene el array myints. */
    vector<int> myvector (myints, myints + 8);                  // Genera 32, 71, 12, 45, 26, 80, 53, 33

    /* Se ordena por defecto por medio de operador < desde inicio hasta 
       elemento 4 del vector.*/
    sort (myvector.begin(), myvector.begin() + 4);              // Genera (12, 32, 45, 71) 26, 80, 53, 33

    /* Se ordena por medio de funcion myfunction de elemento 5 
       hasta ultimo elemento. */
    sort (myvector.begin()+4, myvector.end(), myfunction);      // Genera 12, 32, 45, 71, (26, 33, 53, 80)

    /* Se ordena usando objeto sobre todo el intervalo. */
    sort (myvector.begin(), myvector.end(), myobject);          // Genera (12, 26, 32, 33, 45, 53, 71, 80)

    /* Se muestra el contenido. */
    cout << "myvector contains:";
    
    /* Se crea un iterador, y se da hasta que no sea igual a posterior al final del vector.*/
    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it) 
    {
        cout << " " << *it;
    }
    cout << "\n";
    
    return 0;
}