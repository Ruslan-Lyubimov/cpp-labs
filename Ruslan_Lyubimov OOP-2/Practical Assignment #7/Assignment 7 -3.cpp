/*
Program#3
Practical  Assignment # 7;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
	string name;
	string code;
public:
	Person(){}
	Person(string n, string c)
	{
		name = n;
		code = c;
	}
		
		
		
		void setdata()
	{
		cout << "Please, write your name: ";
		cin >> name;
		cout << "Please, write your code: ";
		cin >> code;
	}

	void getdata()
	{
		cout << "Your name is " << name << endl;
		cout << "Your code is " << code << endl;
	}
};

class Account :virtual public Person
{
private:
	double pay;
public:
	Account(){}
	Account(double pa)
	{
		pay = pa;
	}
	void setAccountdata()
	{
		cout << "Please, write your salary: ";
		cin >> pay;
	}

	void getAccountdata()
	{
		cout << "Your salary is " << pay<<" $" << endl;
	}
};


class Admin : virtual public Person
{
private:
	int exp;
public:
	Admin(){}
	Admin(int e)
	{
		exp = e;
	}
	void setAdmindata()
	{
		cout << "Please, write you working experience(in years): ";
		cin >> exp;
	}
	void getAdmindata()
	{
		cout << "Your working experience is " << exp << " years" << endl;
	}
};


class Master :public Account, public Admin
{
public:
	Master()
	{
		Display();
	}
	void Display()
	{
		setdata();
		setAccountdata();
		setAdmindata();
		getdata();
		getAccountdata();
		getAdmindata();
	}
};

int main()
{
	Master m;
	system("pause");
	return 0;
}