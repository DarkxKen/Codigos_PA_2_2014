//
//  codebook.cpp
//  2014
//
//  Created by Jorge Brito Gallardo on 25-10-14.
//  Copyright (c) 2014 Jorge Brito Gallardo. All rights reserved.
//

#include <iostream>

using namespace std;

class Code {
	private:
		int n;
		char c;
	public:
		Code() {
			this->n = 0;
			this->c = ' ';
		}
		Code(char a, int b) {
			this->n = b;
			this->c = a;
		}
		void setN(int a) {
			this->n = a;
		}
		void setC(char a) {
			this->c = a;
		}
		int getN() {
			return this->n;
		}
		char getC() {
			return this->c;
		}
};

class CodeBook {
	private:
		Code **list;
	public:
		CodeBook() {
			this->list = new Code*[10];
			for (int i = 0; i < 10; i++)
			{
				list[i] = new Code();
			}
		}
		CodeBook(Code **l) {
			this->list = l;
		}
		int buscarCodigo(char x) {
			for (int i = 0; i < 10; i++) // Recorro la lista
			{
				if(list[i]->getC() == x) { // Pregunto si existe
					return list[i]->getN(); // Retorno equivalente
				}
			}
			return -1;
		}
};

int main(int argc, char const *argv[])
{
	Code **list;
	list = new Code*[10];
	list[0] = new Code('O',0);
	list[1] = new Code('I',1);
	list[2] = new Code('Z',2);
	list[3] = new Code('E',3);
	list[4] = new Code('A',4);
	list[5] = new Code('S',5);
	list[6] = new Code('G',6);
	list[7] = new Code('T',7);
	list[8] = new Code('B',8);
	list[9] = new Code('P',9);
	CodeBook *cb = new CodeBook(list);
	string linea;
	cout << "Ingrese Palabra a codificar: ";
	getline(cin,linea);
	for (int i = 0; i < linea.length(); i++)
	{
		if(cb->buscarCodigo(linea[i]) >= 0) // Pregunto si existe en el CB
			cout << cb->buscarCodigo(linea[i]); // Imprimo equiv si existe
		else
			cout << linea[i];	// Imprimo misma letra, si no existe
	}
	cout << endl;
	return 0;
}






