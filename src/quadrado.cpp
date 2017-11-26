#include "quadrado.h"

namespace arielLib {

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
}