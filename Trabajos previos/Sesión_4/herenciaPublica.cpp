#include <iostream>
using namespace std;

// Se crea clase A.
class A {
    public:
        void display() {
            cout<<"Base class content.";
    }
};

// Se declaran clases B y C hijas públicas de A y de B respectivamente.
class B : public A {};
class C : public B {};

int main() {
    C obj;
    obj.display(); // Se llama función de clase A en objeto de clase C.
    return 0;
}
