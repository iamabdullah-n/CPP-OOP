#include "Shape.h"

Shape::Shape()
{
	sides = 0;
}

Shape::Shape(int s)
{
	sides = s;
}

void Shape::displayShape()
{
	cout << "This shape has " << sides << " sides \n";
}

Shape::~Shape()
{

}