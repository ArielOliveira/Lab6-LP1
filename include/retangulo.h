#ifndef RETANGULO_H
#define RETANGULO_H

#include <istream>
using std::istream;

#include "plana.h"

namespace arielLib {
	class Retangulo : public Plana {
		private:
			float base;
			float altura;
		public:
			Retangulo(float base, float altura);
			Retangulo();
			~Retangulo();

			void calcArea();
			void calcPerimetro();
		
			void setBase(float base);
			void setAltura(float altura);

			float getBase();
			float getAltura();

			friend istream& operator>> (std::istream &i, Retangulo &r);
	};
}

#endif