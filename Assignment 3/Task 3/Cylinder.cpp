#include "Cylinder.h"

Cylinder::Cylinder()
{

}

Cylinder::Cylinder(int s) : ThreeDShape(s)
{

}

void Cylinder::displayCylinder()
{
	display3D();
	cout << "This is a Cylinder\n";
}

Cylinder::~Cylinder()
{

}