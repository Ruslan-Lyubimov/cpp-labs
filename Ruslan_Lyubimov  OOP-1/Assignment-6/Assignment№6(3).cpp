/*Lab Assignment #6
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: 3.	WRITE C++ PROGRAM to sum the series  
	   	1/1!+4/2!+27/3!+......

Group#5
*/
#include<iostream>
#include<cmath>
using namespace std;
double Sum_Of_Series(double num)
{
	double sum = 0, a;
	double fact = 1;
	for (int i = 1; i <= num; i++)
	{
		a = pow(i, i);
		fact = fact*i;
		sum += a / fact;
	}
	return(sum);
}
int main()
{
	double n;
	cout << " Enter the value for n-th term:\n ";
	cin >> n;
	cout << " The sum of  " << n << " term is: " << Sum_Of_Series(n) << endl;
	system("pause");
	return 0;
}
