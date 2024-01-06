// Se incluye librería para usar strings.
#include <string>
#include <iostream>
// Se especifica el uso de las funciones con namespace std.
using namespace std;

int main(){
    // Se declaran las variables.
    string str, str2, str3;
    str = "Hola ";
    str2 = "Mundo";
    str3 = str + str2;
    cout << str3;
    return 0;
}