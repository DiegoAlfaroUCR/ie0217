#include <iostream>
using namespace std;

// Se crea una función que imprime mensaje con los valores.
void displayNum(int n1, float n2){
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}

int main(){
    int num1 = 5;
    double num2 = 5.5;
    // Se llama la función con valores específicos.
    displayNum(num1,num2);
    return 0;
}