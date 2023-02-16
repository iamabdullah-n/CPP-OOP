#include "A.h"

A::A()
{
	firstName = nullptr;
}

A::A(char* n)
{
	int len = 0;

	for (len = 0; n[len] != '\0'; len++);

	firstName = new char[len + 1];

	for (int i = 0; i < len; i++)
		firstName[i] = n[i];
	firstName[len] = '\0';
}

void A::setA(char* n)
{
	int len = 0;

	for (len = 0; n[len] != '\0'; len++);

	firstName = new char[len + 1];

	for (int i = 0; i < len; i++)
		firstName[i] = n[i];
	firstName[len] = '\0';
}

char* A::getA()
{
	int len = 0;

	for (len = 0; firstName[len] != '\0'; len++);

	char* n = new char[len + 1];

	for (int i = 0; i < len; i++)
		n[i] = firstName[i];
	n[len] = '\0';

	return n;
}