#include "Number.h"

number::number()
{
	num = 0;
}

number::number(int n)
{
	num = n;
}

number number::operator ++ ()
{
	num++;

	return *this;
}

ostream& operator << (ostream& os, const number& obj)
{
	os << obj.num << endl;

	return os;
}

number::~number()
{

}