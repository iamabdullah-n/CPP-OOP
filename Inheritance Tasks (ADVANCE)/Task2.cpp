#include <iostream>
#include <cstring>
using namespace std;

class Person
{
	char* name;
	int age;

public:
	Person(char *n, int a)
	{
		int len = 0;

		for (len = 0; n[len] != '\0'; len++);

		name = new char[len + 1];

		for (int i = 0; n[i] != '\0'; i++)
		{
			name[i] = n[i];
		}
		name[len] = '\0';

		age = a;
	}
	void displayPerson()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
	}
};

class Employee : public Person
{
	double salary;
	int employeeId;		
public:
	static int count1;

	Employee(char *n, int a, double s, int id) : Person(n, a)
	{
		salary = s;
		employeeId = id;
		count1++;
	}

	void displayEmployee()
	{
		cout << "Salary : " << salary << endl;
		cout << "ID : " << employeeId << endl << endl;
	}
};

class BaseballPlayer : public Person
{
	double average;
	int totalRuns;

public:
	static int count2;
	
	BaseballPlayer(char *n, int a, double avg, int runs) : Person(n, a)
	{
		average = avg;
		totalRuns = runs;
		count2++;
	}

	void displayPlayer()
	{
		cout << "Average Run Rate : " << average << endl;
		cout << "Total Runs : " << totalRuns << endl << endl;
	}
};

int Employee::count1 = 0;
int BaseballPlayer::count2 = 0;

int main()
{
	BaseballPlayer p1("Abdullah Nadeem", 20, 150.23, 1200);
	p1.displayPerson();
	p1.displayPlayer();

	Employee e1("Abdul Naffey", 21, 50000, 516);
	e1.displayPerson();
	e1.displayEmployee();

	cout << "There are total " << e1.count1 << " Employees" << endl;
	cout << "There are total " << p1.count2 << " Baseball Players" << endl;

	system("PAUSE");
	return 0;
}