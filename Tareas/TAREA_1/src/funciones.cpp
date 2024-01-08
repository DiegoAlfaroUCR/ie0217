/**
 * @file funciones.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo que contiene las funciones usadas por el programa.
 * @version 0.1
 * @date 2024-01-08
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#include "funciones.hpp"


/**
 * @brief Función para mostrar el menu y obtener los inputs necesarios.
 * En esta función se imprime el menu del juego, y se obtienen las opciones de dificultad e intervalo por medio de inputs del usuario.
 * @return DatosJuego Struct que contiene los datos ingresados por el usuario.
 */
DatosJuego mostrarMenu(){
    // Se declara el struct Datos para contener todas las variables necesarias.
    DatosJuego Datos;

    // Se imprime el menu.
    cout << "\n----------------------------------------\n";
    cout << "Bienvenid@ al juego de adivinar un numero.\n";
    cout << "Las dificultades disponibles: \n";
    cout << "1. Pistas segun mayor o menor (Facil).\n";
    cout << "2. Pistas estilo papa caliente (Dificil).\n";
    cout << "Opcion 3: Digite 3 para salir.\n";

    // Se asigna la opcion a usar.
    while ((Datos.opcion != 1) and (Datos.opcion != 2))
    {
        cout << "\nEscoja la dificultad: ";
        cin >> Datos.opcion;

        if (Datos.opcion == 3)
        {
            cout << "Saliendo del programa...";
            exit(0);
        }
        
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

/**
 * @brief Función para iniciar el juego.
 * 
 * Esta función toma los datos encontrados en el struct Datos y 
 * @param Datos Struct que contiene los datos ingresados por el usuario.
 */
void procesarOpcion(DatosJuego Datos){

    // Se establece la cantidad máxima de intentos y un contador de intentos.
    Datos.tamañoIntervalo = abs(Datos.limSuperior - Datos.limInferior); // Tamaño del intervalo dado.
    const int MAX_INTENTOS = Datos.tamañoIntervalo/3;                   // Cantidad máxima de intentos N/3.
    cout << "Tiene " << MAX_INTENTOS << " intentos disponibles.\n";

    Datos.buscado = numRandom(Datos);   // Se genera un número aleatorio que funciona como el objetivo del juego.
    int intentos = 0; // Contador de intentos.
    while (intentos < MAX_INTENTOS)
    {
        cout << "\nAdivine un numero: ";
        cin >> Datos.guess;             // Se guarda el número adivinado.

        if (Datos.guess == Datos.buscado){ // Caso donde se adivina.
            mensajeGanador();
        } else {                           // Caso donde número no fue adivinado.
            pista(Datos);
            ++intentos;
        }
    };

    mensajePerdedor();
}

/**
 * @brief Función para generar un número aleatorio.
 * La función genera un entero aleatorio dentro del intervalo establecido en el parámetro Datos.
 * Esto permite que el juego presente un número aleatorio para adivinar y diferente para cada caso.
 * Se tomó referencia para este método de: https://shorturl.at/rKOPT
 * @param Datos Struct que contiene los datos ingresados por el usuario.
 * @return int Número aleatorio dentro de intervalo del juego.
 */
int numRandom(DatosJuego Datos){
    srand(time(0)); // Se genera una semilla diferente a base del momento en que se ejecutó el programa.
    return ((rand() % Datos.tamañoIntervalo) + Datos.limInferior); // Se retorna un número con un valor mínimo de limInferior y máximo de tamañoIntervalo
}

/**
 * @brief Función para presentar una pista al jugador.
 * Esta función imprime una pista basada en la dificultad escogida por el usuario, el número adivinado y su relación con el número buscado.
 * 
 * @param Datos Struct que contiene los datos ingresados por el usuario.
 */
void pista(DatosJuego Datos){
    switch (Datos.opcion)
    {
    case 1: // Caso de dificultad menor y mayor.
        if (Datos.guess<Datos.buscado)
        {
            cout << "El numero buscado es mayor.\n";
        } else {
            cout << "El numero buscado es menor.\n";}
        break;
    
    case 2: // Caso de dificultad con temperaturas.
        calcularTemperatura(Datos); 
        break;
    }
}


/**
 * @brief Función para imprimir que tan caliente o frío está el numero adivinado.
 * Esta función imprime la cercanía del número adivinado con respecto al número buscado.
 * La cercanía se describe según las palabras hirviendo, caliente, frío y congelado.
 * 
 * Explicación del algoritmo usado:
 * Si se divide el tamaño del intervalo en 7 secciones, se puede tomar la seccion 
 * que contiene al numero guess como "hirviendo", la siguiente mas cercana como caliente 
 * y al resto como frio y congelado sucesivamente. Esto evidentemente es una división que
 * toma en cuenta cada lado del numero. Para esto se divide el intervalo en 7. 
 * Se busca encontrar si distancia/rangoTemperatura < 0.5, entonces pertenece a hirviente, 
 * esto porque el intervalo hirviente tiene al numero en su centro.
 * 
 * Ej: Sea x el numero buscado y z el guess;
 * congelado--frio--caliente--hirviendo--caliente--frio--congelado
 *                                x        z      |-----|
 *                                          Tamaño de una división
 * En este caso z se encontraria en la posicion caliente. Y rangoTemperatura < distancia < (1.5)*rangoTemperatura.
 * 
 * @param Datos Struct que contiene los datos ingresados por el usuario.
 */
void calcularTemperatura(DatosJuego Datos){
    float distancia = abs(Datos.buscado - Datos.guess); // Se encuentra la distancia entre número buscado y el adivinado.
    float rangoTemperatura = float(Datos.tamañoIntervalo)/7; // Se encuentra el tamaño de una división del intervalo.
    float posicion = distancia/rangoTemperatura; // Posición relativa a las divisiones del intervalo.

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

/**
 * @brief Función para notificar el gane y terminar el programa.
 * 
 */
void mensajeGanador(){
    cout << "\nVICTORIA: Felicidades ha adivinado el numero!!" << endl;
    exit(0);
}

/**
 * @brief Función para notificar la derrota.
 * 
 */
void mensajePerdedor(){
    cout << "\nDERROTA: Se ha quedado sin intentos. Mas suerte la proxima!" << endl;
}