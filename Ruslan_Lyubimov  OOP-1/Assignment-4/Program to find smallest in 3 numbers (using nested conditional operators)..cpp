/*Lab Assignment #4
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: nested conditional operator, while control structure.
1)Program to find smallest in 3 numbers (using nested conditional operators).
Group#5
*/
#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	cout << " Enter the first integer: " << endl;
	cin >> num1;
	cout << " Enter the second integer: " << endl;
	cin >> num2;
	cout << " Enter the third integer: " << endl;
	cin >> num3;
	cout << "The smallest number would be : " << (num1 < num2 ? (num1 < num3) ? num1 : num3 : (num2 < num3) ? num2 : num3) << endl;
	system("pause");
	return 0;
}