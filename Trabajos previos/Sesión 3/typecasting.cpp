#include <iostream>
using namespace std;

int main(){
    int num_int = 9; // Se asigna valor a un entero.

    double num_double; // Se declara variable tipo double.

    // Conversión implicita.
    num_double = num_int;

    cout << "num_init = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    
    double num_double2 = 3.56; // Se declara un valor double.
    cout << "num_double2 = " << num_double2 << endl;

    // Conversión explícita.
    int num_int2 = (int)num_double2; // Conversión tipo C.
    cout << "num_int2 = " << num_int2 << endl;

    int num_int3 = int(num_double2); // Conversión tipo función.
    cout << "num_int3 = " << num_int3 << endl;

    return 0;
}