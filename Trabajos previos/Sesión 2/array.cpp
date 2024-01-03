#include <iostream>
using namespace std;

// Se declara el array y la matriz.
int arrayx[6] = {19, 10, 8, 17, 9, 15};

int matriz[2][3] = {{2, 4, 5},{9, 0, 19}};

// Función que hice para imprimir el array y la matriz.
int main(){
    cout << "Array: \n";

    // Se imprimen los elementos del array.
    for (int n : arrayx){
        cout << n << " ";
    }

    cout << "\n\nMatriz: \n";

    // Se recorren las filas.
    for (int f = 0; f <= 1; f++){
        // Se recorren las columnas.
        for (int c = 0; c<= 2; c++){
            // Se imprime el valor ubicado en fila f, columna c.
            cout << matriz[f][c] << " ";
        }
        cout << "\n";
    }

    return 0;
}
