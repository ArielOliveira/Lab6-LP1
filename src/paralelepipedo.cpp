#include "paralelepipedo.h"

namespace arielLib {

	Paralelepipedo::Paralelepipedo(float aresta1, float aresta2, float aresta3) {
		this->aresta1 = aresta1;
		this->aresta2 = aresta2;
		this->aresta3 = aresta3;
	}

	Paralelepipedo::Paralelepipedo() {}
	Paralelepipedo::~Paralelepipedo() {}

	void Paralelepipedo::calcArea() {
		area = (2 * (aresta1 * aresta2)) +
			   (2 * (aresta1 * aresta3)) +
		   	(2 * (aresta2 * aresta3));
	}
	void Paralelepipedo::calcVolume() {volume = aresta1 * aresta2 * aresta3;}

	void Paralelepipedo::setAresta1(float aresta1) {this->aresta1 = aresta1;}
	void Paralelepipedo::setAresta2(float aresta2) {this->aresta2 = aresta2;}
	void Paralelepipedo::setAresta3(float aresta3) {this->aresta3 = aresta3;}

	float Paralelepipedo::getAresta1() {return aresta1;}
	float Paralelepipedo::getAresta2() {return aresta2;}
	float Paralelepipedo::getAresta3() {return aresta3;}

	istream& operator>> (std::istream &i, Paralelepipedo &p) {
		i >> p.aresta1 >> p.aresta2 >> p.aresta3;
		return i;
	}

	ostream& operator<< (ostream &o, Paralelepipedo const _paralelepipedo) {
		o << "Area: " << _paralelepipedo.area << std::endl << "Volume: " << _paralelepipedo.volume << std::endl;
		return o;
	}
}