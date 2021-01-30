/*Lab Assignment #7
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: 3.	Calculate the power of a number using recursion
Group#5
*/
#include<iostream>
using namespace std;
int calculatePower(int, int);
int main()
{
	int base, powerRaised, result;
	cout << "Enter base number: ";
	cin >> base;
	cout << "Enter power number(positive integer): ";
	cin >> powerRaised;
	result = calculatePower(base, powerRaised);
	cout << base << "^" << powerRaised << " = " << result;
	system("pause");
	return 0;
}
int calculatePower(int base, int powerRaised)
{
	if (powerRaised != 0)
		return (base*calculatePower(base, powerRaised - 1));
	else
		return 1;
}