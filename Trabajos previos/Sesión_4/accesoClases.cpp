#include <iostream>
using namespace std;

// Se define clase Animal
class Animal {
    public: // Se definen funciones publicas, accesibles a todos.
      void setEdad(int age){
        edad = age;
      }
      int getEdad(){
        return edad;
      }
    
    protected: // Se define atributo protegido, accesible solo a la clase y clases hijas.
      string nombre;
    
    private: // Se define atributo privado, accesible solo a la misma clase.
      int edad;
};

// Clase hija de Animal.
class Perro : public Animal {
    public:
        void setNombre(string n) {
            nombre = n;
        }
        string getNombre() {
            return nombre;
        }
};

int main(){
    Perro miPerro;
    miPerro.setNombre("Toby");
    miPerro.setEdad(3);
    // miPerro.edad no se podría usar ya que es un atributo privado de clase Animal.

    cout << "Mi perro se llama " << miPerro.getNombre() << endl;
    cout << "y tiene " << miPerro.getEdad() << " años." << endl;

    return 0;
}