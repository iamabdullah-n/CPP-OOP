#include <iostream>
using namespace std;

class fraction
{
	int den = 0, num = 0;

public:
	fraction();
	fraction(int, int);
	fraction(const fraction&);
	~fraction();

	fraction operator + (const fraction&);
	fraction operator - (const fraction&);
	fraction operator - ();
	fraction& operator ++ ();
	fraction& operator ++ (int);
	bool operator == (const fraction&);
	friend ostream& operator << (ostream&, const fraction&);
};