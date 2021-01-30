/*Lab Assignment #4
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: nested conditional operator, while control structure.
1)Program to display odd or even number from 1 to 10 numbers. 
Group#5
*/
#include <iostream>
using namespace std;

int main(){
	int number;
	int min, max;
	cout << " Enter the minimum range: ";
	cin >> min;
	cout << " Enter the maximum range: ";
	cin >> max;
	cout << " Odd numbers is given range are: ";
	for (number = min; number <= max; number++)
	if (number % 2 != 0)
		cout << number << ""; 
	cout << " \n Even numbers is given range are: ";
	for (number = min; number <= max; number++)
	if (number % 2 == 0)
		cout << number << "";
	cout << endl;
		system("pause");
	return 0;
}