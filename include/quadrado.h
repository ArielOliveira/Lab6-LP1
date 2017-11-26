#ifndef QUADRADO_H
#define QUADRADO_H

#include <istream>
using std::istream;

#include "plana.h"

namespace arielLib {
	class Quadrado : public Plana {
		private:
			float lado;
		public:
			Quadrado(float lado);

			Quadrado();
			~Quadrado();

			void calcArea();
			void calcPerimetro();

			void setLado(float lado);

			float getLado();

			friend istream& operator>> (std::istream &i, Quadrado &r);
	};

}

#endif