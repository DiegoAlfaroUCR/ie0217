/**
 * @file main.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo principal, contiene funcion main que inicia le programa y genera un menu.
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

// Se incluye el header que vincula con todas las clases a usar.
#include "MaterialPrecio.hpp"

/** @fn
 * @brief Función principal, inicia el programa.
 * 
 * @return int 0, Código de salida exitosa del programa.
 */
int main(){
    // Se declara una instancia de la clase MaterialPrecio, con todas las funciones necesarias disponibles.
    MaterialPrecio instancia;
    
    /**
     * Se incia un menú de opciones, se mantiene en un bucle hasta que se escoja la opción de salir del programa.
     * Se llaman las funciones apropiadas a la opción, y al salir se libera toda la memoria asignada.
     */
    cout << "Bienveni@ al sistema" << endl;
    while (1)
    {
        cout << endl << "----------Menu de opciones----------" << endl;
        cout << "1. Ingresar materiales al sistema." << endl;
        cout << "2. Buscar materiales en el sistema." << endl;
        cout << "3. Eliminar materiales del sistema." << endl;
        cout << "4. Ordenar materiales del sistema." << endl;
        cout << "5. Salir del sistema." << endl;
        cout << "Ingrese una opcion: ";
        int opcion; cin >> opcion;

        switch (opcion)
        {
        case 1:
            instancia.agregar();
            break;
        case 2:
            instancia.buscar();
            break;
        case 3:
            instancia.eliminar();
            break;
        case 4:
            instancia.ordenar();
            break;
        case 5:
            cout << endl << "Saliendo del sistema..." << endl;

            /* Se libera la memoria dinámica asignada durante el programa. Según ciertas fuentes es buena práctica cuando se usan herramientas de 
               análisis de memoria dinámica, ya que evita dar falsos positivos en memory leaks; https://shorturl.at/zDLNQ https://shorturl.at/cefwx */
            instancia.liberar();

            /* Se finaliza el programa con código de salida 0, indicando 0 errores. */
            exit(0);
        default:
            cout << "Opcion no valida, intente de nuevo." << endl;
            break;
        }
    }
    return 0;
}