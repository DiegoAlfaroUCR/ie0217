/**
 * @file regex.cpp
 * @author Diego Alfaro Segura diego.alfarosegura@ucr.ac.cr
 * @brief 
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <regex>
using namespace std;


/**
 * @brief Funcion main que inicia el programa.
 * 
 * @return int Código de sálida 0.
 */
int main(){
    // Se crea una expreción regular para ya sea "my regex" o "your regex". 
    auto const regex = std::regex("(my|your) regex");

    /* Se crean strings diferentes y se busca la expreción regular en cada uno.
       Si se encuentra se devuelve un true, sino es false. */
    auto const myText = string("A piece of text that contains my regex.");
    bool const myTextContainsRegex = regex_search(myText, regex);

    auto const yourText = string("A piece of text that contains your regex.");
    bool const yourTextContainsRegex = regex_search(yourText, regex);

    auto const theirText = string("A piece of text that contains their regex.");
    bool const theirTextContainsRegex = regex_search(theirText, regex);

    // Se imprimen los resultados.
    cout << boolalpha
         << myTextContainsRegex << "\n"
         << yourTextContainsRegex << "\n"
         << theirTextContainsRegex << "\n";

    return 0;
}