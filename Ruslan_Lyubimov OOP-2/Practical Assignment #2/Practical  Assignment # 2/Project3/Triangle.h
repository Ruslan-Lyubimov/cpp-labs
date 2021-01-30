/*
Practical  Assignment # 2;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
#include<string>
using namespace std;

class Triangle {
private:
	double height;
	double width;

public:
	Triangle(double theHeight, double theWidth) {
		height = theHeight;
		width = theWidth;
	}
	~Triangle() {
		cout << "Thank you! Good bye!!!";
	}
	void setHeight(double theHeight) {
		height = theHeight;
	}
	double getHeight() {
		return height;
	}
	void setWidth(double theWidth) {
		width = theWidth;
	}
	double getWidth() {
		return width;
	}
	double getArea() {
		return (0.5 * width * height);
	}
	double getPerimeter() {
		return 3 * width;
	}
};

