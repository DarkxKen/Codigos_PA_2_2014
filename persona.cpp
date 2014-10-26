//
//  personas.cpp
//  2014
//
//  Created by Jorge Brito Gallardo on 25-10-14.
//  Copyright (c) 2014 Jorge Brito Gallardo. All rights reserved.
//

#include <iostream>

using namespace std;

class Persona {
private:
	string nombre;
	int edad;
public:
	Persona() {
		nombre = "";
		edad = 0;
	}
	Persona(string nombre, int edad) {
		this->nombre = nombre;
		this->edad = edad;
	}
	string getNombre() {
		return nombre;
	}
	int getEdad() {
		return edad;
	}
	void setNombre(string n) {
		nombre = n;
	}
	void setEdad(int e) {
		edad = e;
	}
	void imprimir();
};

void Persona::imprimir() {
	cout << nombre << " " << edad << endl;
}

void buscarPersona(Persona a[5], string n) {

}

int main(int argc, char const *argv[])
{
	string nombre = "Jorge";
	int edad = 23;
	Persona *a;
	a = new Persona("Jorge",23);
	Persona b("Jorge", 23);
	Persona c(nombre,edad);
	Persona *d;
	d = new Persona(nombre, edad);

	a->setNombre("Pedro");
	c.setEdad(54);

	cout << "A: " << a->getNombre() << " " << a->getEdad() <<endl;
	cout << "B: " << b.getNombre() << " " << b.getEdad() << endl;
	cout << "C: " << c.getNombre() << " " << c.getEdad() <<endl;
	cout << "D: " << d->getNombre() << " " << d->getEdad() << endl;
	return 0;
}




