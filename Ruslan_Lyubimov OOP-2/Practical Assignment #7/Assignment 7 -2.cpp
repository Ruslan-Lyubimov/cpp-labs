/*
Program#2
Practical  Assignment # 7;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
#include<string>
using namespace std;

class Staff
{
private:
	string code;
	string name;
public:
	Staff()
	{

	}
	Staff(string c, string n)
	{
		code = c;
		name = n;
	}

	void setdata()
	{
		cout << "Please write person's code: ";
		cin >> code;
		cout << "Please write person's name: ";
		cin >> name;
	}

	void getdata()
	{
		cout << "The code of the user is " << code << endl;
		cout << "The name of the user is " << name << endl;
	}
};

class Education
{
private:
	char high_prof_degree;
public:
	Education()
	{

	}
	Education(char high)
	{
		high_prof_degree = high;
	}
 void setdata()
	{
	 bool r = true;
	 while (r)
	 {
		 cout << "Please write teacher or officer degree:" << endl
			 << "Capital M for master degree: " << endl
			 << "Capital D for doctoral degree: " << endl
			 << "Capital P for professioanl degree: " << endl;
		 cin >> high_prof_degree;
		 if ((high_prof_degree == 77) || (high_prof_degree == 68) || (high_prof_degree == 80))
		 {
			 cout << "We found!" << endl;
			 r = false;
		 }
		 else
		 {
			 cout << "Sorry we cannot find!!!!Try again" << endl;
		 }
	 }
	}

 void getdata()
 {
	 cout << "The user's qualufication is " << high_prof_degree << endl;
 }
};

class Teacher :public Staff,public Education
{
private:
	string subject;
	int publication;
public:
	Teacher()
	{
		Staff::setdata();
		setdata();
		Education::setdata();
		Staff::getdata();
		getdata();
		Education::getdata();
	}
	Teacher(string s, int pu)
	{
		subject = s;
		publication = pu;
	}



	void setdata()
	{

		cout << "Enter the person's subject: ";
		cin >> subject;
		cout << "Enter how many book publication person did: ";
		cin >> publication;
	}

	void getdata()
	{

		cout << "Subject is " << subject << endl;
		cout << "Number book publication is " << publication << endl;
	}
};

class Officer :public Staff,public Education
{
private:
	char Grade;
public:
	Officer()
	{
		Staff::setdata();
		setdata();
		Education::setdata();
		Staff::getdata();
		getdata();
		Education::getdata();
	}
	Officer(char G)
	{
		Grade = G;
	}
	void setdata()
	{
		bool s = true;
		while (s)
		{
			cout << "Enter the grade (It must be capital A,B,C,D or F: ";
			cin >> Grade;
			if ((Grade == 65) || (Grade == 66) || (Grade == 67) || (Grade == 68) || (Grade == 70))
			{
				cout << "All is OK!!!" << endl;
				s = false;
			}
			else
			{
				cout << "Try again!!! Wrong input!!!" << endl;

			}
		}
	}

	void getdata()
	{
		cout << "User Grade is " << Grade << endl;

	}


};
class Typist :public Staff
{
private:
	double speed;
public:
	Typist()
	{

	}
	Typist(double sp)
	{
		speed = sp;
	}

	void setdata()
	{
		cout << "Write the person's speed (words per minute): ";
		cin >> speed;
	}

	void getdata()
	{
		cout << "The speed of the typist is " << speed << " words/min" << endl;
	}

};

class Regular :public Typist
{
private:
	double Monthly_Salary;
public:
	Regular()
	{
		Staff::setdata();
		Typist::setdata();
		setdata();
		Staff::getdata();
		Typist::getdata();
		getdata();

	}
	Regular(double mo)
	{
		Monthly_Salary = mo;
	}

	void setdata()
	{
		cout << "Enter the monthly salary: ";
		cin >> Monthly_Salary;
	}

	void getdata()
	{
		cout << "The monthly salary is " << Monthly_Salary << " $/month" << endl;
	}
};

class Casual :public Typist
{
private:
	double Daily_wages;
public:
	Casual()
	{
		Staff::setdata();
		Typist::setdata();
		setdata();
		Staff::getdata();
		Typist::getdata();
		getdata();
	}
	Casual(double da)
	{
		Daily_wages = da;
	}
	void setdata()
	{
		cout << "Write person's wage in one day: ";
		cin >> Daily_wages;
	}

	void getdata()
	{
		cout << "Person's wage per day is " << Daily_wages << " $/day" << endl;
	}
};






void menu()
{
	int option1 = 0;
	bool a = true;
	while (a)
	{
		cout << "Choose person's profession: " << endl
			<< "(1) Teacher: " << endl
			<< "(2) Officer: " << endl
			<< "(3) Typist: " << endl
			<< "(0) Exit: " << endl;
		cin >> option1;
		switch (option1)
		{
		case 1:
		{
			Teacher t;
			break;
		}
		case 2:
		{
			Officer f;
			break;
		}
		case 0:
		{	cout << "Good bye!" << endl;
		a = false;
		break;
		}
		case 3:
		{Typist obj2;
		int option2 = 0;
		bool b = true;
		while (b)
		{
			cout << "Which type of typist: " << endl
				<< "(1) Regular: " << endl
				<< "(2) Casual: " << endl
				<< "(0) Go back: " << endl;
			cin >> option2;
			switch (option2)
			{
			case 0:
				cout << "OK!" << endl;
				b = false;
				break;
			case 1:
			{
				Regular obj2_1;
				break;
			}
			case 2:
			{
				Casual obj2_2;
				break;
			}
			default:
			{
				cout << "Invalid option!!! Try again!" << endl;
				break;
			}

			}
		}
		}

		default:
			cout << "Wrong input!!! Try again!" << endl;
			break;
		}


	}

}

int main()
{
	menu();
	system("pause");
	return 0;
}