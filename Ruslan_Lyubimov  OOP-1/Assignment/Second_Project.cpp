
/* 
Lab Assignment #1
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: Input, output with arithmetic operators
Group#5
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int number1;
	int number2;
	int sum;
	cout << "Enter first integer:";
	cin >> number1;
	cout << "Enter second number:";
	cin >> number2;
	sum = number1 + number2;
	cout << "Sum is " << sum << endl;
	int number3;
	int number4;
	int substract;
	cout << "Enter first integer:";
	cin >> number3;
	cout << "Enter second number:";
	cin >> number4;
	substract = number3 - number4;
	cout << " Substraction is " << substract << endl;
	int number5;
	int number6;
	int product;
	cout << "Enter first integer:";
	cin >> number5;
	cout << "Enter second number:";
	cin >> number6;
	product = number5 * number6;
	cout << " Production is " << product << endl;
	int number7;
	int number8;
	int division;
	cout << "Enter first integer:";
	cin >> number7;
	cout << "Enter second integer:";
	cin >> number8;
	division = number7 / number8;
	cout << " Division is " << division << endl;
	int number9;
	int number10;
	int reminder;
	cout << "Enter first integer:";
	cin >> number9;
	cout << "Enter second integer:";
	cin >> number10;
	reminder = number9 % number10;
	cout << " Modulus is " << reminder << endl;
	system("pause");
	return 0;
}

