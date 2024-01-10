#include <iostream>
using namespace std;

// Se crea la clase estudiante.
class Student {
    public:
    double marks;

    Student(double m){
        marks = m;
    }
};

// Funcion para calcular promedio con parámetros de clase estudiante.
void calculateAverage(Student s1, Student s2){
    double average = (s1.marks + s2.marks)/2;

    cout << "Average marks = " << average << endl;
}

int main(){
    Student student1(88.0), student2(56.0); // Se declaran las variables clase estudiante.

    calculateAverage(student1, student2); // Se llama la función con los parámetros clase estudiante.
    return 0;
}