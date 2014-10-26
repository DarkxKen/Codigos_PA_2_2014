//
//  impresora.cpp
//  2014
//
//  Created by Jorge Brito Gallardo on 25-10-14.
//  Copyright (c) 2014 Jorge Brito Gallardo. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;




class Texto {
	private:
		string titulo;
		string cuerpo;
	public:
		Texto(string a, string b) {
			titulo = a;
			cuerpo = b;
		}
		string getTitulo() {
			return titulo;
		}
		string getCuerpo() {
			return cuerpo;
		}
};

class Impresora {
	private:
		Texto **textos;
		int cont;
	public:
		Impresora() {
			textos = new Texto*[10];
			cont = 0;
		}
		void ingresarTexto(Texto *a) {
			if(cont > 9) {
				cout << "Impresora llena" << endl;
			}else {
				textos[cont] = a;
				cont++;
			}
		}
		void Imprimir(ofstream &out) {
			for (int i = 0; i < cont; i++)
			{
				out << textos[i]->getTitulo() << " ";
				out << textos[i]->getCuerpo() << endl;
			}
		}
};

int main(int argc, char const *argv[])
{
	ofstream out("impresion.txt");
	ifstream inf("datos.txt");
	Impresora *imp = new Impresora();
	string titulo;
	string cuerpo;
	while(!in.eof())
	{
		inf >> titulo;
		inf >> cuerpo;
		Texto *a = new Texto(titulo,cuerpo);
		imp->ingresarTexto(a);
	}
	imp->Imprimir(out);







	return 0;
}