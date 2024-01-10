#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10

// Se cambió el nombre a tamaño pues size presentaba problemas de ambiguedad.
int tamaño = 0; 


// Se crea el stack como struct.
struct stack{
    int items[MAX];
    int top;
};

// Se define el prefijo st para la clase stack.
typedef struct stack st;

// Función para crear stack vacio.
void createEmptyStack(st *s){
    s->top = -1;
}

// Funcion que revisa si stack esta full.
int isfull(st *s){
    if (s->top == MAX -1)
    {
    return 1;
    }
    return 0;
}

// Funcion que revisa si stac esta vacío.
int isempty(st *s){
    if (s->top == -1)
    {
        return 1;
    }
    else {
        return 0;}
}

// Funcion que agrega elementos al stack
void push(st *s, int newitem){
    if (isfull(s))
    {
        cout << "STACK FULL";
    } else {
        s->top++;
        s->items[s->top] = newitem;
    }
    tamaño++;
}

// Funcion para quitar primer elemento del stack.
void pop(st *s){
    if (isempty(s))
    {
        cout << "\n STACK EMPTY \n";
    } else {
        cout << "Item popped: " << s->items[s->top];
        s->top--;
    }
    tamaño--;
    cout << endl;
}

// Función para imprimir elementos del stack.
void printStack(st *s){
    printf("Stack: ");
    for (int i = 0; i < tamaño; i++)
    {
        cout << s->items[i] << " ";
    }
    cout << endl;
}

// Función main
int main(){
    // Se crea un objeto s de tipo stack al asignarle memoria de tamaño stack.
    int ch;
    st *s = (st *)malloc(sizeof(st));

    // Se genera el stack vacío en el objeto s.
    createEmptyStack(s);

    // Se agregan los elementos 1, 2, 3 y 4.
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    // Se imprimen los contenidos del stack.
    printStack(s);

    // Se elimina el último elemento del stack.
    pop(s);

    cout << "\nAfter popping out\n";
    printStack(s);

    return 0;
}