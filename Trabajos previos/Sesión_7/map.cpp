/**
 * @file map.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <map>
using namespace std;

/**
 * @brief Funcion que inicializa el programa.
 * 
 * @return int Codigo de salida del programa.
 */
int main(){
    /* Se asigna un key int, y un string que le corresponde a la key. */
    map<int, string> student;

    /* Se usa operador [] para agregar elementos. 
       El numero dentro del [] indica la key y se asigna el string. */
    student[1] = "Jacqueline";
    student[2] = "Blake";

    /* Se usa metodo insert() para agregar elementose en forma de pares. */
    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(4, "Blake"));

    /* Se agregan elementos con keys duplicadas, el segundo call le cae encima al primero. */
    student[5] = "Timothy";
    student[5] = "Aaron";

    /* Aquí cambié el contador de int a unsigned int pues el compilador me daba la alerta
       que es mala practica comparar int con unsigned int (.size() usa unsigned int) */
    for (unsigned int i = 1; i <= student.size(); i++) 
    {
        cout << "Student [" << i << "]: " << student[i] << endl;
    }
    
    return 0;
}