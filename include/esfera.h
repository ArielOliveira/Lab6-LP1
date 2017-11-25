#ifndef ESFERA_H
#define ESFERA_H

#include <istream>
using std::istream;

#include <ostream>
using std::ostream;

#define PI 3.14

#include "espacial.h"

class Esfera : public Espacial {
	private:
		float raio;
	public:
		Esfera(float raio);

		Esfera();
		~Esfera();

		void calcArea();
		void calcVolume();

		void setRaio(float raio);

		float getRaio();

		friend istream& operator>> (std::istream &i, Esfera &f);
		friend ostream& operator<< (ostream &o, Esfera const _esfera);
};

#endif