#include "funciones.hpp"

int mostrarMenu(){
    // Se imprime el menu.
    cout << "\nBienvenid@ al juego de adivinar un numero.\n";
    cout << "Las dificultades disponibles: \n";
    cout << "1. Pistas segun mayor o menor (Facil).\n";
    cout << "2. Pistas estilo papa caliente (Dificil).\n ";

    // Se asigna la opcion a usar.
    cout << "\nEscoja la dificultad: ";
    int opcion;
    cin >> opcion;

    if ((opcion != 1) and (opcion != 2)){
        cout << "Opcion no valida. Inicie el programa de nuevo.";
        exit(0);
    }
    return opcion;
}

void procesarOpcion(int limInferior, int limSuperior, int opcion){
    // Se establece la cantidad máxima de intentos y un contador de intentos.
    int tamañoIntervalo = abs(limSuperior - limInferior);
    const int MAX_INTENTOS = tamañoIntervalo/3;
    int intentos = 0;

    int buscado = numRandom(limInferior, limSuperior);

    while (intentos < MAX_INTENTOS)
    {
        int guess;
        cout << "Adivine un numero: ";
        cin >> guess;

        if (guess == buscado){
            mensajeGanador();
        } else {
            pista(guess, buscado, opcion, tamañoIntervalo);
            ++intentos;
        }
        
    };

    mensajePerdedor();
}

int numRandom(int limInferior, int limSuperior){
    srand(time(0));
    return ((rand() % limSuperior) + limInferior); // Se tomó referencia para este método de: https://shorturl.at/rKOPT
}

void pista(int guess, int buscado, int opcion, int tamañoIntervalo){
    switch (opcion)
    {
    case 1:
        if (guess<buscado)
        {
            cout << "El numero buscado es mayor." << endl;
        } else {
            cout << "El numero buscado es menor." << endl;}
        break;
    
    case 2:
        calcularTemperatura(tamañoIntervalo, guess, buscado);
        break;
    }
}

void calcularTemperatura(int tamañoIntervalo, int guess, int buscado){
    /*
    Si se divide el tamaño del intervalo en 7 secciones, se puede tomar la seccion 
    que contiene al numero guess como "hirviendo", la siguiente mas cercana como caliente 
    y al resto como frio y congelado sucesivamente. Esto evidentemente es una división que
    toma en cuenta cada lado del numero. Para esto se divide el intervalo en 7. 
    Se busca encontrar si distancia/rangoTemperatura < 0.5, entonces pertenece a hirviente, 
    esto porque el intervalo hirviente tiene al numero en su centro.

    Ej: Sea x el numero buscado y z el guess;
    congelado--frio--caliente--hirviendo--caliente--frio--congelado
                                   x        z

    En este caso z se encontraria en la posicion caliente. Y rangoTemperatura<distancia<(1.5)*rangoTemperatura.
    */
    float distancia = abs(buscado - guess);
    float rangoTemperatura = float(tamañoIntervalo)/7;
    float posicion = distancia/rangoTemperatura;

    if (posicion <= 0.5)
    {
        cout << "Su numero esta: hirviendo." << endl;
    } else if (posicion <= 1.5)
    {
        cout << "Su numero esta: caliente." << endl;
    } else if (posicion <= 2.5)
    {
        cout << "Su numero esta: frio." << endl;
    } else {
        cout << "Su numero esta: congelado." << endl;
    }
}

void mensajeGanador(){
    cout << "VICTORIA: Felicidades ha adivinado el numero!!" << endl;
    exit(0);
}

void mensajePerdedor(){
    cout << "DERROTA: Se ha quedado sin intentos. Mas suerte la proxima!" << endl;
    exit(0);
}