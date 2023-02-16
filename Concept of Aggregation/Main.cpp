#include "B.h"

int main()
{
	char name[100] = { '\0' };

	cout << "Enter your First Name : ";
	cin >> name;

	A obj(name);

	cout << "Enter your Last Name : ";
	cin >> name;

	B obj2(name, &obj);

	obj2.display();

	return 0;
}