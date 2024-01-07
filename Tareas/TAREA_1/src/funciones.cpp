#include "funciones.hpp"

int mostrarMenu(){
    // Se imprime el menu.
    cout << "Bienvenid@ al juego de adivinar un numero.\n";
    cout << "Las dificultades disponibles: \n";
    cout << "1. Pistas segun mayor o menor (Facil).\n";
    cout << "2. Pistas estilo papa caliente (Dificil).\n ";

    // Se asigna la opcion a usar.
    cout << "\nEscoja la dificultad: ";
    int opcion;
    cin >> opcion;
    if (opcion != 1 or opcion != 2){
        cout << "Opcion no valida. Inicie el programa de nuevo.";
        exit(0);
    }
    return opcion;
}


void procesarOpcion(int limInferior, int limSuperior, int opcion){
    // Se establece la cantidad máxima de intentos y un contador de intentos.
    const int MAX_INTENTOS = (limSuperior - limInferior)/3;
    int intentos = 0;
}


void mensajeGanador(){
    cout << "VICTORIA: Felicidades ha adivinado el numero!!" << endl;
    exit(0);
}

void mensajePerdedor(){
    cout << "DERROTA: Se ha quedado sin intentos. Mas suerte la proxima!" << endl;
    exit(0);
}
