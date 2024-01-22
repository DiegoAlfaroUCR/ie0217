#include "Operadora.hpp"

#include <complex>

int main(){
    Operadora operadora;
    int tipoVariable;
    try {
        tipoVariable = operadora.imprimirMenu(); }
    catch(const std::exception& e) {
        std::cerr << "\nERROR al escoger tipo de variable: "<< e.what() << '\n'; }
    
    switch (tipoVariable) {
    case 1:{
        OperacionesBasicas<int> matrizA, matrizB;
        operadora.iniciarProceso(matrizA, matrizB);
        break;
        }

    case 2:{
        OperacionesBasicas<float> matrizA, matrizB;
        operadora.iniciarProceso(matrizA, matrizB);
        break;
        }

    case 3:{
        OperacionCompleja matrizA, matrizB;
        operadora.iniciarProceso(matrizA, matrizB);
        break;
        }
    }
    return 0;
}