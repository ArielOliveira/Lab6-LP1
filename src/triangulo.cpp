#include "triangulo.h"
	
namespace arielLib { 
	Triangulo::Triangulo(float base, float altura, float lado) {
		this->base = base;
		this->altura = altura;
		this->lado = lado;
	}

	Triangulo::Triangulo() {}
	Triangulo::~Triangulo() {}

	void Triangulo::calcArea() {area = (base * altura) / 2;}
	void Triangulo::calcPerimetro()  {perimetro = lado * 3;}

	void Triangulo::setBase(float base) {this->base = base;}
	void Triangulo::setAltura(float altura) {this->altura = altura;}
	void Triangulo::setLado(float lado) {this->lado = lado;}

	float Triangulo::getBase() {return base;}
	float Triangulo::getAltura() {return altura;}
	float Triangulo::getLado() {return lado;}

	istream& operator>> (istream &i, Triangulo &t) {
		i >> t.base >> t.altura >> t.lado;
		return i;
	}

	ostream& operator<< (ostream &o, Triangulo const _triangulo) {
		o << "Area: " << _triangulo.area << std::endl << "Perimetro: " << _triangulo.perimetro << std::endl;
		return o;
	}
}