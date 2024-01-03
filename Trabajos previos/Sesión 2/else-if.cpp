#include <iostream>
using namespace std;

int main(){
    // Se establece number.
    int number = 0;

    // Se compara con condición.
    if (number > 0){
        cout << "Number > 0"; // Si se cumple.

    // Si no se cumple se compara con otra condición.
    } else if (number == 0) {
        cout << "Number == 0"; // Si se cumple la segunda condición.
    }
    else {
        cout << "Number < 0"; // Si no se cumple ninguna.
    }
    return 0;
}