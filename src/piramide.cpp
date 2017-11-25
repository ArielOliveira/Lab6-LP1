#include "piramide.h"

namespace arielLib {

	Piramide::Piramide(float altura, float area_base, float area_lateral) {
		this->altura = altura;
		this->area_base = area_base;
		this->area_lateral = area_lateral;
	}

	Piramide::Piramide() {}
	Piramide::~Piramide() {}

	void Piramide::calcArea() {area = area_base + area_lateral;}
	void Piramide::calcVolume() {volume = (area_base * altura) * (1 / 3);}

	void Piramide::setAltura(float altura) {this->altura = altura;}
	void Piramide::setAreaBase(float area_base) {this->area_base = area_base;}
	void Piramide::setAreaLateral(float area_lateral) {this->area_lateral = area_lateral;}

	float Piramide::getAltura() {return altura;}
	float Piramide::getAreaBase() {return area_base;}
	float Piramide::getAreaLateral() {return area_lateral;}
	
	istream& operator>> (std::istream &i, Piramide &p) {
		i >> p.altura >> p.area_base >> p.area_lateral;
		return i;
	}

	ostream& operator<< (ostream &o, Piramide const _piramide) {
		o << "Area: " << _piramide.area << std::endl << "Volume: " << _piramide.volume << std::endl;
		return o;
	}
}