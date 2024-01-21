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
Matriz<T> Matriz<T>::operator+(Matriz<T> &otraMatriz){
    Matriz<T> resultado;

    int filas = contenido.size();
    int columnas = contenido[0].size();

    vector<T> vectorFila;
    for (int fila = 0; fila < filas; fila++) {
        vectorFila.clear();
        for (int columna = 0; columna < columnas; columna++){
            T entrada = contenido[fila][columna] + otraMatriz.contenido[fila][columna];
            vectorFila.push_back(entrada);
        }
        resultado.contenido.push_back(vectorFila);
    }
    return resultado;
}

template <class T>
Matriz<T> Matriz<T>::operator-(Matriz<T> &otraMatriz){
    Matriz<T> resultado;

    int filas = contenido.size();
    int columnas = contenido[0].size();

    vector<T> vectorFila;
    for (int fila = 0; fila < filas; fila++) {
        vectorFila.clear();
        for (int columna = 0; columna < columnas; columna++){
            T entrada = contenido[fila][columna] - otraMatriz.contenido[fila][columna];
            vectorFila.push_back(entrada);
        }
        resultado.contenido.push_back(vectorFila);
    }
    return resultado;
}

template <class T>
Matriz<T> Matriz<T>::operator*(Matriz<T> &otraMatriz){
    int filas1 = contenido.size();
    int columnas1 = contenido[0].size();
    int columnas2 = otraMatriz.contenido[0].size();

    Matriz<T> resultado;
    for(int i = 0; i < filas1; i++){
        vector<T> resultadoFila(columnas2);
        resultado.contenido.push_back(resultadoFila);
        }

    for (int fila = 0; fila < filas1; fila++) {
        for (int columna = 0; columna < columnas2; columna++){
            resultado.contenido[fila][columna] = 0;
            for (int contador = 0; contador < columnas1; contador++){
                resultado.contenido[fila][columna] += contenido[fila][contador] * otraMatriz.contenido[contador][columna];
            }
        }
    }
    return resultado;
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


/*
template <class T>
void Matriz<T>::soliticarOperacion(){
    cout << endl << "-----Menu de operaciones------" << endl;
    cout << "1: Sumar" << endl;
    cout << "2: Restar" << endl;
    cout << "3: Multiplicación de matrices." << endl;
    cout << "Elija la operacion a realizar: ";
    int opcion; cin >> opcion;

    switch (opcion)
    {
    case 1:
        break;
    
    default:
        break;
    }
};
*/