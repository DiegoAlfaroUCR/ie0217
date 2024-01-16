#include "MaterialOrdenado.hpp"

void MaterialOrdenado::agregar(){
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
        Libro* ptrlibro = new Libro;
        ptrlibro->crearLibro();
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

void MaterialOrdenado::buscar(){
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
    case 1:{
        cout << "Lista de libros: " << endl;
        for(auto &material: Libros){
            cout << "Titulo: " << left << setw(15) << material->titulo;
            cout << "Autor: " << left << setw(15) << material->autor;
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
    case 5:{
        buscarNombre();
        break;
    }
    default:{
        cout << "Opcion no válida." << endl;
        break;}
    }
    cout << "-----------------------------------------------------------" << endl;
}

void MaterialOrdenado::buscarNombre(){
    cout << "Ingrese el nombre del material: ";
    string nombre ; getline(cin>>ws, nombre);

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

void MaterialOrdenado::eliminar(){
    cout << endl << "-----Menu de eliminacion------" << endl;
    cout << "1: Libro" << endl;
    cout << "2: Noticia" << endl;
    cout << "3: Pelicula" << endl;
    cout << "4: Podcast" << endl;
    cout << "Elija el material por eliminar: ";
    int opcion; cin >> opcion;
    
    cout << "Ingrese el nombre correcto del material: ";
    string nombre;
    getline(cin>>ws, nombre);

    bool encontrado = false;
    switch (opcion)
    {
    case 1:{
        for(auto &material: Libros){
            if (material->titulo == nombre){
                auto indice = find(Libros.begin(), Libros.end(), material);
                delete material;
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

    default:{
        cout << "Opcion no válida." << endl;
        break;}
    }

    if (!encontrado)
    {
        cout << "Nombre a eliminar dado no encontrado." << endl;
    }
    
}

void MaterialOrdenado::liberar(){
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