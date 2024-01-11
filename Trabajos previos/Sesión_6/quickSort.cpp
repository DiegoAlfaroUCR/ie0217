#include <iostream>
using namespace std;

/* Para realizar este sort se empleo referencia de:
* https://www.javatpoint.com/quick-sort
* https://shorturl.at/oIQX4
* https://shorturl.at/czET7
*/

// Funcion para imprimir un array.
void printArray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Funcion para cambiar la posicion de dos elementos.
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Funcion para escoger un pivot y acomodarlo con numeros menores a su izquierda en un intervalo.
int funcionPivot(int array[], int idx_inicio, int idx_final){ // Se dan indices desde el inicio hasta el final del intervalo.
    // Se escoge de pivot al último numero en el intervalo.
    int pivot = array[idx_final];
    // Indice hasta donde numeros son menores al pivot. 
    // Inicia en primer indice del intervalo - 1 para poder aumentar el indice si es necesario.
    int idx_menores = idx_inicio - 1;
    for (int i = idx_inicio; i < idx_final; i++)
    {
        if (array[i] < pivot)
        {
            // Se aumenta el indice para que quepan más numeros menores a pivot.
            ++idx_menores;

            // Se cambia el número menor más reciente al nuevo indice.
            swap(&array[idx_menores], &array[i]);
        }
    }
    // Al final se pone el pivot en el indice enfrente a los menores, con los mayores a la derecha.
    swap(&array[idx_menores + 1], &array[idx_final]); 

    // Se retorna el indice del pivot usado.
    return (idx_menores + 1);
}

// Funcion para hacer quicksort en un array.
void quickSort(int array[], int idx_inicio, int idx_final){
    // Si se le da al sort un array ya ordenado, el idx_pivot resultante de funcionPivot resulta igual a idx_final,
    // la siguiente vez que se llame funcionPivot, con un indices (idx_final + 1, idx_final) el bucle se cierra.
    // Por otra parte, cuando se llame con indices (idx_inicio, idx_final - 1) se continua el bucle, pero resulta en idx_pivot = idx_final - 1
    // y se continua ese proceso hasta que se llame la funcion (idx_inicio, idx_inicio -1) y se cierre el bucle. 
    if (idx_inicio < idx_final)
    {   // Se genera un pivot en el intervalo original.
        int idx_pivot = funcionPivot(array, idx_inicio, idx_final);

        // Se hace el mismo proceso en los intervalos a su izquierda y derecha.
        quickSort(array, idx_inicio, idx_pivot - 1);
        quickSort(array, idx_pivot + 1, idx_final);
        // Como esto vuelve a generar el proceso para los intervalos a la izquierda y derecha, se realiza en todo el intervalo.
    }
}

// Funcion main.
int main(){
    // Se genera un array desordenado.
    int data[] = {20, 12, 10, 15, 2};

    // Se encuentra tamaño del array.
    int size = sizeof(data)/sizeof(data[0]); // Tamaño total/tamaño por elemento = cantidad de elementos.

    cout << "Array desordenado:\n";
    printArray(data, size);
    
    // Se hace el sort.
    quickSort(data, 0, size - 1);

    cout << "Array ordenado:\n";
    printArray(data, size);
}