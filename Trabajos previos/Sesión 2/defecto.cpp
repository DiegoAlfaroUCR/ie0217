#include <iostream>
using namespace std;

void add(int a, int b, int c = 3){ // Se establece valor predeterminado para c.
    cout << a + b + c;
}

int main(){
    add(2,3); // Se llama la función con solo los parámetros necesarios.
    return 0;
}