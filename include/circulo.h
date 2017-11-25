#ifndef CIRCULO_H
#define CIRCULO_H

#include <istream>
using std::istream;

#include <ostream>
using std::ostream;

#define PI 3.14

#include "plana.h"

namespace arielLib {
	class Circulo : public Plana {
		private:
			float raio;
		public:
			Circulo(float raio);

			Circulo();
			~Circulo();

			void calcArea();
			void calcPerimetro();

			void setRaio(float raio);

			float getRaio();

			friend istream& operator>> (std::istream &i, Circulo &c);
			friend ostream& operator<< (ostream &o, Circulo const _circulo);
	};
}

#endif