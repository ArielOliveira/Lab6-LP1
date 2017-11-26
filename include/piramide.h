#ifndef PIRAMIDE_H
#define PIRAMIDE_H

#include <istream>
using std::istream;

#include "espacial.h"
#include "triangulo.h"

namespace arielLib {
	class Piramide : public Espacial {
		private:
			float altura;
			float area_base;
			float area_lateral;

			Triangulo *t;
		public:
			Piramide(float altura, float area, float area_base, float area_lateral);

			Piramide();
			~Piramide();

			void calcArea();
			void calcVolume();

			void setAltura(float altura);
			void setArea(float area);
			void setAreaBase(float area_base);
			void setAreaLateral(float area_lateral);

			float getAltura();
			float getArea();
			float getAreaBase();
			float getAreaLateral();

			friend istream& operator>> (std::istream &i, Piramide &p);
	};
}

#endif