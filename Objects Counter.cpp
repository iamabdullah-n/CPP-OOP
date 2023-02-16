#include <iostream>
using namespace std;

class A
{
	static int count;

public:
	A()
	{
		cout << "Constructor Check\n";
		count++;
	}

	static int getCount()
	{
		return count;
	}
};

int A::count = 0;

int main()
{
	A obj1;

	A obj2, obj3;

	A obj[10];

	cout << "\n\nThere are " << A::getCount() << " Objects of class A" << endl;

	return 0;
}