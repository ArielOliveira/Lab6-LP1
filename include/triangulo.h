#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <istream>
using std::istream;

#include <cmath>

#include "plana.h"

namespace arielLib {
	class Triangulo : public Plana {
		private:
			float base;
			float altura;

			float pitagoras(float a, float b);
		public:
			Triangulo(float base, float altura);
			Triangulo();
			~Triangulo();

			void calcArea();
			void calcPerimetro();

			void setBase(float base);
			void setAltura(float altura);

			float getBase();
			float getAltura();

			friend istream& operator>> (std::istream &, Triangulo &t);
	};
}

#endif