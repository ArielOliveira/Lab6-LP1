#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <istream>
using std::istream;

#include "plana.h"

namespace arielLib {
	class Triangulo : public Plana {
		private:
			float base;
			float altura;
			float lado;	
		public:
			Triangulo(float base, float altura, float lado);
			Triangulo();
			~Triangulo();

			void calcArea();
			void calcPerimetro();

			void setBase(float base);
			void setAltura(float altura);
			void setLado(float lado);

			float getBase();
			float getAltura();
			float getLado();

			friend istream& operator>> (std::istream &, Triangulo &t);
	};
}

#endif