/*Lab Assignment #4
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: nested conditional operator, while control structure.
3)Program to check given number is prime number or not.
Group#5
*/
#include <iostream>
using namespace std;

int main() {
	int a, b;
	bool Prime = true;
	cout << " Enter a positive integer: ";
	cin >> a;
	for (b = 2; b <= a / 2; ++b)
	{
		if (a % b == 0)
		{
			Prime = false;
			break;
		}
	}
	if (Prime)
		cout << " This is a prime number ";
	else
		cout << " This is not a prime number ";
	cout << endl;
     system("pause");
	return 0;
}