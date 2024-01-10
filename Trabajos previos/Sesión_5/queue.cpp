#include <iostream>
#define SIZE 5

using namespace std;

// Se crea la clase Queue.
class Queue
{
private:
    int items[SIZE], front, rear;
public:
    // Clase constructora que define atributos front y rear.
    Queue(){
        front = -1;
        rear = -1;
    }
    
    // Funciona para verificar si queue está lleno.
    bool isFull(){
        if (front == 0 && rear == SIZE -1)
        {
            return true;
        }
        return false;
    }

    // Funcion para verificar si queue está vacío.
    bool isEmpty(){
        if (front == -1)
        {
            return true;
        }
        else 
            return false;
    }

    // Funcion para agregar un elemento al queue.
    void enQueue(int element){
        if (isFull())
        {
            cout << "Queue is full";
        } else {
            if (front == -1) front = 0; // Esta sintaxis permite cambiar front despues de revisar la condicion.
            {
                rear++;
                items[rear] = element;
                cout << endl << "Inserted " << element << endl;
            }
        }
    }

    // Funcion para quitar un elemento del queue.
    int deQueue(){
        int element;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return (-1);
        } else {
            element = items[front];
            if (front >= rear) // Queue solo tiene un elemento, entonces se reinicia despues de borrar.
            {
                front = -1;
                rear = -1;
            }
            else {
                front++;
            }
            cout << endl << "Deleted ->" << element << endl;
            return element;
        }
    }

    // Funcion para mostrar elementos del queue.
    void display(){
        int i;
        if (isEmpty())
        {
            cout << endl << "Empty Queue" << endl;
        } else {
            cout << endl << "Front index ->" << front;
            cout << endl << "Items -> ";
            for (i = front; i < rear; i++)
            {
                cout << items[i] << " ";
            }
        cout << endl << "Rear index -> " << rear << endl; // Se cambio este printa a fuera del for.
        }
    }
};

int main(){
    Queue q;

    // No se puede llamar deQueue en un queue vacio.
    q.deQueue();

    // Se agregan 5 elementos al queue.
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // No se logra agregar el sexto elemento pues queue esta lleno.
    q.enQueue(6);

    q.display();

    // Se remueve el primer elemento en el queue (1).
    q.deQueue();

    // Ahora solo hay 4 elementos.
    q.display();

    return 0;
}