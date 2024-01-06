#include <iostream>
using namespace std;

// Se establece la variable global.
int g;

int main(){
    // Se establece la variable local.
    int a, b;

    // Se definen y suman.
    a = 10;
    b = 20;
    g = a + b;

    // Se imprime el resultado.
    cout << g;

    return 0;
}