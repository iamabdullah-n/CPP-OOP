#include "B.h"

B::B()
{
	lastName = nullptr;
}

B::B(char* n, A* a)
{
	int len = 0;

	for (len = 0; n[len] != '\0'; len++);

	lastName = new char[len + 1];

	for (int i = 0; i < len; i++)
		lastName[i] = n[i];
	lastName[len] = '\0';

	obj = a;
}

void B::setB(char* n, A* a)
{
	int len = 0;

	for (len = 0; n[len] != '\0'; len++);

	lastName = new char[len + 1];

	for (int i = 0; i < len; i++)
		lastName[i] = n[i];
	lastName[len] = '\0';

	obj = a;
}

char* B::getB()
{
	int len = 0;

	for (len = 0; lastName[len] != '\0'; len++);

	char* n = new char[len + 1];

	for (int i = 0; i < len; i++)
		n[i] = lastName[i];
	n[len] = '\0';

	return n;
}

void B::display()
{
	cout << "First Name : " << obj->getA() << endl;
	cout << "Last Name : " << lastName << endl << endl;
}