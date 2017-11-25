#ifndef PIRAMIDE_H
#define PIRAMIDE_H

#include <istream>
using std::istream;

#include <ostream>
using std::ostream;

#include "espacial.h"

namespace arielLib {
	class Piramide : public Espacial {
		private:
			float altura;
			float area_base;
			float area_lateral;
		public:
			Piramide(float altura, float area_base, float area_lateral);

			Piramide();
			~Piramide();

			void calcArea();
			void calcVolume();

			void setAltura(float altura);
			void setAreaBase(float area_base);
			void setAreaLateral(float area_lateral);

			float getAltura();
			float getAreaBase();
			float getAreaLateral();

			friend istream& operator>> (std::istream &i, Piramide &p);
			friend ostream& operator<< (ostream &o, Piramide const _piramide);
	};
}

#endif