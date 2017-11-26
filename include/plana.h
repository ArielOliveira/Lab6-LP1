#ifndef PLANA_H
#define PLANA_H

#include "figura.h"

#include <ostream>
using std::ostream;

namespace arielLib {
	class Plana : public Figura {
		protected:
			float perimetro;
		public:
			Plana() {perimetro = 0;}
			~Plana() {}

			virtual void calcPerimetro() {perimetro = 0;}
			float getPerimetro() {return perimetro;}

			friend ostream& operator<< (ostream &o, Plana const _plana) {
				o << "Area: " << _plana.area << std::endl << "Perimetro: " << _plana.perimetro << std::endl;
				return o;
			}
	};

}

#endif