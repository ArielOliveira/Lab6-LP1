#ifndef CUBO_H
#define CUBO_H

#include <istream>
using std::istream;

#include "espacial.h"

namespace arielLib {
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
	};
}

#endif