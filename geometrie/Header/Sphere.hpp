#ifndef __SPHERE__
#define __SPHERE__
#include "./Point3D.hpp"

class Sphere
{
	public:
		Sphere(Point3D O, float x);

		Sphere();

		~Sphere();

		float getRadius();
		Point3D getOrigin();

		void setRadius(float newRadius);
		void setOrigin(Point3D newOrigin);

		void display();

		void area();

		void volume();

	protected:
		Point3D origin;
		float radius;
};

#endif
