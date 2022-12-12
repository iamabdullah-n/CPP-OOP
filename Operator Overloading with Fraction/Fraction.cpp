#include "Fraction.h"

fraction::fraction()
{
	den = 0;
	num = 0;
}

fraction::fraction(int n, int d)
{
	num = n;

	if (d == 0)
	{
		d = 1;
	}

	den = d;
}

fraction::fraction(const fraction& obj)
{
	den = obj.den;
	num = obj.num;
}

fraction fraction::operator + (const fraction& obj)
{
	fraction result;

	result.den = den * obj.den;

	result.num = num * obj.den + obj.num * den;

	return result;
}

fraction fraction::operator - (const fraction& obj)
{
	fraction result;

	result.den = den * obj.den;

	result.num = num * obj.den - obj.num * den;

	return result;
}

fraction fraction::operator - ()
{
	fraction result;

	result.num = num * -1;
	result.den = den;

	return result;
}

fraction fraction::operator ++ ()
{
	num = num + den;

	return *this;
}

fraction fraction::operator ++ (int)
{
	fraction temp = *this;

	num = num + den;

	return temp;
}

bool fraction::operator == (const fraction& obj)
{
	if (num == obj.num && den == obj.den)
	{
		return true;
	}

	return false;
}

ostream& operator << (ostream& os, const fraction& obj)
{
	os << "Fraction : " << obj.num << "/" << obj.den << endl;

	return os;
}

fraction::~fraction()
{}