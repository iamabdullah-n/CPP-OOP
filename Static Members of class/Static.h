#include <iostream>

using namespace std;

class Static
{
	int num;
	static int count;

public:
	Static();
	~Static();

	void setNum(int);
	static void setCount(int);

	int getNum();
	static int getCount();
};