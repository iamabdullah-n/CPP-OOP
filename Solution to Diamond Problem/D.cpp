#include "D.h"

D::D()
{
	cout << "D Default Constructor\n";
}

D::D(int a) : B(a), C(a)
{
	cout << "D Parameterized Constructor\n";
}