#include "Static.h"

int Static::count = 10;

int main()
{
	Static s1;
	cout << "s1 Num : " << s1.getNum() << endl;
	cout << "s1 Count : " << s1.getCount() << endl;

	Static s2;
	s2.setNum(50);
	s2.setCount(5);
	cout << "s2 Num : " << s1.getNum() << endl;
	cout << "s2 Count : " << s1.getCount() << endl;

	Static::setCount(24);
	cout << "s1 Count : " << s1.getCount() << endl;
	cout << "s2 Count : " << s1.getCount() << endl;

	return 0;
}