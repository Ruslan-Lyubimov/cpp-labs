/*Lab Assignment #5
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: nested conditional operator, for control structure, nested loop
Task 3: Program to print pyramid1.
A
A B
A B C
A B C D
Group#5
*/
#include<iostream>
using namespace std;

int main(){
	
	for (int i = 1; i < 10; i++){

		int num = 65;
		for (int j = 1; j < i;j++){
			cout << (char)num << " ";
			num++;
		}
		cout << endl;
	}
	system("pause");
	return 0;

}