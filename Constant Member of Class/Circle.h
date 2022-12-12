#include <iostream>

using namespace std;

class circle
{
	double *radius;
	const double pi;

public:
	circle();
	circle(double);
	circle(const circle&);
	~circle();

	double circumference() const;
	double area();
	double diameter();
};