#include <iostream>
using namespace std;

int main(){
    // Se establece num.
    int num;

    cout << "Enter an interger: ";
    cin >> num;

    // Condición externa
    if (num != 0)
    {
        // Condición interna ocurre si num distinto a 0
        if (num > 0){
            cout << "The nummber is positive." << endl; // Si num > 0
        } else {
            cout << "The number is negative." << endl; // Si num < 0
        }
    }
    // Continua condición externa, si num igual a 0.
    else {
        cout << "The number is 0 and it is neither positive nor negative." << endl;
    }

    // Mensaje fuera de los if, siempre ocurre.
    cout << "This line is always printed." << endl;
    return 0;
}