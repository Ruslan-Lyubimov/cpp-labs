/*Lab Assignment #6
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: 2.	WRITE C++ PROGRAM to convert time to minutes using functions. 
Group#5
*/
#include<iostream>
using namespace std;
double Convertation(double hour);
int main(){
	double h;
	cout << " Enter your hours: ";
	cin >> h;
	cout << " In minutes it would be: " << Convertation(h)<< " minutes " << endl;
	system("pause");
	return 0;
}
double Convertation(double hour)
{
	double n;
	n = hour * 60;
	return n;


}

