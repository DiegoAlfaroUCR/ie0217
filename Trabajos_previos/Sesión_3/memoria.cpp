#include <iostream>
using namespace std;

int main(){
    // Se declaran las variables.
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // Se imprime la dirección de memoria de las variables.
    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;
    cout << "Address of var3: " << &var3 << endl;

    return 0;
}