
#include "Faculty.h"

class Teacher : public Faculty
{
public:
	Teacher();
	Teacher(char* n, int i);
	void displayTeacher();
};