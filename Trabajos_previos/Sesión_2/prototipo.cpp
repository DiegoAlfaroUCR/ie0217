#include <iostream>
using namespace std;

// Se escribe el encabezado para el prototipo de la función.
int add(int, int);

int main(){
    int sum;

    sum = add(100, 78); // Se llama la función.

    cout << "100 + 78 = " << sum << endl;

    return 0;
}

// Se define la función.
int add(int a, int b){
    return (a+b);
}