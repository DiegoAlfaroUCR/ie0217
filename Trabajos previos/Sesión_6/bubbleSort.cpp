#include <iostream>
using namespace std;

// Funcion para hacer el bubble sort.
void bubbleSort(int array[], int size){
    // For loop para iterar sobre caada elemento del array.
    for (int step = 0; step < (size - 1) ; ++step)
    {
        // Se revisa si han ocurrido swaps. Esto se agrega para optimizar
        // el bubble sort y evitar redundancias cuando ya se completó el sort.
        int swapped = 0;

        // For loop para comparar los elementos.
        for (int i = 0; i < (size-step-1); i++)
        {
            // Se comparan los elementos y se cambian de forma descendente.
            if (array[i] > array[i + 1])
            {
                // Se cambian los elementos.
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                swapped = 1;
            }            
        }

        // Si no se hizo un swap significa que se completo el sort.
        // En este caso no es necesario seguir iterando. Se evitan redundancias.
        if (swapped == 0)
        {
            break;
        }
    }
}

// Funcion para imprimir el array.
// Se imprime cada elemento del array.
void printArray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << "  " << array[i];
    }
    cout << "\n"; 
}

int main(){
    // Se establece un array desordenado.
    int data[] = {-2, 45, 0, 11, -9};

    // Se encuentra tamaño del array.
    int size = sizeof(data)/sizeof(data[0]); // Tamaño total/tamaño por elemento = cantidad de elementos.

    // Se hace el sort.
    bubbleSort(data, size);

    // Se presenta el array ordenado.
    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);

    return 0;
}