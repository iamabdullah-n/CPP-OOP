#include "Student.h"

Student::Student()
{

}

Student::Student(char* n, int i) : Community(n, i)
{

}

void Student::displayStudent()
{
	displayCommunity();
	cout << "Type : Student" << endl;
}