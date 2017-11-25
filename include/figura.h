#ifndef FIGURA_H
#define FIGURA_H

namespace arielLib {
	class Figura {
		protected:
			float area;
		public:
			Figura() {area = 0;}
			~Figura() {}
		
			virtual void calcArea() {area = 0;}
			float getArea() {return area;}
	};
}

#endif