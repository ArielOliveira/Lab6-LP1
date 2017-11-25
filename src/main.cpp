#include <iostream>
using std::cin;
using std::cout;
using std::endl;


#include "triangulo.h"
#include "circulo.h"
#include "piramide.h"

int main() {
	Triangulo *t = new Triangulo();
	cin >> *t;

	t->calcArea();
	t->calcPerimetro();

	cout << *t << endl;

	Circulo *c = new Circulo();

	cin >> *c;

	c->calcArea();
	c->calcPerimetro();

	cout << *c << endl;
	

	return 0;
}