#include "Teacher.h"

Teacher::Teacher()
{

}

Teacher::Teacher(char* n, int i) : Faculty(n, i)
{

}

void Teacher::displayTeacher()
{
	displayFaculty();
	cout << "Faculty Type : Teacher" << endl;
}