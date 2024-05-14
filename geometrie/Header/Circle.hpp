#ifndef __CIRCLE__
#define __CIRCLE__

#include "./Point.hpp"
class Circle
{
	public:
		Circle(Point O, float x);
		Circle();
		~Circle();
		float getRadius();
		Point getOrigin();
		void display();
        void perimeter();
        void setRadius(float newRadius);
        void setOrigin(Point newOrigin);
        void area();

	protected:
		Point origin;
		float radius;
};
#endif
