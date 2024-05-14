#ifndef __SQUARE__
#define __SQUARE__

class Square
{
	public:
		Square(float x = 0);
		~Square();
		float getCote();
		void setCote(float newCote);
		void display();
		void perimeter();
		void aire();

	protected:
		float cote;
};
#endif