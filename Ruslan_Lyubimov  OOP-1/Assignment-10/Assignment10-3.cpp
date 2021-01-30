/*Lab Assignment #10
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program:3. Write a C++ program to read and display array of integer of size. (Special 
note to traverse array element your pointer not index variable) 
Group#5
*/
#include<iostream>
using namespace std;

int main()
{
	int ar[4];//new variables
	int counter = 1;
	
	int*p;//using pointer
	p = ar;
	
	cout << " Enter the first element of array\n ";
	
	cin >> ar[0];
	
	cout << " Enter the second element of array\n ";
	
	cin >> ar[1];
	
	cout << " Enter the third element of array\n ";
	
	cin >> ar[2];
	
	cout << " Enter the fourth element of array\n ";
	
	cin >> ar[3];
	
	for (int i = 0; i < 4; i++)
	{
		cout << *(p + i) << endl;
		counter++;
	}
	
	cout << "The size of array=" << sizeof(ar) << endl;//using sizeof()

	system("pause");
	return 0;

}