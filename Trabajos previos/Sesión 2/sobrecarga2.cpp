#include <iostream>
using namespace std;

// Función para 2 parametros.
void display(int var1, double var2){
    cout << "Interger number: " << var1;
    cout << " and double number: " << var2 << endl;
}

// Función con 1 parametro, double.
void display(double var){
    cout << "Double number: " << var << endl;
}

// Función con 1 parametro, int.
void display(int var){
    cout << "Interger number: " << var << endl;
}

int main(){
    int a = 5;
    double b = 5.5;

    // Se llama la función para tipo entero.
    display(a);

    // Se llama la funcion para tipo doble.
    display(b);

    // Se llama la funcion con dos parametros.
    display(a, b);

    return 0;
}