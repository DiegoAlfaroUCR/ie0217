// Función de factorial.

#include <iostream>
using namespace std;

int factorial(int);

int main(){
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n); // Se registra el factorial de n.
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n){
    if (n > 1){ // Caso recursivo.
        return n*factorial(n-1); // Se multiplica n por el factorial de n -1.
    } else {
        return 1; // Caso de salida.
    }
}