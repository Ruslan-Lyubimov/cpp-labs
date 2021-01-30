/*Lab Assignment #7
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: 4.Multiplication of two numbers using function overloading and demonstrate function overloading works with different numeric data types.
Group#5
*/
#include<iostream>
using namespace std;
class Multiplication {
public:
	int multiplic(int num1, int num2) {
		return num1 * num2;
	}
	int multiplic(int num1, int num2, int num3) {
		return num1 * num2 * num3;
	}
};
int main(void) {
	Multiplication obj;
	cout << obj.multiplic(20, 15) << endl;
	cout << obj.multiplic(81, 100, 10);
	cout << endl;
	system("pause");
	return 0;
}