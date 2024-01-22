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

    // Manejo de errores en caso donde no es entero.
    if (!cin.good() || (tipoVariable < 0) || (tipoVariable > 4)){
        throw invalid_argument("Opcion dada no es valida");
    }

    if (tipoVariable == 4) {
        cout << endl << "Saliendo del sistema..." << endl;
        exit(0);
    }

    return tipoVariable;
}


template <class T>
void Operadora::iniciarProceso(T matrizA, T matrizB){
    cout << endl << "Proceda a ingresar los datos de dos matrices a operar." << endl;
    cout << "Se define primero matriz A, luego matriz B, y se opera de forma:" << endl;
    cout << "       A (operador) B, por ejemplo; A + B." << endl << endl;

    // Se hace control de excepciones en proceso de crear las matrices.
    try {
        cout << "------------------Matriz A------------------" << endl;
        matrizA.crearMatriz();
        cout << "--------------------------------------------" << endl << endl;

        cout << "------------------Matriz B------------------" << endl;
        matrizB.crearMatriz();
        cout << "--------------------------------------------" << endl << endl;
    }
    catch(const std::exception& e) {
        std::cerr << "\nERROR al crear las matrices: "<<e.what() << '\n';
        exit(0);
    }

    // Se hace control de excepciones en proceso de solicitar las operaciones.
    while (1) {
        int operacion;
        try {
            operacion = matrizA.pedirOperacion();
        }
        catch(const std::exception& e){
            std::cerr << "\nERROR al escoger operacion: "<< e.what() << '\n';
            exit(0);
        }
        
        // Se definen variables para manejar el proceso.
        OperacionesBasicas<int> validadora;
        T resultado;
        char operador;

        // Se hace control de excepciones en proceso de realizar las operaciones.
        try {
            switch (operacion) {
            case 1:
                validadora.validar(matrizA, matrizB, "Suma/Resta");
                resultado = matrizA + matrizB;
                operador = '+';
                break;

            case 2:
                validadora.validar(matrizA, matrizB, "Suma/Resta");
                resultado = matrizA - matrizB;
                operador = '-';
                break;
            
            case 3:
                validadora.validar(matrizA, matrizB, "Multiplicacion");
                resultado = matrizA * matrizB;
                operador = '*';
                break;
            }
            cout << endl << "Resultado de la operacion A " << operador << " B:" << endl;
            mostrarMatriz(resultado);
        }
        catch(const std::exception& e) {
            std::cerr << "ERROR al realizar operaciones: " << e.what() << endl << endl;
        }
    }
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