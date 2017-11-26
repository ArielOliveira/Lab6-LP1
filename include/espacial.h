#ifndef ESPACIAL_H
#define ESPACIAL_H

#include "figura.h"

#include <ostream>
using std::ostream;

namespace arielLib {
	class Espacial : public Figura {
		protected:
			float volume;
		public:
			Espacial() {volume = 0;}
			~Espacial() {}
		
			virtual void calcVolume() {volume = 0;}
			float getVolume() {return volume;}

			friend ostream& operator<< (ostream &o, Espacial const _espacial) {
				o << "Area: " << _espacial.area << std::endl << "Volume: " << _espacial.volume << std::endl;
				return o;
			}
	};
}

#endif