#ifndef PLANA_H
#define PLANA_H

#include "figura.h"

class Plana : public Figura {
	protected:
		float perimetro;
	public:
		Plana() {perimetro = 0;}
		~Plana() {}

		virtual void calcPerimetro() {perimetro = 0;}
		float getPerimetro() {return perimetro;}
};

#endif