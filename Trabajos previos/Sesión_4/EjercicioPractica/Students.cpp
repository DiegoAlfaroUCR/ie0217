#include "Students.hpp"

// Se crea la funcion constructora de la clase Student.
Student::Student(double m){
    this->marks = m;
}

// Se crea la funcion para obtener el promedio y mostrarlo.
void calculateAverage(Student s1, Student s2){
    double average = (s1.marks + s2.marks)/2;

    cout << "Average Marks = " << average << endl;
}