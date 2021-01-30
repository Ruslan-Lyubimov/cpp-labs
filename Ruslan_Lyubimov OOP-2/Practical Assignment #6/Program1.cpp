/*
Program#1;
Practical  Assignment # 6;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
#include<string>
using namespace std;

class Publication
{
private:
	string title;
	float price;
public:
	void setdata()
	{
		cout << "Enter the value for title: ";
		cin >> title;
		cout << "Enter the value for price: ";
		cin >> price;
	}

	void getdata()
	{
		cout << "Title is " << title << endl;
		cout << "price are " << price << endl;
	}



};

class Book :public Publication
{
private:
	int page_count;
public:
	void setdata()
	{
		Publication::setdata();
		cout << "Enter the number of pages: ";
		cin >> page_count;
	}

	void getdata()
	{
		Publication::getdata();
		cout << "Pages " << page_count << endl;
	}

};

class Tape :public Publication
{
private:
	float playing_time;
public:
	void setdata()
	{
		Publication::setdata();
		cout << "Enter playing time: ";
		cin >> playing_time;
	}

	void getdata()
	{
		Publication::getdata();
		cout << "Playing time: " << playing_time << endl;
	}
};


int main()
{
	Book b;
	Tape t;
	int option = 0;
	bool b1 = true;
	while (b1)
	{
		cout << " Enter your choice:" << endl;
		cout << "1. For Book Details:" << endl
			<< "2. For Tape Details:" << endl
			<< "0. To Exit:" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			b.setdata();
			b.getdata();
			break;
		case 2:
			t.setdata();
			t.getdata();
			break;



		case 0:
			cout << "Thank you! Good bye!" << endl;
			b1 = false;
			break;
		default:
			cout << "Invalid input! Try again!" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}