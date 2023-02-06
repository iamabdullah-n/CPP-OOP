#include "Triangle.h"

Triangle::Triangle()
{

}

Triangle::Triangle(int s) : TwoDShape(s)
{

}

void Triangle::displayTriangle()
{
	display2D();
	cout << "This is a Triangle\n";
}

Triangle::~Triangle()
{

}