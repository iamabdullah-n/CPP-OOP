#include <iostream>
using namespace std;

class BankAccount
{
	char* title;
	long int accountNumber;

public:
	long int balance;

	BankAccount(char* t, long int acc, long int bal)
	{
		int len = 0;

		for (len = 0; t[len] != '\0'; len++);

		title = new char[len + 1];

		for (int i = 0; t[i] != '\0'; i++)
		{
			title[i] = t[i];
		}
		title[len] = '\0';

		accountNumber = acc;

		balance = bal;
	}

	void deposit(long int bal)
	{
		long int temp;

		cout << "Name : " << title << endl;
		cout << "Account Number : " << accountNumber << endl;

		if (bal >= 0 && bal < 10000)
		{
			cout << "As the amount is less than 10,000 so transactions fees would be 5%" << endl;

			temp = 0.05 * bal;

			bal -= temp;

			balance += bal;
		}
		else if (bal >= 10000 && bal < 50000)
		{
			cout << "As the amount is greater than 10,000 so transactions fees would be 10%" << endl;

			temp = 0.1 * bal;

			bal -= temp;

			balance += bal;
		}
		else
		{
			cout << "As the amount is less than 50,000 so transactions fees would be 20%" << endl;

			temp = 0.2 * bal;

			bal -= temp;

			balance += bal;
		}

		cout << "Cash Deposited to Account after fees cutting : " << bal << endl;
		cout << "Total Amount in Account : " << balance << endl << endl;
	}

	void withdraw(long int bal)
	{
		long int temp;

		cout << "Name : " << title << endl;
		cout << "Account Number : " << accountNumber << endl;

		if (bal >= 0 && bal < 10000)
		{
			cout << "As the amount is less than 10,000 so transactions fees would be 5%" << endl;

			temp = 0.05 * bal;

			bal -= temp;

			balance -= bal;
		}
		else if (bal >= 10000 && bal < 50000)
		{
			cout << "As the amount is greater than 10,000 so transactions fees would be 10%" << endl;

			temp = 0.1 * bal;

			bal -= temp;

			balance -= bal;
		}
		else
		{
			cout << "As the amount is less than 50,000 so transactions fees would be 20%" << endl;

			temp = 0.2 * bal;

			bal -= temp;

			balance -= bal;
		}

		cout << "Cash withdrawn from Account : " << bal << endl;
		cout << "Total Amount in Account : " << balance << endl << endl;
	}
};

class SavingAccount : public BankAccount
{
	double interestRate;

public:
	void calculateInterest()
	{
		double temp;

		temp = interestRate / 100;

		temp *= balance;

		deposit(temp);
	}
};

class CheckingAccount : public BankAccount
{
	int fees;
};

int main()
{
	BankAccount b1("Abdullah Nadeem", 4549897, 50000);

	b1.deposit(5000);

	system("PAUSE");
	return 0;
}