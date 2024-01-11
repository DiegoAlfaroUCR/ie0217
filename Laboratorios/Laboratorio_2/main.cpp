#include "MotoCoche.hpp"

int main(){
    MotoCoche miMotocCoche(60, 2, true);
    // En este llamado se debe aclarar de quien se usa acelerar pues lo hereda de ambos coche y moto.
    miMotocCoche.Coche::acelerar();
    // En este no es necesario aclarar que es de coche.
    miMotocCoche.Coche::abrirPuertas(); // Aun sirve si se aclara.
    // En este caso tampoco, esto porque solo existe en moto.
    miMotocCoche.usarCasco();
    return 0;
}