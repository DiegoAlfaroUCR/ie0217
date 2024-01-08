#include "funciones.hpp"

int main(){
    // Se declara un struct de tipo DatosJuego "Datos" para contener a definir. 
    DatosJuego Datos;

    while (1)
    {
        // Se imprime el menu y se piden los datos.
        Datos = mostrarMenu();

        // Se procesan las opciones con los datos guardados.
        procesarOpcion(Datos);
    }
    
    return 0;
}