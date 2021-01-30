/*
Practical  Assignment # 1;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
#include<string>
#include "Employee.h";
using namespace std;

class Student
{
private:
	string Student_ID;
	string Student_Name;
	double OOP2_Score;
	double Maths_Score;
	double English_Score;
	double Total_Score;
	double C_Total();
public:
	void take_data();
	void show_data();
};

void Student::take_data()
{
	cout << "Please enter your ID:";
	cin >> Student_ID;
	cout << "Please enter your Name:";
	cin >> Student_Name;
	cout << "Please enter your score of OOP2: ";
	cin >> OOP2_Score;
	cout << "Please enter your score of Math: ";
	cin >> Maths_Score;
	cout << "Please enter your score of English: ";
	cin >> English_Score;
}

double Student::C_Total()
{
	Total_Score = OOP2_Score + Maths_Score + English_Score;
	return Total_Score;
}


void Student::show_data()
{
	cout << " Your ID is " << Student_ID << endl;
	cout << " Your Name is " << Student_Name << endl;
	cout << " Your OOP2 Score is " << OOP2_Score << endl;
	cout << " Your Math Score is " << Maths_Score << endl;
	cout << " Your English Score is " << English_Score << endl;
	cout << " Your Total Score is " << C_Total() << endl;
}


int main()
{
	int option1=0;
	bool b1 = true;
	Student n1;
	while (b1)
	{
		cout << "Choose the program you want to run up: " << endl;
		cout << "(1) Student " << endl;
		cout << "(2) Employee" << endl;
		cin >> option1;
		switch (option1)
		{
		case 1:
		
			n1.take_data();
			n1.show_data();
			break;
		case 2:
			menu();
			break;
		default:
			cout << "Good bye!" << endl;
			b1 = false;
			break;
		}
	}



	
	system("pause");
	return 0;
}