/*Lab Assignment #7
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: 2.Write program to display Fibonacci series using recursion 
Group#5
*/
#include<iostream>
using namespace std;

int FibonacciSeries(int a){
	if ((a == 1) || (a == 0)){
		return a;
	}
	else{
		return (FibonacciSeries(a - 1) + FibonacciSeries(a - 2));
	}

}
int main(){
	int a, i = 0;
	cout << "Enter the number of terms of series: ";
	cin >> a;
	cout << " Fibonacci Series : ";
	while (i < a){
		cout << " " << FibonacciSeries(i);
		i++;
	}
	cout << endl;
	system("pause");
	return 0;
}