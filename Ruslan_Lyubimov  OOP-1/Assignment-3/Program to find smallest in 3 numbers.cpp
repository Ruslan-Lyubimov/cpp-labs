/*Lab Assignment #3
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: if-else, nested  if-else control statement
2)Program to find smallest in 3 numbers
Group#5
*/
#include <iostream>
using namespace std;

int main(){
	int number1, number2, number3;
	cout << " \n Please enter first integer value: ";
	cin >> number1;
	cout << " \n Please enter second integer value: ";
	cin >> number2;
	cout << " \n Please enter third integer value: ";
	cin >> number3;
	if (number1 < number2)
	{
		if (number1 < number3)
			cout << " \n Minimum number is " << number1 << endl;
		else
			cout << " \n Minimum number is " << number3 << endl;
	}
	else {
		if (number2<number3)
			cout << " \n Minimum number is " << number2 << endl;
		else
			cout << " \n Minimum number is " << number3 << endl;
	}
	system("pause");
	return 0;

}