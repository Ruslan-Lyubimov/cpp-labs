/*Lab Assignment #3
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: if-else, nested  if-else control statement
1)Program to convert temperature from degree centigrade to Fahrenheit
Group#5
*/
#include <iostream>
using namespace std;

int main(){
	float fahrenheit, celsius;
	cout << " Enter the temperature in Celsius: ";
	cin >> celsius;
	fahrenheit = (celsius*9.0) / 5.0 + 32;
	cout << " The temperature in Celsius: " << celsius << endl;
	cout << " The temperature in Fahrenheit: " << fahrenheit << endl;
	system("pause");
	return 0;


}