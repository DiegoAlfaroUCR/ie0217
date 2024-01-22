#include "Matriz.hpp"

template <class T>
void Matriz<T>::crearMatriz(){
    int filas, columnas;
    cout << "Ingrese las dimensiones de la matriz: " << endl;
    cout << "Cantidad de filas: ";
    cin >> filas;
    if (!cin.good() || filas < 0){   // Se revisa si las dimensiones no son válidas.
        throw invalid_argument("Input de filas dado no es valido.");
    }

    cout << "Cantidad de columnas: ";
    cin >> columnas;
    if (!cin.good() || columnas < 0){   // Se revisa si las dimensiones no son válidas.
        throw invalid_argument("Input de columnas dado no es valido.");
    }
    // Se crea un vector para cada fila.
    vector<T> vectorFila;
    for (int fila = 0; fila < filas; fila++) {  // Se hace el proceso para cada fila
        // Se vacía el vector.
        vectorFila.clear();

        for (int columna = 0; columna < columnas; columna++) {
            cout << "Entrada de fila " << fila + 1 << " columna " << columna + 1 << " : ";
            T entrada;
            cin >> entrada;
            if (!cin.good()){   // Se revisa si las entradas no son válidas.
            throw invalid_argument("Tipo de entrada dada no es valido.");
            }
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
    cout << "Digite una opcion: ";
    int opcion; cin >> opcion;

    // Manejo de errores en caso donde no es entero.
    if (!cin.good() || (opcion < 0) || (opcion > 4)){
        throw invalid_argument("Opcion dada no es valida");
    }

    if (opcion == 4) {
        cout << endl << "Saliendo del sistema..." << endl;
        exit(0);
    }
    
    return opcion;
}