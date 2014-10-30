//
//  pilas.cpp
//
//
//  Created by Jorge Brito Gallardo on 29-10-14.
//
//

#include <iostream>

using namespace std;

class Nodo {
private:
    int num;
    Nodo *next;
public:
    Nodo(int n) { num = n; next = NULL; }
    void setNum(int n) { num = n; }
    int getNum() { return num; }
    void setNext(Nodo *a) { next =a; }
    Nodo* getNext() { return next; }
};

class Pila {
private:
    Nodo *top;
public:
    Pila() {
        top = NULL;
    }
    void push(Nodo* a) {    // Agregar al inicio
        a->setNext(top);
        top = a;
    }
    void pop() {            // Quita al inicio
        top = top->getNext();
    }
    int front() {             // Retorna valor primer nodo
        return top->getNum();
    }
    bool empty() {
        if(!top)            // if(top == NULL)
            return true;
        else
            return false;
    }
    void imprimir() {
        Nodo *aux = top;
        while(aux) {        // Mientras exista
            cout << aux->getNum() << endl;
            aux = aux->getNext();
        }
    }
};

Pila* invertir(Pila* pila) {
    Pila *temp = new Pila();    //Pila temporal
    int aux;                    //Variable para guardar el valor
    while(!pila->empty()) {     //Mientras la pila no este vacia
        aux = pila->front();    //Saco el primer valor de la pila
        pila->pop();            //Saco el Nodo de la pila
        temp->push(new Nodo(aux));  //Meto un Nodo a la pila temporal con el valor del primer Nodo de la pila
    }
    return temp;
}


int main() {
    Pila *p;
    p = new Pila();
    p->push(new Nodo(1));
    p->push(new Nodo(2));
    p->push(new Nodo(3));
    p->push(new Nodo(4));
    p->push(new Nodo(5));
    p->push(new Nodo(6));
    p->imprimir();
    cout << "-----------------" << endl;
    p = invertir(p);
    p->imprimir();
    
    
}










