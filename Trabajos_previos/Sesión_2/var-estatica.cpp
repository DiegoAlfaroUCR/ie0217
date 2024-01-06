#include <iostream>
using namespace std;

void test(){
    // Se crea una variable estática.
    static int var = 0;
    ++var;

    cout << var << endl;
}

int main(){
    // Se llama la función dos veces.
    
    test();
    test();

    return 0;
}