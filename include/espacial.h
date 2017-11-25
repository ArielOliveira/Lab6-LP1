#ifndef ESPACIAL_H
#define ESPACIAL_H

#include "figura.h"

namespace arielLib {
	class Espacial : public Figura {
		protected:
			float volume;
		public:
			Espacial() {volume = 0;}
			~Espacial() {}
		
			virtual void calcVolume() {volume = 0;}
			float getVolume() {return volume;}
	};
}

#endif