#include "Students.hpp"

int main(){
    // Se crean los objetos de clase Student.
    // Se le asignan las variables mark.
    Student student1(88.0), student2(56.0); 

    // Se muestra el promedio de las notas.
    calculateAverage(student1, student2);

    return 0;
}