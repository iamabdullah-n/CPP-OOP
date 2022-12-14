#include "Time.h"

Time::Time()
{
	hours = nullptr;
	minutes = nullptr;
	seconds = nullptr;
}

Time::Time(int* h, int* m, int* s)
{
	hours = new int();
	minutes = new int();
	seconds = new int();

	*hours = *h;
	*minutes = *m;
	*seconds = *s;
}

Time::Time(const Time& obj)
{
	hours = new int();
	minutes = new int();
	seconds = new int();

	*hours = *obj.hours;
	*minutes = *obj.minutes;
	*seconds = *obj.seconds;
}

int* Time::getHours()
const{
	int* h = new int();
	*h = *hours;
	return h;
}

int* Time::getMinutes()
const{
	int* m = new int();
	*m = *minutes;
	return m;
}

int* Time::getSeconds()
const{
	int* s = new int();
	*s = *seconds;
	return s;
}

Time Time::operator = (const Time& obj)
{
	hours = new int();
	minutes = new int();
	seconds = new int();

	*hours = *obj.hours;
	*minutes = *obj.minutes;
	*seconds = *obj.seconds;

	return *this;
}

bool Time::operator == (const Time& obj)
{
	if (*hours == *obj.hours && *minutes == *obj.minutes && *seconds == *obj.minutes)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Time::operator > (const Time& obj)
{
	bool isGreat = true;

	if (*hours > *obj.hours)
	{
		isGreat = true;
	}
	else if (*hours == *obj.hours)
	{
		if (*minutes > *obj.minutes)
		{
			isGreat = true;
		}
		else if (*minutes == *obj.minutes)
		{
			if (*seconds > *obj.seconds)
			{
				isGreat = true;
			}
			else
			{
				isGreat = false;
			}
		}
		else
		{
			isGreat = false;
		}
	}
	else
	{
		isGreat = false;
	}

	return isGreat;
}

ostream& operator << (ostream& os, const Time& obj)
{
	os << *obj.hours << " : " << *obj.minutes << " : " << *obj.seconds << endl;
	return os;
}

istream& operator >> (istream& is, const Time& obj)
{
	cout << "Enter the Time (FORMAT HH MM SS) : ";
	is >> *obj.hours >> *obj.minutes >> *obj.seconds;
	return is;
}

Time Time::operator + (const Time& obj)
{
	Time temp;

	*temp.hours = *hours + *obj.hours;
	*temp.minutes = *minutes + *obj.hours;
	*temp.seconds = *seconds + *obj.seconds;

	return temp;
}

Time& Time::operator ++ ()
{
	*hours = *hours + 1;
	*minutes = *minutes + 1;
	*seconds = *seconds + 1;

	return *this;
}

Time Time::operator ++ (int)
{
	Time temp = *this;

	*hours = *hours + 1;
	*minutes = *minutes + 1;
	*seconds = *seconds + 1;

	return temp;
}

Time& Time::operator -- ()
{
	*hours = *hours - 1;
	*minutes = *minutes - 1;
	*seconds = *seconds - 1;

	return *this;
}

Time Time::operator -- (int)
{
	Time temp = *this;

	*hours = *hours - 1;
	*minutes = *minutes - 1;
	*seconds = *seconds - 1;

	return temp;
}

Time::~Time()
{
	delete hours, minutes, seconds;
	hours = nullptr;
	minutes = nullptr;
	seconds = nullptr;
}