/*
Program#1
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

	void get_data()
	{
		cout << "Please, write the first (side/base): ";
		cin >> side1;
		cout << "Please, write the second (side/height): ";
		cin >> side2;
	}


	virtual void display_area()
	{

	}
};

class Triangle :public Shape
{

public:
	void display_area()
	{
		cout << "The base of Triangle is " << side1 << endl;
		cout << "The height of Triangle is " << side2 << endl;
		cout << "Area of Triangle =  " << 0.5 * side1 * side2<<endl;
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

int main()
{
	Shape* s;
	int option1 = 0;
	bool b = true;
	while (b)
	{
		cout << "           Please, choose the option " << endl
			<< "(1) Find the area of Triangle:" << endl
			<< "(2) Find the area of Rectangle:" << endl
			<< "(0) For Exit" << endl;
		cin >> option1;
		switch (option1)
		{
		case 1:
		{
			Triangle t;
			
			s = &t;
			s->get_data();
			s->display_area();
			break;
		}
		case 2:
		{
			Rectangle r;
			
			s = &r;
			s->get_data();
			s->display_area();
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














