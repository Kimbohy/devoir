#ifndef __TRIANGLE__
#define __TRIANGLE__

class Triangle
{
	public:
		Triangle();
		Triangle(float x, float y, float z);
		~Triangle();
		float getEdgeA();
		float getEdgeB();
		float getEdgeC();
		void setEdgeA(float newEdgeA);
		void setEdgeB(float newEdgeB);
		void setEdgeC(float newEdgeC);
		void display();
		void perimeter();

	protected:
		float edgeA, edgeB, edgeC;
};

#endif
