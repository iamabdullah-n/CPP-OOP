#include "Tetrahedon.h"

Tetrahedon::Tetrahedon()
{

}

Tetrahedon::Tetrahedon(int s) : ThreeDShape(s)
{

}

void Tetrahedon::displayTetrahedon()
{
	display3D();
	cout << "This is a Tetrahedon\n";
}

Tetrahedon::~Tetrahedon()
{

}