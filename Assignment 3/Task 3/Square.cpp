#include "Square.h"

Square::Square()
{

}

Square::Square(int s) : TwoDShape(s)
{

}

void Square::displaySq()
{
	display2D();
	cout << "This is a Sqaure\n";
}

Square::~Square()
{

}