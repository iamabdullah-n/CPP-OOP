#include <iostream>
using namespace std;

class Calculator
{
	int operand1, operand2;

public:
	void setOperands(int op1, int op2)
	{
		operand1 = op1;
		operand2 = op2;
	}

	void add()
	{
		cout << "Sum is " << operand1 + operand2 << endl;
	}

	void sub()
	{
		cout << "Difference is " << operand1 - operand2 << endl;
	}

	void mul()
	{
		cout << "Product is " << operand1 * operand2 << endl;
	}

	void div()
	{
		cout << "Division is " << operand1 / operand2 << endl;
	}
};

class ScCalculator : public Calculator
{
	int operand1, operand2;
public:
	void setOperand(int o1, int o2)
	{
		operand1 = o1;
		operand2 = o2;
	}

	void square()
	{
		cout << "Square is " << operand1 * operand1 << endl;
	}

	void power()
	{
		int result = 1;

		for (int i = 1; i <= operand2; i++)
		{
			result *= operand1;
		}

		cout << "The Power is " << result << endl;
	}
};


int main()
{
	Calculator c;

	c.setOperands(10, 20);
	c.add();
	c.sub();

	ScCalculator obj;

	obj.setOperands(10, 20);
	obj.setOperand(5, 2);
	obj.add();
	obj.sub();
	obj.square();
	obj.power();
	
	system("PAUSE");
	return 0;
}