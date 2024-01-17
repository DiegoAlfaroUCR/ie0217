/**
 * @file MaterialOrdenado.cpp
 * @author Diego Alfaro Segura (diego.alfarosegura@ucr.ac.cr)
 * @brief Archivo fuente para métodos de MaterialOrdenado.
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * Licenciado bajo CC BY-NC-ND 4.0
 */

#include "MaterialOrdenado.hpp"

/**
 * @brief Método para agregar un elemento en uno de los vectores de materiales.
 * 
 * Dependiendo de la opción usada, se crea un puntero por medio de memoria dinámica 
 * a un objeto del tipo de material y se agrega al vector que contiene el mismo tipo de punteros.
 * 
 */
void MaterialOrdenado::agregar(){
    // Se genera un menu de opciones.
    cout << endl << "-----Menu de creacion------" << endl;
    cout << "1: Libro" << endl;
    cout << "2: Noticia" << endl;
    cout << "3: Pelicula" << endl;
    cout << "4: Podcast" << endl;
    cout << "Elija el material por agrerar: ";
    int opcion; cin >> opcion;

    switch (opcion)
    {
    case 1:{
        /* Se genera un puntero con operador new para asignarlo en memoria dinámica. */
        Libro* ptrlibro = new Libro;

        /* Se llama un método del material creado para asignar todos sus valores. */
        ptrlibro->crearLibro();

        /* Se inserta el puntero creado en el vector correspondiente al material */
        Libros.push_back(ptrlibro);
        break;}
    case 2:{
        Noticia* ptrNoticia = new Noticia;
        ptrNoticia->crearNoticia();
        Noticias.push_back(ptrNoticia);
        break;}
    case 3:{
        Pelicula* ptrPelicula = new Pelicula;
        ptrPelicula->crearPelicula();
        Peliculas.push_back(ptrPelicula);
        break;}
    case 4:{
        Podcast* ptrPodcast = new Podcast;
        ptrPodcast->crearPodcast();
        Podcasts.push_back(ptrPodcast);
        break;}
    default:{
        cout << "Opcion no válida." << endl;
        break;}
    }
}

/**
 * @brief Método para imprimir información de materiales por tipo o nombre.
 * 
 * Se muestra la información de un material o la información de materiales de un mismo tipo acorde a la opcion dada.
 * Se imprime información general si se busca por tipo de material, si es por nombre se imprime toda la informacion del material.
 * 
 */
void MaterialOrdenado::buscar(){
    // Se imprime menú de busqueda.
    cout << endl << "-----Menu de busqueda------" << endl;
    cout << "1: Libro" << endl;
    cout << "2: Noticia" << endl;
    cout << "3: Pelicula" << endl;
    cout << "4: Podcast" << endl;
    cout << "Opcion (5): Buscar por nombre" << endl;
    cout << "Elija el material por buscar: ";
    int opcion; cin >> opcion;


    cout << endl << "-----------------------------------------------------------" << endl;
    switch (opcion)
    {
    case 1:{    // Caso donde se buscan los libros.
        cout << "Lista de libros: " << endl;
        for(auto &material: Libros){        // Se recorren los libros guardados.
            cout << "Titulo: " << left << setw(15) << material->titulo;         // Se imprime el titulo, autor y precio del material.
            cout << "Autor: " << left << setw(15) << material->autor;           // Se usa setw() para imprimir con espaciado uniforme.
            cout << "Precio: " << material->precio << endl;
        }
        break;}
    case 2:{
        cout << "Lista de noticias: " << endl;
        for(auto &material: Noticias){
            cout << "Titulo: " << left << setw(15) << material->titulo;
            cout << "Autor: " << left << setw(15) << material->autor;
            cout << "Precio: " << material->precio << endl;
        }
        break;}
    case 3:{
        cout << "Lista de peliculas: " << endl;
        for(auto &material: Peliculas){
            cout << "Titulo: " << left << setw(15) << material->titulo;
            cout << "Autor: " << left << setw(15) << material->autor;
            cout << "Precio: " << material->precio << endl;
        }
        break;}
    case 4:{
        cout << "Lista de podcasts: " << endl;
        for(auto &material: Podcasts){
            cout << "Titulo: " << left << setw(15) << material->titulo;
            cout << "Autor: " << left << setw(15) << material->autor;
            cout << "Precio: " << material->precio << endl;
        }
        break;}
    case 5:{       // Caso donde se busca por nombre, se llama funcion buscarNombre().
        buscarNombre();
        break;
    }
    default:{      // Caso donde se da opción no válida.
        cout << "Opcion no válida." << endl;
        break;}
    }
    cout << "-----------------------------------------------------------" << endl;
}

/**
 * @brief Método privado para mostrar información de material por nombre.
 * 
 * Se itera por cada material guardado y se muestra la información completa si se encuentra
 * un material con el mismo nombre al buscado.
 * 
 */
void MaterialOrdenado::buscarNombre(){
    // Se obtiene el nombre a buscar.
    cout << "Ingrese el nombre del material: ";
    string nombre ; getline(cin>>ws, nombre);

    /* Se recorren todos los materiales contenidos en los vectores y se imprime la información del material 
       si el título del material coincide con el nombre buscado. */
    for(auto &material: Libros){
            if (material->titulo == nombre){
                material->mostrarInfo();}
    }

    for(auto &material: Noticias){
            if (material->titulo == nombre){
                material->mostrarInfo();}
    }

    for(auto &material: Podcasts){
            if (material->titulo == nombre){
                material->mostrarInfo();}
    }

    for(auto &material: Peliculas){
            if (material->titulo == nombre){
                material->mostrarInfo();}
    }
}

/**
 * @brief Método para eliminar un elemento de los vectores de materiales.
 * 
 * Acorde a la opción y nombre dado, se libera la memoria del puntero y se elimina el material del vector correspondiente. 
 * 
 */
void MaterialOrdenado::eliminar(){
    // Se imprime un menu.
    cout << endl << "-----Menu de eliminacion------" << endl;
    cout << "1: Libro" << endl;
    cout << "2: Noticia" << endl;
    cout << "3: Pelicula" << endl;
    cout << "4: Podcast" << endl;
    cout << "Elija el material por eliminar: ";
    int opcion; cin >> opcion;
    
    // Se pide el nombre del material al usuario.
    cout << "Ingrese el nombre correcto del material: ";
    string nombre;
    getline(cin>>ws, nombre);

    // Se establece un indicador en caso de que no se encuentre un material con el nombre dado.
    bool encontrado = false;
    switch (opcion)
    {
    case 1:{ // Caso donde se quiere borrar un libro.
        for(auto &material: Libros){            // Se recorren los materiales tipo Libro en el vector Libros.
            if (material->titulo == nombre){    // Caso donde se encuentra un material con nombre dado.

                /* Se encuentra el índice por medio del algoritmo find, entre el intervalo correspondiente al vector Libros
                   y retonra el índice del material encontrado. */
                auto indice = find(Libros.begin(), Libros.end(), material);

                // Se libera la memoria del puntero antes de eliminarlo del vector.
                delete material;

                // Se elimina el material del vector a través de su índice.
                Libros.erase(indice);

                cout << "Libro '" << nombre << "' eliminado exitosamente. " << endl;
                encontrado = true;
            }
        }
        break;}

    case 2:{
        for(auto &material: Noticias){
            if (material->titulo == nombre){
                auto indice = find(Noticias.begin(), Noticias.end(), material);
                delete material;
                Noticias.erase(indice);

                cout << "Noticia '" << nombre << "' eliminada exitosamente. " << endl;
                encontrado = true;
            }
        }
        break;}

    case 3:{
        cout << "Lista de peliculas por titulo, autor y precio: " << endl;
        for(auto &material: Peliculas){
            if (material->titulo == nombre){
                auto indice = find(Peliculas.begin(), Peliculas.end(), material);
                delete material;
                Peliculas.erase(indice);

                cout << "Pelicula '" << nombre << "' eliminada exitosamente. " << endl;
                encontrado = true;
            }
        }
        break;}

    case 4:{
        cout << "Lista de podcasts por titulo, autor y precio: " << endl;
        for(auto &material: Podcasts){
            if (material->titulo == nombre){
                auto indice = find(Podcasts.begin(), Podcasts.end(), material);
                delete material;
                Podcasts.erase(indice);

                cout << "Podcast '" << nombre << "' eliminado exitosamente. " << endl;
                encontrado = true;
            }
        }
        break;}

    default:{ // Caso donde la opcion dada no es esperada.
        cout << "Opcion no válida." << endl;
        break;}
    }

    if (!encontrado) // Caso donde no se encontró un material con el nombre dado.
    {
        cout << "Nombre a eliminar dado no encontrado." << endl;
    }
    
}

/**
 * @brief Método para liberar toda la memoria asignada en los vectores.
 * 
 * Se liberan todos los punteros asignados en cada vector.
 * 
 */
void MaterialOrdenado::liberar(){
    /* Se recorren todos los vectores y se libera la memoria de cada elemento contenido en estos. */

    for (auto &material: Libros)
    {
        delete material;
    }

    for (auto &material: Noticias)
    {
        delete material;
    }

    for (auto &material: Peliculas)
    {
        delete material;
    }

    for (auto &material: Podcasts)
    {
        delete material;
    }

    cout << "Memoria liberada." << endl;
}