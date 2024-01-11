#include <iostream>
using namespace std;

// Funcion para cambiar la posicion de dos elementos.
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Funcion para imprimir un array.
void printArray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Funcion para hacer el selection sort.
void selectionSort(int array[], int size){
    // Se itera por cada step (un step por elemento).
    for (int step = 0; step < size; step++)
    {
        // Se establece un indice minimo.
        // Se reestablece a step pues despues de cada step el indice mínimo aumenta por uno (igual que contador step).
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {
            // Se cambian los valores para estar en orden ascendiente,
            // si se quiere hacer descendiente se cambia el > a < .
            if (array[i] < array[min_idx])
            {
                min_idx = i;
            }
            
            // Una vez se encuentra el indice con el entero mínimo se pone en la posicion correcta.
            swap(&array[min_idx], &array[step]);
        }
    }
}

int main(){
    // Se genera un array desordenado.
    int data[] = {20, 12, 10, 15, 2};

    // Se encuentra tamaño del array.
    int size = sizeof(data)/sizeof(data[0]); // Tamaño total/tamaño por elemento = cantidad de elementos.
    
    // Se hace el sort.
    selectionSort(data, size);
    cout << "Sorted array in Ascending Order:\n";
    printArray(data, size);
}