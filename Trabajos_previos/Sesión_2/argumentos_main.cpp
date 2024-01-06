#include <iostream>
using namespace std;

int main(int argc, char* argv[]){ // Se reciben la cantidad de argumentos y los argumentos dados.
    // Se imprimen la cantidad de argumentos y el primer argumento (índice 0).
    cout << "Número de argumentos: " << argc << endl; 
    cout << "Nombre del programa: " << argv[0] << endl;

    // Se imprimen los argumentos dados.
    if (argc > 1){
        cout << "Argumentos adicionales: " << endl;
        for (int i = 1; i < argc; ++i){
            cout << "argv[" << i << "]: " << argv[i] << endl;
        }
    }
    return 0;
}