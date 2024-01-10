#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float* ptr;

    // Se asigna memoria de cantidad num de floats.
    ptr = new float[num]; // Arreglo de floats de tamaño num.

    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Student" << i + 1 << " : ";
        cin >> *(ptr + i);                  // Se registran las notas a cada estudiante por aritmetica de punteros.
    }
    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; i++)
    {   // Se imprimen las notas con aritmetica de punteros.
        cout << "Student" << i + 1 << " : " << *(ptr + i) << endl;
    }
    
    // Se libera la memoria del puntero.

    delete[] ptr;

    return 0;
}