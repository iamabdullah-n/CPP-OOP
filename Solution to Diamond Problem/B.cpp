#include "B.h"

B::B()
{
	cout << "B Default Constructor\n";
}

B::B(int a) : A(a)
{
	cout << "B Parameterized Constructor\n";
}