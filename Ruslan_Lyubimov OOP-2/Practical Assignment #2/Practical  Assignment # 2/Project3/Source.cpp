/*
Practical  Assignment # 2;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
#include<string>
#include"Triangle.h"
#include"Header.h";
using namespace std;

class Records {
private:
	string name;
	float salary;
	string dataBirth;
public:
	Records() {
		name = "BobAka";
		salary = 8456.23;
		dataBirth = "26/04/2000";
	}
	Records(string theName, float theSalary, string thedataBirth) {
		name = theName;
		salary = theSalary;
		dataBirth = thedataBirth;
	}

	/*Methds to alter personal details*/
	void setName() {
		cout << "Enter your name: ";
		cin >> name;
	}
	string getName() {
		return name;
	}
	void setSalary() {
		cout << "Enter your salary: ";
		cin >> salary;
	}
	float getSalary() {
		return salary;
	}
	void setBirth() {
		cout << "Enter your data of birth: ";
		cin >> dataBirth;
	}
	string getBirth() {
		return dataBirth;
	}
};

int main() {
	Records ob1("Ruslan", 4566.23, "2003/12/26"), * ob2;
	ob2 = &ob1;

	Triangle t1(25, 25);
	Person p1, p2("Bob"), p3("NotBob", 25);

	int option1 = 0, option2 = 0, option3 = 0, option4 = 0;
	bool b1 = true, b2 = true, b3 = true, b4 = true;

	while (b1)
	{
		cout << "Choose the program you want to run up: " << endl;
		cout << "(1) Records" << endl;
		cout << "(2) Triangle" << endl;
		cout << "(3) Person" << endl;
		cin >> option1;
		switch (option1)
		{
		case 1:
			while (b2)
			{
				cout << "(1) call by dot" << endl;
				cout << "(2) call by arrow" << endl;
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Yout name is " << ob1.getName() << endl;
					cout << "Yout salary is " << ob1.getSalary() << endl;
					cout << "Yout name data of birth is " << ob1.getBirth() << endl;
					break;
				case 2:
					ob2->setName();
					ob2->setSalary();
					ob2->setBirth();

					cout << "Yout name is " << ob2->getName() << endl;
					cout << "Yout salary is " << ob2->getSalary() << endl;
					cout << "Yout name data of birth is " << ob2->getBirth() << endl;
					break;
				default:
					cout << "Good bye!" << endl;
					b2 = false;
					break;
				}
			}
			break;
		case 2:
			while (b3)
			{
				cout << "(1)Calculate by default: " << endl;
				cout << "(2)Calculate by insert: " << endl;
				cin >> option3;
				switch (option3)
				{
				case 1:
					cout << "This is your area: " << t1.getArea() << endl;
					cout << "This is your perimeter: " << t1.getPerimeter() << endl;
					break;
			
				default:
					t1.setHeight(12.5);
					t1.setHeight(12.5);
					cout << "This is your area: " << t1.getArea() << endl;
					cout << "This is your perimeter: " << t1.getPerimeter() << endl;
					cout << "Good bye!" << endl;
					b3 = false;
					break;
				}
			}
			break;
		case 3:
			while (b4)
			{
				cout << "(1) No parametor" << endl;
				cout << "(2) One parametors" << endl;
				cout << "(3) Two parametors" << endl;
				cin >> option4;
				switch (option4)
				{
				case 1:
					p1.setName();
					p1.setAge();
					cout << "This is your name: " << p1.getName() << endl;
					cout << "This is your age: " << p1.getAge() << endl;
					break;
				case 2:
					p2.setAge();
					cout << "This is your name: " << p2.getName() << endl;
					cout << "This is your age: " << p2.getAge() << endl;
					break;
				case 3:
					cout << "This is your name: " << p3.getName() << endl;
					cout << "This is your age: " << p3.getAge() << endl;
					break;
				default:
					break;
				}
			}
			break;
		default:
			cout << "Good bye!" << endl;
			b1 = false;
			break;
		}
	}
}
