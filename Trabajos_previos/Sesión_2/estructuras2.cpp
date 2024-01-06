#include <iostream>
using namespace std;

// Se declara la estructura Person.
struct Person{
    // Se establecen las características de la estructura.
    char name[50];
    int age;
    float salary;
};

int main(){
    // Se define la persona p1.
    Person p1;

    // Se obtienen las características del input del usuario.
    cout << "Enter Full name ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    // Se muestran las características dadas.
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;\
    cout << "Salary: " << p1.salary;

    return 0;
}