/*Lab Assignment #8
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: 1.	Write a program that lets the user perform arithmetic operations on two numbers. Your program must be menu driven, allowing the user to select the operation (+, -, *, or /) and input the numbers. Furthermore, your program must consist of following functions:
1. Function showChoice: This function shows the options to the user and explains how to enter data.
2. Function add: This function accepts two number as arguments and returns sum.
3. Function subtract: This function accepts two number as arguments and returns their difference.
4. Function multiply: This function accepts two number as arguments and returns product.
5. Function divide: This function accepts two number as arguments and returns quotient.

Group#5
*/
#include<iostream>

using namespace std;

				/*Declaration of functions*/
void showChoices();
				/*Arithmetic functions*/
float add(float, float);
float sub(float, float);
float mult(float, float);
float divide(float, float);

int main(){
	float x, y;		//declaration of two variables that will be calculated
	int choice;		//offering a choice

	do			//loop for n-times offering the function showChoice()
	{
		showChoices();
		
		cin >> choice;		//getting user's choice
		
		switch (choice)		//this switch identify the given choice
		{
		case 0:
			cout << " Enter two numbers: " << endl;
			cin >> x >> y;
			break;
		case 1:
			cout << "Sum is:" << add(x, y) << endl;
			break;
		case 2:
			cout << "Difference is: " << sub(x, y) << endl;
			break;
		case 3:
			cout << "Product is: " << mult(x, y) << endl;
			break;
		case 4:
			cout << "Quotient " << divide(x, y) << endl;
			break;
		case 5:
			cout << " Have a nice day! " << endl;
			break;
		default:
			cout << "Invalid input" << endl;
		}
	} while (choice != 5);
	
	system("pause");
	return 0;
}

					/*Functions definition*/
void  showChoices()
{

	cout << "MENU" << endl;
	cout << "0: Input two numbers: " << endl;
	cout << "1: Add " << endl;
	cout << "2: Subtract" << endl;
	cout << "3: Multiply " << endl;
	cout << "4: Divide " << endl;
	cout << "5: Exit " << endl;
	cout << "Enter your choice :";
}


float add(float a, float b)
{
	return a + b;
}
float sub(float a, float b)
{
	return a - b;
}
float mult(float a, float b)
{
	return a*b;
}
float divide(float a, float b)
{
	return a / b;
}



