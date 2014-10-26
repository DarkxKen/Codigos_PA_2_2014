//
//  lista.cpp
//  2014
//
//  Created by Jorge Brito Gallardo on 25-10-14.
//  Copyright (c) 2014 Jorge Brito Gallardo. All rights reserved.
//

#include <iostream>

using namespace std;

class Nodo {
	private:
		int num;
		Nodo *next;
	public:
		Nodo() {
			num = 0;
			next = NULL;
		}
		Nodo(int n) {
			num = n;
			next = NULL;
		}
		Nodo* getNext(){
			return next;
		}
		void setNext(Nodo *a) {
			next = a;
		}
		int getNum() {
			return num;
		}
		//Set y Gets
};

class Lista {
	private:
		Nodo *first;
		int size;
	public:
		Lista() {
			first = NULL;
			size = 0;
		}
		void agregarFinal(Nodo *a) {
			if(first == NULL) {		//La lista esta vacia
				first = a;
				size++;
			}else {
				Nodo *aux;
				aux = first;
				while(aux->getNext() != NULL) { // Mientras haya un nodo despues
					aux = aux->getNext();
				}
				aux->setNext(a);
				size++;
			}
		}
		void agregarInicio(Nodo *a) {
			if(first == NULL) {
				first = a;
				size++;
			}else {
				a->setNext(first);
				first = a;
				size++;
			}
		}
		void agregar(Nodo *a, int pos) {
			if(first == NULL) {
				first = a;
				size++;
			}else if(pos == 1) {
				agregarInicio(a);
			}else if(pos > size) {
				agregarFinal(a);
			}else {
				Nodo *aux;
				aux = first;
				for(int i = 0; i < pos-2; i++) {
					aux = aux->getNext();
				}
				//Nodo* siguiente;
				//Nodo* anterior;
				//anterior = aux;
				//siguiente = aux->getNext();
				//a->setNext(siguiente);
				//anterior->setNext(a);
				a->setNext(aux->getNext());
				aux->setNext(a);
				size++;
			}
		}

		void imprimir() {
			Nodo *aux = first;
			while(aux != NULL) {
				cout << aux->getNum() << endl;
				aux = aux->getNext();
			}
		}
};

int main(int argc, char const *argv[])
{
	Lista *l;
	l = new Lista();
	Nodo *a = new Nodo(1);
	l->agregarInicio(a);
	l->agregarFinal(new Nodo(3));
	l->agregarFinal(new Nodo(4));
	l->agregar(new Nodo(2), 2);
	l->agregar(new Nodo(7), 3);
	l->imprimir();
	return 0;
}