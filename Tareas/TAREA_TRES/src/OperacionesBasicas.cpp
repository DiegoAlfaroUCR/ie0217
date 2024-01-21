#include "OperacionesBasicas.hpp"

template <class T>
void OperacionesBasicas<T>::validar(const OperacionesBasicas<T>& B, const string& tipoOperacion){

    // Se obtienen las dimensiones de cada matriz.
    int filasA = this->contenido.size();
    int columnasA = this->contenido[0].size();
    int filasB = B.contenido.size();
    int columnasB = B.contenido[0].size();

    // Excepciones para suma/resta.
    if(tipoOperacion == "Suma/Resta"){
        if((filasA != filasB) || (columnasA != columnasB)){
            throw "ESCRIBIR ERROR AQUI.";
        }
    }

    // Excepciones para multiplicación.
    if(tipoOperacion == "Multiplicacion"){
        if(columnasA != filasB){
            throw "ESCRIBIR ERROR AQUI.";
        }
        cout << "Se dio el check de multiplicacion. " << endl;
    }
}

template <class T>
OperacionesBasicas<T> OperacionesBasicas<T>::operator+(const OperacionesBasicas<T> &otraMatriz){
    OperacionesBasicas<T> resultado;

    int filas = this->contenido.size();
    int columnas = this->contenido[0].size();

    vector<T> vectorFila;
    for (int fila = 0; fila < filas; fila++) {
        vectorFila.clear();
        for (int columna = 0; columna < columnas; columna++){
            T entrada = this->contenido[fila][columna] + otraMatriz.contenido[fila][columna];
            vectorFila.push_back(entrada);
        }
        resultado.contenido.push_back(vectorFila);
    }
    return resultado;
}

template <class T>
OperacionesBasicas<T> OperacionesBasicas<T>::operator-(const OperacionesBasicas<T> &otraMatriz){
    OperacionesBasicas<T> resultado;

    int filas = this->contenido.size();
    int columnas = this->contenido[0].size();

    vector<T> vectorFila;
    for (int fila = 0; fila < filas; fila++) {
        vectorFila.clear();
        for (int columna = 0; columna < columnas; columna++){
            T entrada = this->contenido[fila][columna] - otraMatriz.contenido[fila][columna];
            vectorFila.push_back(entrada);
        }
        resultado.contenido.push_back(vectorFila);
    }
    return resultado;
}

template <class T>
OperacionesBasicas<T> OperacionesBasicas<T>::operator*(const OperacionesBasicas<T> &otraMatriz){
    int filas1 = this->contenido.size();
    int columnas1 = this->contenido[0].size();
    int columnas2 = otraMatriz.contenido[0].size();

    OperacionesBasicas<T> resultado;
    for(int i = 0; i < filas1; i++){
        vector<T> resultadoFila(columnas2);
        resultado.contenido.push_back(resultadoFila);
        }

    for (int fila = 0; fila < filas1; fila++) {
        for (int columna = 0; columna < columnas2; columna++){
            resultado.contenido[fila][columna] = 0;
            for (int contador = 0; contador < columnas1; contador++){
                resultado.contenido[fila][columna] += this->contenido[fila][contador] * otraMatriz.contenido[contador][columna];
            }
        }
    }
    return resultado;
}