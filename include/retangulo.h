#ifndef RETANGULO_H
#define RETANGULO_H

#include <istream>
using std::istream;

#include <ostream>
using std::ostream;

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
			friend ostream& operator<< (ostream &o, Retangulo const _retangulo);
	};
}

#endif