#include "Time.h"

int main()
{
	int* hours = new int(), * minutes = new int(), * seconds = new int();
	*hours = 12, * minutes = 35, * seconds = 29;

	Time t1(hours, minutes, seconds);

	cout << "Object t1 :- " << t1 << endl;

	Time t2;
	
	t2 = t1;

	cout << "Object t2 :- " << t2 << endl;

	Time t3;

	t3 = t1++;

	cout << "Object t1 :- " << t1 << endl;
	cout << "Object t3 :- " << t3 << endl;

	t1--;
	t3 = ++t1;

	cout << "Object t1 :- " << t1 << endl;
	cout << "Object t3 :- " << t3 << endl;

	return 0;
}