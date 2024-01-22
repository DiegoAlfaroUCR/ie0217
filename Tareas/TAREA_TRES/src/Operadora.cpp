#include "Operadora.hpp"

int Operadora::imprimirMenu(){
    cout << "-----Bienvenid@ al sistema de operacion de matrices-----" << endl;
    cout << "Escoja el tipo de variable a usar en las matrices." << endl;
    cout << "1. Enteros" << endl;
    cout << "2. Flotantes" << endl;
    cout << "3. Numeros Complejos" << endl;
    cout << "Opcion 4. Salir del programa." << endl;
    cout << "Ingrese opcion: ";

    int tipoVariable; cin >> tipoVariable;

    // HACER MANEJO DE EXPECIONES CASO QUE NO SEA UN INT.

    if (tipoVariable == 4) {
        cout << "Saliendo del sistema..." << endl;
        exit(0);
    }

    return tipoVariable;
}


template <class T>
void Operadora::iniciarProceso(T matrizA, T matrizB){
    cout << endl << "Proceda a ingresar los datos de dos matrices a operar." << endl;
    cout << "Se define primero matriz A, luego matriz B, y se opera de forma:" << endl;
    cout << "       A (operador) B, por ejemplo; A + B." << endl << endl;

    cout << "------------------Matriz A------------------" << endl;
    matrizA.crearMatriz();
    cout << "--------------------------------------------" << endl << endl;

    cout << "------------------Matriz B------------------" << endl;
    matrizB.crearMatriz();
    cout << "--------------------------------------------" << endl << endl;

    int operacion = matrizA.pedirOperacion();

    T resultado;
    switch (operacion) {
    case 1:
        resultado = matrizA + matrizB;
        break;

    case 2:
        resultado = matrizA - matrizB;
        break;
    
    case 3:
        resultado = matrizA * matrizB;
        break;
    }
    cout << endl << "Resultado de la operacion: " << endl;
    mostrarMatriz(resultado);
}


template <class T>
void Operadora::mostrarMatriz(T matrizDada){
    for(auto &fila : matrizDada.contenido){
        cout << left << setw(5);
        for(auto &elemento : fila){
            cout << elemento;
            cout << left << setw(5);
        }
        cout << endl;
    }
}

template <>
void Operadora::mostrarMatriz(OperacionCompleja MatrizCompleja){
    for(auto &fila : MatrizCompleja.contenido){
        cout << setprecision(2) << fixed;
        for(auto &elemento : fila){
            MatrizCompleja.stringComplejo(elemento);
        }
        cout << endl;
    }
}