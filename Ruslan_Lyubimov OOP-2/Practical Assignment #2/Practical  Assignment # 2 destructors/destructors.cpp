/*
Practical  Assignment # 2;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include <iostream>
#include<string>
using namespace std;
class Account
{private:
	string name;
	string account_number;
	float balance;
public:
	Account()
	{
		cout << "Constructor is created!" << endl;
		cout << "Create the account(enter the name,account number,balance,):" << endl;
		cin >> name;
		cin >> account_number;
		cin >> balance;
	
	}
	~Account() {
		cout << "Your constructor was deleted!" << endl;
	}
	void Display() {
		cout << "Name: " << name << endl;
		cout << "Account number: " << account_number << endl;
		cout << "Balance: " << balance << endl;
	}
};
int main() {
	Account obj1;
	obj1.Display();
	obj1.~Account();
return 0;
}