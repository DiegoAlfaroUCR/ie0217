/**
 * @file main.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo principal, contiene funcion main que inicia le programa.
 * @version 0.1
 * @date 2024-01-15
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#include "MaterialPrecio.hpp"

/** @fn
 * @brief Función principal, inicia el programa.
 * 
 * @return int 0
 */
int main(){ 
    MaterialPrecio instancia;

    Libro* ptrLibro = new Libro;
    ptrLibro->autor = "Frank"; ptrLibro->titulo = "Dune"; ptrLibro->precio = 100; ptrLibro->tipo = "Libro";
    instancia.Libros.push_back(ptrLibro);

    Noticia* ptrNoticia = new Noticia;
    ptrNoticia->autor = "Canal 7"; ptrNoticia->titulo = "Corrupt"; ptrNoticia->precio = 70; ptrNoticia->tipo = "Noticia";
    instancia.Noticias.push_back(ptrNoticia);

    Podcast* ptrPodcast = new Podcast;
    ptrPodcast->autor = "Misfits"; ptrPodcast->titulo = "The acid story"; ptrPodcast->precio = 300; ptrPodcast->tipo = "Podcast";
    instancia.Podcasts.push_back(ptrPodcast);

    Pelicula* ptrPelicula = new Pelicula;
    ptrPelicula->autor = "Michael Bay"; ptrPelicula->titulo = "Transformers"; ptrPelicula->precio = 2; ptrPelicula->tipo = "Pelicula";
    instancia.Peliculas.push_back(ptrPelicula);

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
            instancia.liberar();
            exit(0);
        default:
            cout << "Opcion no valida, intente de nuevo." << endl;
            break;
        }
    }
    return 0;
}