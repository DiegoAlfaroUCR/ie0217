#include <iostream>
using namespace std;

// Funcion para imprimir un array.
void printArray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Funcion para ordenar con insertion sort.
void insertionSort(int array[], int size){
    // For loop para generar los steps para cada indice.
    for (int step = 0; step < size; step++)
    {
        // Se establece una key en el índice step.
        // Se establece el índice j para cada índice antes de key.
        int key = array[step];
        int j = step - 1;

        // Se compara la llave con cada elemento a su izquierda
        // hasta encontrar un número más pequeño que este.
        // Para generar un order descendiente se cambia key<array[j] a key>array[j]
        while (key < array[j] && j >= 0) // Se hace el proceso hasta llegar al primer índice o encontrar un numero menor.
        {
            array[j + 1] = array[j];
            --j; // Se reduce para recorrer índices anteriores.
        }
        array[j + 1] = key;
    }
}

int main(){
    // Se genera el array.
    int data[] = {9, 5, 1, 4, 3};

    // Se encuentra tamaño del array.
    int size = sizeof(data)/sizeof(data[0]); // Tamaño total/tamaño por elemento = cantidad de elementos.
    
    // Se ordena.
    insertionSort(data, size);
    cout << "Sorted array in ascending order:\n";
    printArray(data, size);

    return 0;
}