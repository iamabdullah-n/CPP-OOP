#include "Rectangle.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(int s) : TwoDShape(s)
{

}

void Rectangle::displayRectangle()
{
	display2D();
	cout << "This is a Rectangle\n";
}

Rectangle::~Rectangle()
{

}