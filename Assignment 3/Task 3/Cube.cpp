#include "Cube.h"

Cube::Cube()
{

}

Cube::Cube(int s) : ThreeDShape(s)
{

}

void Cube::displayCube()
{
	display3D();
	cout << "This is a Cube\n";
}

Cube::~Cube()
{

}