#include <iostream>
using namespace std;

// Función con parametro float.
float absolute(float var){
    if (var < 0.0){
        var = -var;
    }
    return var;
}

// Función con parametro entero.
int absolute(int var){
    if (var < 0){
        var = -var;
    }
    return var;
}

int main(){
    // Se llama la función con parametro entero.
    cout << "Absolute value of -5 = " << absolute(-5) << endl;

    // Se llama la función con parametro float.
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;

    return 0;
}