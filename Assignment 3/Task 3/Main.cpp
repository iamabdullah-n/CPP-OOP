#include "Square.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Paralellogram.h"
#include "Cube.h"
#include "Cuboid.h"
#include "Cylinder.h"
#include "Sphere.h"
#include "Tetrahedon.h"

int main()
{
	Square s1(4);
	s1.displaySq();
	cout << endl << endl;

	Triangle p1(3);
	p1.displayTriangle();
	cout << endl << endl;

	Cuboid c1(6);
	c1.displayCuboid();
	cout << endl << endl;

	Sphere s2(1);
	s2.displaySphere();
	cout << endl << endl;

	return 0;
}