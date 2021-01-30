/*Lab Assignment #6
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: 1.	WRITE C++ PROGRAM to calculate area of a RECTANGLE using functions. 
Group#5
*/
#include<iostream>
using namespace std;
double AreaOfRectangle(double h, double w);
int main(){
	double height, width;
	cout << " Enter the height: ";
	cin >> height;
	cout << " Enter the width: ";
	cin >> width;
	cout << " Area of rectangle = " << AreaOfRectangle(height, width) << endl;
	system("pause");
	return 0;
}
double AreaOfRectangle(double h, double w)
{
	double area;
	area = h*w;
	return area;
}
