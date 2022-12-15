#include <iostream>

using namespace std;

class number
{
	int num = 0;

public:
	number();
	number(int);
	~number();

	number& operator ++ ();
	friend ostream& operator << (ostream&, const number&);
};