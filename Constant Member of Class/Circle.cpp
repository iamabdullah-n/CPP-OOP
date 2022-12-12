#include "Circle.h"

circle::circle():pi(22.0/7)
{
	radius = nullptr;
}

circle::circle(double r):pi(22.0 / 7)
{
	radius = new double();
	*radius = r;
}

circle::circle(const circle& obj):pi(22.0/7)
{
	radius = new double();
	*radius = *obj.radius;
}

double circle::circumference() const
{
	return 2 * *radius * pi;
}

double circle::area()
{
	return pi * *radius * *radius;
}

double circle::diameter()
{
	return 2 * *radius;
}

circle::~circle()
{

}