#include "Ms.h"

Ms::Ms()
{

}

Ms::Ms(char* n, int i) : Student(n, i)
{

}

void Ms::displayMs()
{
	displayStudent();
	cout << "Student Type : Masters" << endl;
}