/*Lab Assignment #7
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: 5.Write function template for multiplication of two numbers and demonstrate function templates works with different numeric data types.
Group#5
*/
#include <iostream>
using namespace std;

int	Multiplication(int x, int y)
{
	return x * y;
}
float Multiplication(float x, float y)
{
	return x * y;
}
double Multiplication(double x, double y)
{
	return x * y;
}

int main()
{
	cout << " Multiplication : " << Multiplication(2, 9) << endl;
	cout << " Multiplication : " << Multiplication(4.0, 3.2) << endl;
	cout << " Multiplication : " << Multiplication(3.1415, 5.232123) << endl;
	system("pause");
	return 0;
}