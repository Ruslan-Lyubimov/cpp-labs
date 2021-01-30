/*
Lab Assignment #2
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: understanding flowchart, relational operator if-else control statement
Group#5
*/
#include <iostream>
using namespace std;
int main(){
	int num1, num2;
	cout << "Enter two integers, and I will show you the relationships they satisfy:" << endl;
	cin >> num1 >> num2;
	if (num1 == num2)
		cout << num1 << " is equal to " << num2 << endl;
	if (num1 != num2)
		cout << num1 << " is not equal to " << num2 << endl;
	if (num1 < num2)
		cout << num1 << " is less than " << num2 << endl;
	if (num1 > num2)
		cout << num1 << " is greater than " << num2 << endl;
	if (num1 <= num2)
		cout << num1 << " is less than or equal to " << num2 << endl;
	if (num1 >= num2)
		cout << num1 << " is greater than or equal to " << num2 << endl;
	system("pause");
	return 0;
}