#include "triangulo.h"
	
namespace arielLib { 
	Triangulo::Triangulo(float base, float altura) {
		this->base = base;
		this->altura = altura;
	}

	Triangulo::Triangulo() {}
	Triangulo::~Triangulo() {}

	void Triangulo::calcArea() {area = (base * sqrt(pitagoras(base / 2, base)
	 									- (pitagoras(base / 2, base) * 2))) / 2;}
	void Triangulo::calcPerimetro()  {perimetro = base * 3;}

	void Triangulo::setBase(float base) {this->base = base;}
	void Triangulo::setAltura(float altura) {this->altura = altura;}

	float Triangulo::pitagoras(float a, float b) {return pow(a,2) - pow(b,2);}

	float Triangulo::getBase() {return base;}
	float Triangulo::getAltura() {return altura;}

	istream& operator>> (istream &i, Triangulo &t) {
		i >> t.base;
		return i;
	}
}