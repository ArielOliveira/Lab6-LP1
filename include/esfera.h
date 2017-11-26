#ifndef ESFERA_H
#define ESFERA_H

#include <istream>
using std::istream;

#include "espacial.h"

#define PI 3.14

namespace arielLib {
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
	};
}

#endif