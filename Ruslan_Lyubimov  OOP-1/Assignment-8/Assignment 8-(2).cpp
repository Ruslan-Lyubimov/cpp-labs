/*Lab Assignment #8
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: 
2.	Write a function called zero_small() that has two integer arguments being passed by reference and sets the smaller of the two numbers to 0. Write the main program to access the function.
Group#5
*/
#include<iostream>

using namespace std;

void zero_small(int&, int&);		//declaration of the function

int main(){
	int x, y;		//declaration of two variables to compare them

	cout << " Enter your first number: ";		//variables assignment
	cin >> x;
	cout << " Enter your second number: ";
	cin >> y;

	zero_small(x, y);		//function call

	cout << " First number is: " << x << endl;		//outputing the final result after converting
	cout << " Second number is: " << y << endl;

	system("pause");
	return 0;
}
void zero_small(int &a, int &b)		//definition of the function, that converts the smallest number into zero
{
	if (a < b)
		a = 0;
	else
		b = 0;
}



