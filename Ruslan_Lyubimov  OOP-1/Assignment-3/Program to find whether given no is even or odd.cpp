/*Lab Assignment #3
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: if-else, nested  if-else control statement
4)Program to find whether given no is even or odd
Group#5
*/
#include <iostream>
using namespace std;

int main()
{
	int number1;
	cout << "Enter an integer: " << endl;
	cin >> number1;
	if (number1 % 2 == 0)
		cout << number1 << " is even" << endl;
	else
		cout << number1 << " is odd " << endl;
	system("pause");
	return 0;
}