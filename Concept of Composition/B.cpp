#include "B.h"

B::B()
{
	num2 = 0;
}

B::B(int n) : obj(n)
{
	num2 = n;
}

void B::setB(int n)
{
	obj.setA(n);
	num2 = n;
}

int B::getB()
{
	return num2;
}

void B::display()
{
	cout << "A : " << obj.getA() << endl;
	cout << "B : " << num2 << endl << endl;
}