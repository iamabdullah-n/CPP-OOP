#include "Circle.h"

Circle::Circle()
{

}

Circle::Circle(int s) : TwoDShape(s)
{

}

void Circle::displayCircle()
{
	display2D();
	cout << "This is a Circle\n";
}

Circle::~Circle()
{

}