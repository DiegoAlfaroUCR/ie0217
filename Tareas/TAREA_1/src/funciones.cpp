#include "funciones.hpp"

DatosJuego mostrarMenu(){
    // Se declara el struct Datos para contener todas las variables necesarias.
    DatosJuego Datos;

    // Se imprime el menu.
    cout << "\n----------------------------------------\n";
    cout << "Bienvenid@ al juego de adivinar un numero.\n";
    cout << "Las dificultades disponibles: \n";
    cout << "1. Pistas segun mayor o menor (Facil).\n";
    cout << "2. Pistas estilo papa caliente (Dificil).\n ";

    // Se asigna la opcion a usar.
    while ((Datos.opcion != 1) and (Datos.opcion != 2))
    {
        cout << "\nEscoja la dificultad: ";
        cin >> Datos.opcion;

        if ((Datos.opcion != 1) and (Datos.opcion != 2)){
            cout << "Opcion no valida. Intente de nuevo.\n";
    }
    }

    // Se asignan los límites del intervalo.
    cout << "\nDigite el rango de numeros en donde adivinar:";
    cout << "\nLimite inferior: ";
    cin >> Datos.limInferior;
    cout << "Limite Superior: ";
    cin >> Datos.limSuperior;

    return Datos;
}

void procesarOpcion(DatosJuego Datos){
    // Se establece la cantidad máxima de intentos y un contador de intentos.
    Datos.tamañoIntervalo = abs(Datos.limSuperior - Datos.limInferior);
    const int MAX_INTENTOS = Datos.tamañoIntervalo/3;
    int intentos = 0;

    Datos.buscado = numRandom(Datos);

    while (intentos < MAX_INTENTOS)
    {
        cout << "\nAdivine un numero: ";
        cin >> Datos.guess;

        if (Datos.guess == Datos.buscado){
            mensajeGanador();
        } else {
            pista(Datos);
            ++intentos;
        }
        
    };

    mensajePerdedor();
}

int numRandom(DatosJuego Datos){
    srand(time(0));
    return ((rand() % Datos.limSuperior) + Datos.limInferior); // Se tomó referencia para este método de: https://shorturl.at/rKOPT
}

void pista(DatosJuego Datos){
    switch (Datos.opcion)
    {
    case 1:
        if (Datos.guess<Datos.buscado)
        {
            cout << "El numero buscado es mayor.\n";
        } else {
            cout << "El numero buscado es menor.\n";}
        break;
    
    case 2:
        calcularTemperatura(Datos);
        break;
    }
}

void calcularTemperatura(DatosJuego Datos){
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
    float distancia = abs(Datos.buscado - Datos.guess);
    float rangoTemperatura = float(Datos.tamañoIntervalo)/7;
    float posicion = distancia/rangoTemperatura;

    if (posicion <= 0.5)
    {
        cout << "Su numero esta: hirviendo.\n";
    } else if (posicion <= 1.5)
    {
        cout << "Su numero esta: caliente.\n";
    } else if (posicion <= 2.5)
    {
        cout << "Su numero esta: frio.\n";
    } else {
        cout << "Su numero esta: congelado.\n";
    }
}

void mensajeGanador(){
    cout << "\nVICTORIA: Felicidades ha adivinado el numero!!" << endl;
    exit(0);
}

void mensajePerdedor(){
    cout << "\nDERROTA: Se ha quedado sin intentos. Mas suerte la proxima!" << endl;
}