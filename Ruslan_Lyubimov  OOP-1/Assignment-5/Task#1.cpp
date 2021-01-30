
/*Lab Assignment #5
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: nested conditional operator, for control structure, nested loop
Task 1:
A company insures its drivers in the following cases:
1. If the driver is married.
2. If the driver is unmarried, male & above 30 years of age.
3. If the driver is unmarried, female & above 25 years of age.

In all other cases the driver is not insured.

If the marital status, sex and age of driver are inputs, write a program to determine whether the driver is to be insured or not.

Group#5
*/
#include <iostream>
using namespace std;

int main(){
	int age;
	char gender, status;
	cout << " Are you male or female ? \t (M=Male, F=Female) ";
	cin >> gender;
	cout << " How old are you? " << endl;
	cin >> age;
	cout << "Are you married or not?\t (Y=yes,I am married, N=no,I am single)" << endl;
	cin >> status;
	if (status == 89)
		cout << " You can take insurance! " << endl;
	else{
		if ((gender == 77) && (age >= 30)&&(status==78))
			cout << " You can take insurance! " << endl;
		else if ((gender == 70) && (age >= 25)&&(status==78))
			cout << " You can take insurance! " << endl;
		else cout << "Sorry,you can not take insurance" << endl;

	}
    system("pause");
	return 0;
}