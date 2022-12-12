#include "Fraction.h"

int main()
{
	fraction f1(2, 3);

	cout << "f1 : " << f1 << endl << endl;

	fraction f2 = f1++;

	cout << "f1 : " << f1 << endl;
	cout << "f2 : " << f2 << endl << endl;

	fraction f3 = ++f2;

	cout << "f2 : " << f2 << endl;
	cout << "f3 : " << f3 << endl << endl;

	fraction f4 = f1 + f2;

	cout << "f1 : " << f1 << endl;
	cout << "f2 : " << f2 << endl;
	cout << "f4 : " << f4 << endl << endl;

	fraction f5 = f4 - f3;

	cout << "f3 : " << f3 << endl;
	cout << "f4 : " << f4 << endl;
	cout << "f5 : " << f5 << endl << endl;

	fraction f6 = -f4;

	cout << "f4 : " << f4 << endl;
	cout << "f6 : " << f6 << endl;

	return 0;
}