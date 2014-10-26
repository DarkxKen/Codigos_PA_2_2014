//
//  arreglo_nombres.cpp
//  2014
//
//  Created by Jorge Brito Gallardo on 25-10-14.
//  Copyright (c) 2014 Jorge Brito Gallardo. All rights reserved.
//

#include <iostream>

using namespace std;

void buscar(string arreglo[3], string nombre) {
	for (int i = 0; i < 3; i++)
	{
		if(arreglo[i] == nombre) {
			cout << "Encontrado" << endl;
			return;
		}
	}
}

int main(int argc, char const *argv[])
{
	string a[3];
	a[0] = "Jorge";
	a[1] = "Natalia";
	a[2] = "Natalia";
	for (int i = 0; i < 3; i++)
	{
		if(a[i] == "Natalia") {
			cout << "Encontrado" << endl;
			break;
		}
	}
	buscar(a,"Natalia");
	return 0;
}