#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H

#include <istream>
using std::istream;

#include "espacial.h"

namespace arielLib {
	class Paralelepipedo : public Espacial {
		private:
			float aresta1;
			float aresta2;
			float aresta3;
		public:
			Paralelepipedo(float aresta1, float aresta2, float aresta3);

			Paralelepipedo();
			~Paralelepipedo();

			void calcArea();
			void calcVolume();

			void setAresta1(float aresta1);
			void setAresta2(float aresta2);
			void setAresta3(float aresta3);

			float getAresta1();
			float getAresta2();
			float getAresta3();

			friend istream& operator>> (std::istream &i, Paralelepipedo &p);
	};
}

#endif