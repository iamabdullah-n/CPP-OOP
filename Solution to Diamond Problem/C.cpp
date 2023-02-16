#include "C.h"

C::C()
{
	cout << "C Default Constructor\n";
}

C::C(int a) : A(a)
{
	cout << "C Parameterized Constructor\n";
}