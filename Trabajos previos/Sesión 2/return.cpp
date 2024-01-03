#include <iostream>
using namespace std;

// Se declara la función de suma.
int add(int a, int b){
    return(a+b);
}

int main(){
    int sum;

    // Se llama la funcion de suma.
    sum = add(100, 78); // Se registra el resultado en sum.
    cout << "100 + 78 = " << sum << endl;

    return 0;
}