/*Lab Assignment #5
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: nested conditional operator, for control structure, nested loop
2)Write a menu driven program which has following options:
0: input two numbers
1 Addition of two numbers
2 Subtraction of two numbers
3 Multiplication of two numbers
4: division of two numbers
5 Exit
Make use of switch statement.

Group#5
*/
#include <iostream>
using namespace std;

int main(){
	int num1=0, num2=0;
	int choice;
	do{
		cout << " 0 : Input two integers " << endl;
		cout << " 1: Addition of two integers " << endl;
		cout << " 2: Substraction of two integers " << endl;
		cout << " 3: Multiplication of two integers " << endl;
		cout << " 4: Division of two integers " << endl;
		cout << " 5: Exit Application " << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			cout << "\n Please enter first integer: ";
			cin >> num1;
			cout << "\n Please enter second integer: ";
			cin >> num2;
			break;
		case 1:
			cout << " \n Addition is " << num1 + num2 << endl;
			break;
		case 2:
			cout << "\n Substraction is " << num1 - num2 << endl;
			break;
		case 3:
			cout << "\n Multiplication is " << num1*num2 << endl;
			break;
		case 4:
			cout << "\n Division is " << num1 / num2 << endl;
			break;
		case 5:
			cout << "\n Good bye " << endl;

		default:
			cout << "\n See you soon! " << endl;

			break;
		}
		}while (choice != 5);
			system("pause");
		return 0;





	}




