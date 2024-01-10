#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Se crea un nodo.
class Node{
    public:
    int value;
    Node* next;
};

int main(){
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // Se asignan 3 nodos al heap.
    one = new Node();
    two = new Node();
    three = new Node();
    
    // Se asignan valores.
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Se conectan los nodos.
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Se muestra los valores de la lista de valores.
    head = one;
    while (head != NULL)
    {
        cout << head->value;
        head = head->next;
    }
}