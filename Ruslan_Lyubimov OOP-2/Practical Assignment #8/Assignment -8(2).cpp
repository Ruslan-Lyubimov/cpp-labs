/*
Program#2
Practical  Assignment # 8;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
#include<string>
using namespace std;
class Shape
{
protected:
	double side1, side2;
public:

	void get_data(double side1,double side2)
	{
		this->side1 = side1;
		this->side2 = side2;
	}


	virtual void display_area() = 0;
	
};

class Triangle :public Shape
{

public:
	void display_area()
	{
		cout << "The base of Triangle is " << side1 << endl;
		cout << "The height of Triangle is " << side2 << endl;
		cout << "Area of Triangle =  " << 0.5 * side1 * side2 << endl;
	}
};

class Rectangle :public Shape
{
public:
	void display_area()
	{
		cout << "The first side of Rectangle is " << side1 << endl;
		cout << "The second side of Rectangle is " << side2 << endl;
		cout << "Area of Rectangle =  " << side1 * side2 << endl;
	}
};

class Circle :public Shape
{
public:
	void display_area()
	{
		cout << "The radius of Circle is " << side1 << endl;
		cout << "Area of Circle = " << (3.14 * side1 * side1) << endl;
	}
};

int main()
{
	double side1, side2;
	int option1 = 0;
	bool b = true;
	while (b)
	{
		cout << "           Please, choose the option " << endl
			<< "(1) Find the area of Triangle:" << endl
			<< "(2) Find the area of Rectangle:" << endl
			 <<"(3) Find the area of The Circle:"<<endl
			<< "(0) For Exit" << endl;
		cin >> option1;
		switch (option1)
		{
		case 1:
		{
			Triangle t;
			cout << "Please, enter the base of the Triangle: ";
			cin >> side1;
			cout << "Please, enter the height of the Triangle: ";
			cin >> side2;
			t.get_data(side1, side2);
			t.display_area();

			
			break;
		}
		case 2:
		{
			Rectangle r;
			cout << "Please, enter the first side of the Rectangle: ";
			cin >> side1;
			cout << "Please, enter the second side of the Rectangle: ";
			cin >> side2;
			r.get_data(side1, side2);
			r.display_area();
			break;
		}
		case 3:
		{
			Circle c;
			cout << "Enter the radius of a Circle:" << endl;		
			cin >> side1;
			c.get_data(side1, side1);
			c.display_area();
			break;
		}
		case 0:
			cout << "See you soon!!!" << endl;
			b = false;
			break;


		default:
			cout << "Invalid input!!! Try again!" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}