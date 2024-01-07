#include "funciones.hpp"

int main(int argc, char* argv[]){
    // Se encuentran los límites del intervalo y se hacen enteros.
    int limInferior = stoi(argv[1]);
    int limSuperior = stoi(argv[2]);

    int opcion = mostrarMenu();
    procesarOpcion(limInferior, limSuperior, opcion);
    return 0;
}