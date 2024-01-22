#include "OperacionCompleja.hpp"


void OperacionCompleja::stringComplejo(complex<float> complejo){
    float parteReal = complejo.real();
    float parteImag = complejo.imag();;
    cout << parteReal << " + " << parteImag
    << left << setw(5) << "i";
}

OperacionCompleja OperacionCompleja::operator+ (const OperacionCompleja &otraMatriz){
    OperacionCompleja resultado;

    int filas = this->contenido.size();
    int columnas = this->contenido[0].size();

    vector<complex<float>> vectorFila;
    for (int fila = 0; fila < filas; fila++) {
        vectorFila.clear();
        for (int columna = 0; columna < columnas; columna++){
            complex<float> entrada = this->contenido[fila][columna] + otraMatriz.contenido[fila][columna];
            vectorFila.push_back(entrada);
        }
        resultado.contenido.push_back(vectorFila);
    }
    return resultado;
}

OperacionCompleja OperacionCompleja::operator- (const OperacionCompleja &otraMatriz){
    OperacionCompleja resultado;

    int filas = this->contenido.size();
    int columnas = this->contenido[0].size();

    vector<complex<float>> vectorFila;
    for (int fila = 0; fila < filas; fila++) {
        vectorFila.clear();
        for (int columna = 0; columna < columnas; columna++){
            complex<float> entrada = this->contenido[fila][columna] - otraMatriz.contenido[fila][columna];
            vectorFila.push_back(entrada);
        }
        resultado.contenido.push_back(vectorFila);
    }
    return resultado;
}

OperacionCompleja OperacionCompleja::operator* (const OperacionCompleja &otraMatriz){
    // Se obtienen dimensiones importantes.
    int filas1 = this->contenido.size();
    int columnas1 = this->contenido[0].size();
    int columnas2 = otraMatriz.contenido[0].size();

    // Se crea un objeto con contenido vacio pero dimensiones filas1 x columnas2.
    OperacionCompleja resultado;
    for(int i = 0; i < filas1; i++){
        vector<complex<float>> resultadoFila(columnas2);
        resultado.contenido.push_back(resultadoFila);
        }

    // Se hace el proceso de multiplicación.
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