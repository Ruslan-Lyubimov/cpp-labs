/*
Program#2
Practical  Assignment # 6;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
#include<string>
using namespace std;

class Account
{
private:
	string name;
	string acc_number;
	char type_of_acc;
public:
	void setdata()
	{
		int option = 0;
		bool b1 = true;
		cout << "User name: ";
		cin >> name;
		cout << "Account number: ";
		cin >> acc_number;
		while (b1)
        {
		cout << "Type of Account (capital S= For Saving/capital C = For Current) ";
		cin >> type_of_acc;
		if ((type_of_acc == 83) || (type_of_acc == 67))
			{
				cout << "Yes, we have this kind of account!" << endl;
				b1 = false;
			}
			else
			{
				cout << "Sorry! We have not this kind of account!" << endl;

			}
		}
	}
	void getdata()
	{
		cout << "Name of user: " << name << endl;
		cout << "Account number is: " << acc_number << endl;
		cout << "Type of account: " << type_of_acc << endl;
	}
	char getacc_type()
	{
		return type_of_acc;
	}
};

class CURR_ACCT :public Account
{
private:
	double amount=0;
	double penalty=2;
public:
	void 
	Deposit()
	{
		double extra_money;
		cout << "Please, deposit some amount of money: ";
		cin >> extra_money;
		amount = amount + extra_money;
		Penalty();

	}
	

	void Balance()
	{
		
		cout << "Your Balance is " << amount<< " $" << endl;
		
	}

	

	void Withdraw()
	{
		double wid=0;
		cout << "Enter the amount of money you want to withdraw: ";
		cin >> wid;
		if (amount >= wid)
		{
			amount = amount - wid;
			CURR_ACCT::Penalty();
		}
		else
		{
			cout << "The amount of money is bigger than you want to get!!!" << endl
				<< "Thank you!!!" << endl;
		}
	}
	void Penalty()
	{
		if (amount < 100)
		{
			cout << "You got a penalty -2$: "<<endl;
			amount = amount - penalty;
			cout << "Your Balance is now: " << amount << endl;
		}
		else
		{
			cout << "Everything is OK!" << endl;
		}
	}

	
	
};

class SAV_ACCT :public Account
{
private:
	double amount=0;
public:
	void Deposit()
	{

		double addition_money;
		cout << "Please, deposit some amount of money: ";
		cin >> addition_money;
		amount = amount + addition_money;
	}
	void Balance()
	{
		cout << "Your Balance is " << amount << " $" << endl;
	}

	void Compute_Interest()
	{
		double y;
		cout << "How many years do you want to hold your deposit here(4% annual)"<<endl;
		cin >> y;
		amount = amount + (amount / 100 * y * 4);

	}

	void Withdraw()
	{
		double wi = 0;
		cout << "Enter the amount of money you want to withdraw: ";
		cin >> wi;
		if (amount >= wi)
		{
			amount = amount - wi;
		}
		else
		{
			cout << "The amount of money is bigger than you want to get!!!" << endl
				<< "Thank you!!!" << endl;
		}
	}


	



};






int main()
{
	Account a;
	CURR_ACCT c;
	SAV_ACCT s;
	int option1 = 0;
	bool t1 = true;
	cout << "Hallo user! Let's write some details about you! " << endl;
	a.setdata();
	a.getdata();
	while (t1)
	{
		if (a.getacc_type() == 67)
		{
			cout << "        Menu        " << endl
				<< "(1) Deposit option: " << endl
				<< "(2) Checking balance: " << endl
				<< "(3) Withdraw: " << endl
				<< "Any other number is exit!" << endl;
			cin >> option1;
			switch (option1)
			{
			case 1:
				c.Deposit();
				break;
			case 2:
				c.Balance();
				break;
			case 3:
				c.Withdraw();
				break;
			default:
				cout << "See you soon!" << endl;
				t1 = false;
				break;
			}
		}
		else if (a.getacc_type() == 83)
		{
			cout << "        Menu        " << endl
				<< "(1) Deposit option: " << endl
				<< "(2) Checking balance: " << endl
				<< "(3) Annual checking:" << endl
				<< "(4) Withdraw: " << endl
				<< "Any other number is exit!" << endl;
			cin >> option1;
			switch (option1)
			{
			case 1:
				s.Deposit();
				break;
			case 2:
				s.Balance();
				break;
			case 3:
				s.Compute_Interest();
				break;
			case 4:
				s.Withdraw();
				break;
			default:
				cout << "See you soon!" << endl;
				t1 = false;
				break;
			}
		}
		
	}
	system("pause");
	return 0;
}