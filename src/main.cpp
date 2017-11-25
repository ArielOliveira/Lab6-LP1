#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "figuras.h"

using namespace arielLib;

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