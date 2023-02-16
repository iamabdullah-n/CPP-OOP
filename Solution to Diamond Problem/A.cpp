#include "A.h"

A::A()
{
	age = 0;
	cout << "A Default Constructor\n";
}

A::A(int a)
{
	age = a;
	cout << "A Parameterzied Constructor\n";
}