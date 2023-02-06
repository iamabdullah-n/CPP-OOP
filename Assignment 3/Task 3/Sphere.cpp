#include "Sphere.h"

Sphere::Sphere()
{

}

Sphere::Sphere(int s) : ThreeDShape(s)
{

}

void Sphere::displaySphere()
{
	display3D();
	cout << "This is a Sphere\n";
}

Sphere::~Sphere()
{

}