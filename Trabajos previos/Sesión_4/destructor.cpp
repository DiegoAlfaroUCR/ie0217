#include <iostream>
#include <fstream>
using namespace std;

class Archivo {
    private:
    fstream archivo; // Variable interna para las funciones.

    public:
      Archivo(string nombre_archivo){
        archivo.open(nombre_archivo, ios::in | ios::out | ios::app);
        if (!archivo.is_open()){
            cout << "No se pudo abrir el archivo " << nombre_archivo << endl;
        }
      }

      ~Archivo(){ // Destructor dado por ~NombreDeClase
        if (archivo.is_open()){ // El destructor se ejecuta la finalizar el programa.
            archivo.close();
        }
      }
};

int main(){
    Archivo mi_archivo("datos.txt"); // Se crea el programa.

    // Se escribe el resto del programa.

    return 0; // Al finalizar el programa se ejecuta el destructor.
    }