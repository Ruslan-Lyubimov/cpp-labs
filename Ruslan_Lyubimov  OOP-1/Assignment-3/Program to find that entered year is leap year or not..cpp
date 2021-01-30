/*Lab Assignment #3
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: if-else, nested  if-else control statement
3)Program to find that entered year is leap year or not. 
Group#5
*/
#include<iostream>
using namespace std;

int main() {
	int year;
	cout << " Enter a year you want to check: ";
	cin >> year;
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				cout << " is a leap year: " << year << endl;
			else
				cout << " is not a leap year: " << year << endl;
		}
		else
			cout << " is a leap year: " << year << endl;
	}
	else
		cout << " is not a leap year:  " << year << endl;
	system("pause");
	return 0;




}
	