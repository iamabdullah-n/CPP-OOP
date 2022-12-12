#include "Circle.h"

int main()
{
	circle c(5);

	cout << "Circumference : " << c.circumference() << endl;
	cout << "Area : " << c.area() << endl;
	cout << "Diameter : " << c.diameter() << endl;

	return 0;
}