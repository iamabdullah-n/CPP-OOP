#include "ThreeDShape.h"

ThreeDShape::ThreeDShape()
{

}

ThreeDShape::ThreeDShape(int s) : Shape(s)
{

}

void ThreeDShape::display3D()
{
	displayShape();
	cout << "This is a three dimensional shape\n";
}

ThreeDShape::~ThreeDShape()
{

}