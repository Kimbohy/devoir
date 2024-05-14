#ifndef __RECTANGL__
#define __RECTANGL__

class Rectangle
{
	public:
		Rectangle(float x = 0, float y = 0);

		~Rectangle();

		float getLength();
		float getWidth();

		void setLength(float newLength);
		void setWidth(float newWidth);

		void display();

		void perimeter();

		void area();

	protected:
		float length, width;
};

#endif
