#include "quadrado.h"

Quadrado::Quadrado(float lado) {this->lado = lado;}

Quadrado::Quadrado() {}
Quadrado::~Quadrado() {}

void Quadrado::calcArea() {area = lado * lado;}
void Quadrado::calcPerimetro() {perimetro = 4 * lado;}

void Quadrado::setLado(float lado) {this->lado = lado;}

float Quadrado::getLado() {return lado;}

istream& operator>> (std::istream &i, Quadrado &r) {
	i >> r.lado;
	return i;
}

ostream& operator<< (ostream &o, Quadrado const _quadrado) {
	o << "Area: " << _quadrado.area << std::endl << "Perimetro: " << _quadrado.perimetro << std::endl;
	return o;
}