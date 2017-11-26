#include "retangulo.h"

namespace arielLib {
	Retangulo::Retangulo(float base, float altura) {
		this->base = base;
		this->altura = altura;
	}

	Retangulo::Retangulo() {}
	Retangulo::~Retangulo() {}

	void Retangulo::calcArea() {area = base * altura;}
	void Retangulo::calcPerimetro() {perimetro = 2 * (base + altura);}

	void Retangulo::setBase(float base) {this->base = base;}
	void Retangulo::setAltura(float altura) {this->altura = altura;}

	float Retangulo::getBase() {return base;}
	float Retangulo::getAltura() {return altura;}

	istream& operator>> (std::istream &i, Retangulo &r) {
		i >> r.base >> r.altura;
		return i;
	}
}