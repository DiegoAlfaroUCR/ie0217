#include <iostream>
using namespace std;

int main(){
    // Se definen el caracter y numeros a usar.
    // Para esto se reciben los inputs del usuario.
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    // Se inicia un switch case para cada tipo de operador.
    switch (oper)
    {
    case '+': // Se suman los números.
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-': // Se restan los números.
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*': // Se multiplican los números.
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/': // Se dividen los números.
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    
    default: // Caso donde el caracter no corresponde a lo esperado.
    cout << "Error ! The operator is not correct";
        break;
    }

    return 0;
}