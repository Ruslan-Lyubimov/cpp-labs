/*Lab Assignment #4
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: nested conditional operator, while control structure.
4)Program to find sum of digit of given number.
Group#5
*/
#include<iostream>
using namespace std;

int main() {
	int x, y = 0;
	cout << "Enter the number : ";
	cin >> x;
	while (x != 0) {
		y = y + x % 10;
		x = x / 10;

	}
	cout << "\nThe sum of the digits : " << y << endl;
     system("pause");
	return 0;
}
