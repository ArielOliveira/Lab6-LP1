#ifndef CUBO_H
#define CUBO_H

#include <istream>
using std::istream;

#include <ostream>
using std::ostream;

#include "espacial.h"

class Cubo : public Espacial {
	private:
		float aresta;
	public:
		Cubo(float aresta);

		Cubo();
		~Cubo();

		void calcArea();
		void calcVolume();

		void setAresta(float aresta);

		float getAresta();

		friend istream& operator>> (std::istream &i, Cubo &c);
		friend ostream& operator<< (ostream &o, Cubo const _cubo);
}

#endif
