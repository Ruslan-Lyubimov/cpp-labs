/*Lab Assignment #10
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program:4.Write a C++ program that declare and define function name 
String_Length(char str[]) which will return number of character in string 
using pointer;  
Group#5
*/
#include<iostream>
using namespace std;

char string_length(char st[])//function declaration
{
	int i = 0;//new variables
	char c;
	char* p; //using pointer
	
	p = st;

	do
	{
		c = *(p + i);
		cout << c << endl;
		i++;
	} while (c != 's');
	
	return 0;
}

int main()
{
	char str[] = "Congratulations";//declare string
	
	cout << string_length(str);//function call
	
	system("pause");
	return 0;
}