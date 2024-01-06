#include <iostream>
using namespace std;

int main(){
    // Se definen las variables.
    int var1, var2;
    var1 = 0;

    // Se usa operador para asignar valor de var2 según condición.
    var2 = (var1 == 0) ? 15:27;
    cout << "var2: \n" << var2;
    return 0;
}