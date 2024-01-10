#include <iostream>
using namespace std;

// Se crea la clase student.
class Student {
    public:
    double marks1, marks2;
};

// Se crea función createStudent que retorna un objeto Student.
Student createStudent(){
    Student student;

    student.marks1 = 96.5;
    student.marks2 = 75.0;

    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    return student; // Se retorna como una variable normal.
}

int main(){
    Student student1;

    student1 = createStudent(); // Se asigna el return a una variable Student.

    return 0;
}