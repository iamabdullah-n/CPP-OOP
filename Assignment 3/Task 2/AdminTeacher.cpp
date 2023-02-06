#include "AdminTeacher.h"

AdminTeacher::AdminTeacher()
{

}

AdminTeacher::AdminTeacher(char* n, int i) : Administrator(n, i), Teacher(n, i)
{

}

void AdminTeacher::displayAdmin()
{
	displayAdministrator();
	displayTeacher();
	cout << "Administrating Teacher" << endl;
}