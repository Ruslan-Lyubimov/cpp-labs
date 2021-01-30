
/*Lab Assignment #5
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: nested conditional operator, for control structure, nested loop

Task 4: Program to print star pyramid2.
*
* *
* * *
* * * *
*  *
* *
*

Group#5
*/
#include <iostream>
using namespace std;

int main(){
	int i = 1;
	while (i <= 4)
	{
		int k = 1;
		while (k < i)
		{
			cout << "*";
			k++;
		}
		cout << "*" << endl;
		i++;
	}
	{
		int a = 3;
		while (a >= 1)
		{
			int b = 1;
			while (b < a)
			{
				cout << "*";
				b++;
			}
			cout << "*" << endl;
			a--;
		}
	}

	system("pause");
	return 0;
}