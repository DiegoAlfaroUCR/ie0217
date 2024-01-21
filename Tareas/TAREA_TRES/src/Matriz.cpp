#include "Matriz.hpp"

template <class T>
void Matriz<T>::crearMatriz(){
    int filas, columnas;
    cout << "Ingrese las dimensiones de la matriz a crear: " << endl;
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
void Matriz<T>::mostrarMatriz(){
    for(auto &fila : this->contenido){
        cout << left << setw(4);
        for(auto &elemento : fila){
            cout << elemento;
            cout << left << setw(4);
        }
        cout << endl;
    }
}
