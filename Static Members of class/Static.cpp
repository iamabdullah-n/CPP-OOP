#include"Static.h"

Static::Static()
{
	cout << "DEFAULT CONSTRUCTOR CALLED!!!!\n\n";
	num = 0;
}

void Static::setNum(int n)
{
	num = n;
}

void Static::setCount(int c)
{
	count = c;
}

int Static::getNum()
{
	return num;
}

int Static::getCount()
{
	return count;
}

Static::~Static()
{

}