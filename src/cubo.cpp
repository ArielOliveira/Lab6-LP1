#include "cubo.h"

namespace arielLib {

	Cubo::Cubo(float aresta) {this->aresta = aresta;}

	Cubo::Cubo() {}
	Cubo::~Cubo() {}

	void Cubo::calcArea() {area = 6 * aresta;}
	void Cubo::calcVolume() {volume = aresta * aresta * aresta;}

	void Cubo::setAresta(float aresta) {this->aresta = aresta;}

	float Cubo::getAresta() {return aresta;}

	istream& operator>> (std::istream &i, Cubo &c) {
		i >> c.aresta;
		return i;
	}
}