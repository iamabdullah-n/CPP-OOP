#include <iostream>
using namespace std;

template <typename A>

A myMax(A a, A b)
{
	return (a > b) ? a : b;
}

int main()
{
	int a = 3, b = 5;

	cout << "The larger value among " << a << " and " << b << " is " << myMax(a, b) << endl;

	double x = 5.6, y = 7.3;

	cout << "The larger value among " << x << " and " << y << " is " << myMax(x, y) << endl;

	string p = "Abdullah Nadeem", q = "Abdul Naffey";

	cout << "The larger value among " << p << " and " << q << " is " << myMax(p, q) << endl;

	return 0;
}