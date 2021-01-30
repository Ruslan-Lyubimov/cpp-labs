/*Lab Assignment #7
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: 1.Check Armstrong Number using function.
Group#5
*/
#include<iostream>
using namespace std;
bool CheckArmstrongNumber(int num);
int main(){
	int num;
	bool a;
	cout << " Enter a positive integer " << endl;
	cin >> num;
	a = CheckArmstrongNumber(num);
	if (a == true)
		cout << num << " is an Armstrong number." << endl;
	else
		cout << num << " is not an Armstrong number." << endl;
	system("pause");
	return 0;

}
bool CheckArmstrongNumber(int num){
	
	int temp, sum = 0, digit;
	bool Arm;
	temp = num;
	while (temp != 0)
	{
		digit = temp % 10;
		sum = sum + (digit*digit*digit);
		temp = temp / 10;
	}
	if (sum == num)
		Arm = true;
	else
		Arm = false;
	return Arm;
}











