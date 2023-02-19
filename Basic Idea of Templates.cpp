#include <iostream>
using namespace std;

template<class A>

class Number
{
	A num;

public:
	Number(const A n)
	{
		num = n;
	}

	A getNum()
	{
		return num;
	}
};

int main()
{
	Number<int>obj1(10);

	Number<double>obj2(10.01241);

	cout << obj1.getNum() << endl;

	cout << obj2.getNum() << endl;

	return 0;
}