#include "MaterialPrecio.hpp"

void MaterialPrecio::obtenerDatos(){
    for (auto &material : Libros)
    {
        datosMaterial nuevoMaterial;
        nuevoMaterial.titulo = material->titulo;
        nuevoMaterial.tipo = material->tipo;
        nuevoMaterial.precio = material->precio;
        datos.push_back(nuevoMaterial);
    }

    for (auto &material : Noticias)
    {
        datosMaterial nuevoMaterial;
        nuevoMaterial.titulo = material->titulo;
        nuevoMaterial.tipo = material->tipo;
        nuevoMaterial.precio = material->precio;
        datos.push_back(nuevoMaterial);
    }

    for (auto &material : Peliculas)
    {
        datosMaterial nuevoMaterial;
        nuevoMaterial.titulo = material->titulo;
        nuevoMaterial.tipo = material->tipo;
        nuevoMaterial.precio = material->precio;
        datos.push_back(nuevoMaterial);
    }

    for (auto &material : Podcasts)
    {
        datosMaterial nuevoMaterial;
        nuevoMaterial.titulo = material->titulo;
        nuevoMaterial.tipo = material->tipo;
        nuevoMaterial.precio = material->precio;
        datos.push_back(nuevoMaterial);
    }
}

void MaterialPrecio::ordenar(){
    cout << "Ordenar en orden ascendiente (1) o descendiente (2) ?" << endl;
    cout << "Ingrese la opcion: ";
    int opcion; cin >> opcion; 
    for (long long unsigned int step = 0; step < (datos.size()-1); ++step)
    {
        int swapped = 0;

        for (long long unsigned int i = 0; i < (datos.size()-step-1); i++)
        {
            bool comparacion;
            switch (opcion)
            {
            case 1: {
                comparacion = (datos[i].precio > datos[i + 1].precio);
                break;}
            case 2: {
                comparacion = (datos[i].precio < datos[i + 1].precio);
                break;
            }
            default:{
                cout << "Opcion no valida." << endl;
                return;}
            }

            if (comparacion)
            {
                // Se cambian los elementos.
                datosMaterial temp = datos[i];
                datos[i] = datos[i + 1];
                datos[i + 1] = temp;

                swapped = 1;
            }           
        }
        if (swapped == 0)
        {
            break;
        }
    }
    imprimir();
}

void MaterialPrecio::imprimir(){
    cout << "Materiales ordenados: " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    for (auto &elemento : datos)
    {
        cout << "Tipo: " << left << setw(20) << elemento.tipo;
        cout << "Titulo: " << left << setw(20) << elemento.titulo;
        cout << "Precio: " << elemento.precio << endl;
    }
    cout << "---------------------------------------------------------------------" << endl;
}