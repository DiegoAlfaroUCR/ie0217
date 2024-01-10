#ifndef STUDENTS_H
#define STUDENTS_H

#include <iostream>
using namespace std;

// Se define la clase.
class Student {
    // Se definen las varaibles públicas.
    public:
    double marks;

    // Se declara el prototipo de la función constructora.
    Student(double m);
};

// Se declara el prototipo de función para el promedio.
void calculateAverage(Student s1, Student s2);
#endif