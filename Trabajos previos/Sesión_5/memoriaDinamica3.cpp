#include <iostream>
using namespace std;

class Student {
    private:
    int age;

    public:
    // Constructor que inicializa la edad en 12.
    Student() : age(12) {}

    void getAge(){
        cout << "Age = " << age << endl;
    }
};

int main(){
    // Se declara objeto clase Student dinamicamente.
    // Se declara como puntero pues new genera una dirección de memoria.
    Student* ptr = new Student(); // Note que se llama como si se llamara al constructor.

    // Se llama funcion getAge.
    ptr->getAge();

    // Se libera la memoria usada.
    delete ptr;

    return 0;
}