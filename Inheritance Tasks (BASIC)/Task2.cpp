#include <iostream>
using namespace std;

class Triangle
{
	double* tri_area;
public:
	Triangle()
	{
		tri_area = new double;
	}
	void triangle_area(double* l, double* w)
	{
		*tri_area = *l * *w;
		*tri_area = *tri_area / 2;
	}
	void display1()
	{
		cout << "The area of triangle is " << *tri_area << endl;
	}
};

class Square
{
	double* sq_area;
public:
	Square()
	{
		sq_area = new double;
	}
	void square_area(double* l)
	{
		*sq_area = *l * *l;
	}
	void display2()
	{
		cout << "The area of square is " << *sq_area << endl;
	}
};

class Rectangle
{
	double* rec_area;
public:
	Rectangle()
	{
		rec_area = new double;
	}
	void rectangle_area(double* l, double* w)
	{
		*rec_area = *l * *w;
	}
	void display3()
	{
		cout << "The area of rectangle is " << *rec_area << endl;
	}
};

class Circle
{
	double* cir_area;
public:
	Circle()
	{
		cir_area = new double;
	}
	void circle_area(double* r)
	{
		*cir_area = *r * *r;
		*cir_area = *cir_area * 3.14;
	}
	void display4()
	{
		cout << "The area of circle is " << *cir_area << endl;
	}
};

class Shape : public Triangle, public Square, public Rectangle, public Circle
{
	double *length, *width, *radius;
public:
	Shape()
	{
		length = new double;
		width = new double;
		radius = new double;
	}
	void setShape(double l, double w, double r)
	{
		*length = l;
		*width = w;
		*radius = r;
	}
	void area()
	{
		triangle_area(length, width);
		square_area(length);
		rectangle_area(length, width);
		circle_area(radius);
	}
	void display()
	{
		display1();
		display2();
		display3();
		display4();
	}
};

int main()
{
	double length, width, radius;

	cout << "Enter the length : ";
	cin >> length;

	cout << "Enter the width : ";
	cin >> width;

	cout << "Enter the radius : ";
	cin >> radius;

	Shape s;

	s.setShape(length, width, radius);
	s.area();
	s.display();

	system("PAUSE");
	return 0;
}