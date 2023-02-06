#include "AdminTeacher.h"
#include "Bs.h"
#include "Alumnis.h"
#include "MsCourse.h"
#include "MsResearch.h"

int main()
{
	char name[100] = "Abdullah Nadeem";

	Teacher t1(name, 1106);
	t1.displayTeacher();
	cout << endl << endl;

	AdminTeacher at1(name, 1106);
	at1.displayAdmin();

	return 0;
}