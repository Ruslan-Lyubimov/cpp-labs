/*
Practical  Assignment # 1;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
	string ID;
	string Name;
	int No_of_Hours_Work;
	int Rate_per_Hour;
public:
	void set_ID();
	void get_ID();
	void set_Name();
	void get_Name();
	int set_Hours();
	int get_Hours();
	int set_RatePerHour();
	int get_RatePerHour();
	double Total();
};

void Employee::set_ID()
{
	cout << "Please enter your ID: ";
	cin >> ID;
}

void Employee::get_ID()
{
	cout << "Your ID is " << ID << endl;
}

void Employee::set_Name()
{
	cout << "Please enter your Name: ";
	cin >> Name;
}

void Employee::get_Name()
{
	cout << "Your Name is " << Name << endl;
}

int Employee::set_Hours()
{
	cout << "Haw many hours did you work: ";
	cin >> No_of_Hours_Work;
	return 0;
}

int Employee::get_Hours()
{
	cout << "Your Hours are " << No_of_Hours_Work << endl;
	return 0;
}

int Employee::set_RatePerHour()
{
	cout << "How much do you earn per hour of work: ";
	cin >> Rate_per_Hour;
	return 0;
}

int Employee::get_RatePerHour()
{
	cout << "Your Rate per Hour " << Rate_per_Hour << endl;
	return 0;
}

double Employee::Total()
{
	cout << "Total: " << No_of_Hours_Work * Rate_per_Hour << endl;
	return 0.0;
}

void menu() {
	Employee a1;
	int c, b;
	cout << "1.Enter the data" << endl;
	cout << "2.Get the data" << endl;
	cin >> c;
	switch (c) {
	case 1:
		system("cls");
		a1.set_ID();
		a1.set_Name();
		a1.set_Hours();
		a1.set_RatePerHour();
		cout << "Press 0 to quit" << endl;
		cin >> b;
		switch (b) {
		case 0:menu();
		}
	case 2:
		system("cls");
		a1.get_ID();
		a1.get_Name();
		a1.get_Hours();
		a1.get_RatePerHour();
		a1.Total();
	}
}

