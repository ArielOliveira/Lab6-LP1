#include "piramide.h"

namespace arielLib {

	Piramide::Piramide(float altura, float area, float area_base, float area_lateral) {
		this->altura = altura;
		this->area = area;
		this->area_base = area_base;
		this->area_lateral = area_lateral;
	}

	Piramide::Piramide() {t = new Triangulo();}
	Piramide::~Piramide() {}

	void Piramide::calcArea() {
		t->setBase(area_base);
		t->setAltura(altura);
		t->calcArea();
		area = (t->getArea() * 4) + (area_base * area_base);
	}

	void Piramide::calcVolume() {volume = (area_base * altura) * (1 / 3);}

	void Piramide::setAltura(float altura) {this->altura = altura;}
	void Piramide::setArea(float area) {this->area = area;}
	void Piramide::setAreaBase(float area_base) {this->area_base = area_base;}
	void Piramide::setAreaLateral(float area_lateral) {this->area_lateral = area_lateral;}

	float Piramide::getAltura() {return altura;}
	float Piramide::getArea() {return area;}
	float Piramide::getAreaBase() {return area_base;}
	float Piramide::getAreaLateral() {return area_lateral;}
	
	istream& operator>> (std::istream &i, Piramide &p) {
		i >> p.altura >> p.area_base;
		return i;
	}
}