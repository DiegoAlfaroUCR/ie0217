#include "Matriz.hpp"

template <class T>
void Matriz<T>::crearMatriz(){
    int filas, columnas;
    cout << "Ingrese las dimensiones de la matriz: " << endl;
    cout << "Cantidad de filas: ";
    cin >> filas;
    cout << "Cantidad de columnas: ";
    cin >> columnas;

    // Se crea un vector para cada fila.
    vector<T> vectorFila;
    for (int fila = 0; fila < filas; fila++) {  // Se hace el proceso para cada fila
        // Se vacía el vector.
        vectorFila.clear();

        for (int columna = 0; columna < columnas; columna++) {
            cout << "Entrada de fila " << fila + 1 << " columna " << columna + 1 << " : ";
            T entrada; 
            cin >> entrada;
            vectorFila.push_back(entrada);
        }
        contenido.push_back(vectorFila);
    }
}

template <class T>
int Matriz<T>::pedirOperacion(){
    cout << "-------Menu de Opciones-------" << endl;
    cout << "1. Sumar matrices definidas." << endl;
    cout << "2. Restar matrices definidas." << endl;
    cout << "3. Multiplicar matrices definidas." << endl;
    cout << "4. Salir del sistema." << endl;
    cout << "Digite una opción: ";
    int opcion; cin >> opcion;

    // HACER MANEJO DE EXPECIONES CASO QUE NO SEA UN INT.

    if (opcion == 4) {
        cout << "Saliendo del sistema..." << endl;
        exit(0);
    }
    
    return opcion;
}