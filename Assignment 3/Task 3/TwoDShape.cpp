#include "TwoDShape.h"

TwoDShape::TwoDShape()
{

}

TwoDShape::TwoDShape(int s) : Shape(s)
{

}

void TwoDShape::display2D()
{
	displayShape();
	cout << "This is a Two Dimensional Shape\n";
}

TwoDShape::~TwoDShape()
{

}