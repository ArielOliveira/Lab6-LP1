#include "circulo.h"

namespace arielLib {

	Circulo::Circulo(float raio) {this->raio = raio;}

	Circulo::Circulo() {}
	Circulo::~Circulo() {}

	void Circulo::calcArea() {area = PI * (raio * raio);}
	void Circulo::calcPerimetro() {perimetro = 2 * PI * raio;}

	void Circulo::setRaio(float raio) {this->raio = raio;}

	float Circulo::getRaio() {return raio;}

	istream& operator>> (std::istream &i, Circulo &c) {
		i >> c.raio;
		return i;
	}
}