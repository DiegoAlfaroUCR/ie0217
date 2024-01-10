#include <iostream>
using namespace std;

// Se declara el struct Node.
struct Node{
    // Se dan los atributos data y punteros a nodos a la izquierda y derecha.
    int data;
    struct Node *left, *right;
    // Constructor que establece los datos y los punteros como NULL de forma predeterminada.
    Node(int data){
        this->data = data;
        left = right = NULL; // Triple igualdad wow :o
    }
};

// Funcion que usa Preorder traversal.
void preorderTraversal(struct Node* node){
    // Caso de salida.
    if (node == NULL)
    {
        return;
    }
    
    // Caso recursivo.
    cout << node->data << " -> "; // Se muestran los datos actuales.
    preorderTraversal(node->left); // Se corre la funcion para el nodo a a la izquierda.
    preorderTraversal(node->right); // Se corre la funcion para el nodo a a la derecha.
}

// Funcion que usa postorder traversal.
void postorderTraversal(struct Node* node){
    // Caso de salida.
    if (node == NULL)
    {
        return;
    }

    // Caso recursivo.
    postorderTraversal(node->left); // Se corre la funcion para el nodo a a la izquierda.
    postorderTraversal(node->right); // Se corre la funcion para el nodo a a la derecha.
    cout << node->data << " -> "; // Se muestran los datos actuales.
}

// Funcion que usa inorder traversal.
void inorderTraversal(struct Node* node){
    // Caso de salida.
    if (node == NULL)
    {
        return;
    }

    // Caso recursivo.
    inorderTraversal(node->left); // Se corre la funcion para el nodo a a la izquierda.
    cout << node->data << " -> "; // Se muestran los datos actuales.
    inorderTraversal(node->right); // Se corre la funcion para el nodo a a la derecha.
}

int main(){
    // Se declara el struct root y se le asignan nodos a la izquierda, derecha, etc.
    struct Node* root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    cout << "Inorder traversal ";
    inorderTraversal(root);

    cout << "\nPreorder traverasl ";
    preorderTraversal(root);

    cout << "\nPostorder traversal ";
    postorderTraversal(root);

    return 0;
}