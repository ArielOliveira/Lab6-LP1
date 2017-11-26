#include "esfera.h"

namespace arielLib {

	Esfera::Esfera(float raio) {this->raio = raio;}

	Esfera::Esfera() {}
	Esfera::~Esfera() {}

	void Esfera::calcArea() {area = 4 * PI * (raio * raio);}
	void Esfera::calcVolume() {volume = (PI * (raio * raio * raio) * (4 / 3));}

	void Esfera::setRaio(float raio) {this->raio = raio;}

	float Esfera::getRaio() {return raio;}

	istream& operator>> (std::istream &i, Esfera &f) {
		i >> f.raio;
		return i;
	}
}