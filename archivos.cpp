//
//  archivos.cpp
//  2014
//
//  Created by Jorge Brito Gallardo on 25-10-14.
//  Copyright (c) 2014 Jorge Brito Gallardo. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

void imprimir(ofstream &out) {
	string a;
	cin >> a;
	out << "Hola " << a << "!" << endl;
}

int main(int argc, char const *argv[])
{
	ofstream out("test.txt");
	imprimir(out);
	return 0;
}