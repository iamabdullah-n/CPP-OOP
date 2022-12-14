#include<iostream>
using namespace std;

class Time
{
	int* hours, * minutes, * seconds;

public:
	Time();
	Time(int*, int*, int*);
	Time(const Time&);
	~Time();

	int* getHours() const;
	int* getMinutes() const;
	int* getSeconds() const;

	Time operator = (const Time&);
	bool operator == (const Time&);
	bool operator > (const Time&);
	friend ostream& operator << (ostream&, const Time&);
	friend istream& operator >> (istream&, const Time&);
	Time operator + (const Time&);
	Time& operator ++ ();
	Time operator ++ (int);
	Time& operator -- ();
	Time operator -- (int);

};