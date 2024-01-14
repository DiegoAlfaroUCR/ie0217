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
    cout << "Elija el material por buscar: ";
    int opcion; cin >> opcion;
    cout << endl << "--------------------------------------------------" << endl;
    switch (opcion)
    {
    case 1:{
        cout << "Lista de libros por titulo, autor y precio: " << endl;
        for(auto &material: Libros){
            cout << material->titulo << ", "<< material->autor << ", " << material->precio << endl;
        }
        break;}
    case 2:{
        cout << "Lista de noticias por titulo, autor y precio: " << endl;
        for(auto &material: Noticias){
            cout << material->titulo << ", "<< material->autor << ", " << material->precio << endl;
        }
        break;}
    case 3:{
        cout << "Lista de peliculas por titulo, autor y precio: " << endl;
        for(auto &material: Peliculas){
            cout << material->titulo << ", "<< material->autor << ", " << material->precio << endl;
        }
        break;}
    case 4:{
        cout << "Lista de podcasts por titulo, autor y precio: " << endl;
        for(auto &material: Podcasts){
            cout << material->titulo << ", "<< material->autor << ", " << material->precio << endl;
        }
        break;}
    default:{
        cout << "Opcion no válida." << endl;
        break;}
    }
    cout << "--------------------------------------------------" << endl;
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

    switch (opcion)
    {
    case 1:{
        for(auto &material: Libros){
            if (material->titulo == nombre){
                delete material;
                cout << "Libro '" << nombre << "' eliminado exitosamente. " << endl;
            } else {cout << "Nombre a eliminar dado no encontrado." << endl;};
        }
        break;}

    case 2:{
        for(auto &material: Noticias){
            if (material->titulo == nombre){
                delete material;
                cout << "Noticia '" << nombre << "' eliminada exitosamente. " << endl;
            } else {cout << "Nombre a eliminar dado no encontrado." << endl;};
        }
        break;}

    case 3:{
        cout << "Lista de peliculas por titulo, autor y precio: " << endl;
        for(auto &material: Peliculas){
            if (material->titulo == nombre){
                delete material;
                cout << "Pelicula '" << nombre << "' eliminada exitosamente. " << endl;
            } else {cout << "Nombre a eliminar dado no encontrado." << endl;};
        }
        break;}

    case 4:{
        cout << "Lista de podcasts por titulo, autor y precio: " << endl;
        for(auto &material: Podcasts){
            if (material->titulo == nombre){
                delete material;
                cout << "Podcast '" << nombre << "' eliminado exitosamente. " << endl;
            } else {cout << "Nombre a eliminar dado no encontrado." << endl;};
        }
        break;}

    default:{
        cout << "Opcion no válida." << endl;
        break;}
    }
}