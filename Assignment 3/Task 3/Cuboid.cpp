#include "Cuboid.h"

Cuboid::Cuboid()
{

}

Cuboid::Cuboid(int s) : ThreeDShape(s)
{

}

void Cuboid::displayCuboid()
{
	display3D();
	cout << "This is a Cuboid\n";
}

Cuboid::~Cuboid()
{

}