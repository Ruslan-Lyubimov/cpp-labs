/*Lab Assignment #10
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program:2. Write a C++ program that declare and define function name swap with 
two parameter which will interchange value of parameter using pointer 
(call by reference). 


Group#5
*/
#include<iostream>
using namespace std;

void swap(double *a, double *b)//function declaration
{
	double t;
	t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	double i = 10, j = 4.7; // declare variables
	
	cout << "\n before swap " << endl;
	cout << "\n i= " << i << "\t j= " << j << endl;
	
	swap(&i, &j);//function call
	
	cout << "\n after swap " << endl;
	cout << "\n i= " << i << " \t j= " << j << endl;



	system("pause");
	return 0;
}