#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // Se asigna memoria de tipo int a un puntero int.
    // Se hace type casting pues malloc retorna un void*.
    int* ptr = (int*)malloc(sizeof(int)); // Size of igual a C, donde se da tamaño en bytes de int.

    // Se asigna valor 5 a la memoria.
    *ptr = 5;

    cout << *ptr;

    return 0; 
}