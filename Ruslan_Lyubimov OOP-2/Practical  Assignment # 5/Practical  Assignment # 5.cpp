/*
Practical  Assignment # 5;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
using namespace std;

class Rectangle
{
private:
	double length;
	double breadth;
public:
	void setLength(double l)
	{
		length = l;
		cout << "Enter the length of rectangular:\n";
		cin >> length;

	}
	void setBreadth(double b)
	{
		breadth = b;
		cout << "Enter the breadth of rectangular:\n";
		cin >> breadth;

	}
	double getArea();

	void operator+(Rectangle& obj)
	{
		Rectangle obj1;
		obj1.length = length + obj.length;
		obj1.breadth = breadth + obj.breadth;
		cout << "The length: " << obj1.length << endl;
		cout << "The breadth: " << obj1.breadth << endl;
		obj1.getArea();
	}
};
double Rectangle::getArea()
{
	double area;

	area = length * breadth;
	cout << "Area is: " << area << endl;
	return area;
}
class Distance
{
private:
	double km, m;
public:
	Distance() {}
	Distance(double kilometer, double meter)
	{
		this->km = kilometer;
		this->m = meter;
		cout << "Enter the value of kilometers:\n";
		cin >> km;
		cout << "Enter the value of meters:\n";
		cin >> m;
	}
	void show_distance()
	{
		cout << "The distance is: " << km * 1000 + m << " meters " << endl;

	}
	void operator==(Distance& d)
	{
		Distance temp;
		double val1, val2;
		val1 = km * 1000 + m;
		val2 = (d.km) * 1000 + d.m;
		temp.m = val1 - val2;
		/*temp.m = (km * 1000 + m) - ((d.km) * 1000 + d.m);*/
		if (temp.m == 0)
		{
			cout << "The distances are equal!\n";
		}

		else
		{
			cout << "The distances are NOT equal!\n";
			if (val1 > val2)
			{
				cout << "The 1st distance is bigger!\n";
				cout << "The difference is: " << temp.m << endl;
			}
			else if (val1 < val2)
			{
				cout << "The 2nd distance is bigger!\n";
				cout << "The difference is: " << temp.m << endl;
			}

		}
	}
};
int main()
{
	double len1 = 0.0, bre1 = 0.0;
	double len2 = 0.0, bre2 = 0.0;
	double m1 = 0, km1 = 0;
	double m2 = 0, km2 = 0;
	Rectangle obj1, obj2;
	cout << "Enter the values of 1st rectangle:\n";
	obj1.setLength(len1);
	obj1.setBreadth(bre1);
	obj1.getArea();
	cout << "Enter the values of 2nd rectangle:\n";
	obj2.setLength(len2);
	obj2.setBreadth(bre2);
	obj2.getArea();
	obj1 + obj2;
	cout << "Enter tne measurement both first and second distances" << endl;
	Distance d1(km1, m1), d2(km2, m2);
	d1.show_distance();
	d2.show_distance();
	d1 == d2;
	system("pause");
	return 0;
}