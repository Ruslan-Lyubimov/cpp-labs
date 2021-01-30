/*Lab Assignment #2
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: understanding flowchart, relational operator if-else control statement(flowchart2/2)
Group#5
*/
#include <iostream>
using namespace std;
int main(){
	float sales, commission;
	cout << "Enter the sales " << endl;
	cin >> sales;
	if (sales > 1500)
		commission = sales * 0.02;
	else
		commission = sales * 0.01;
	cout << " commission is " << commission << endl;
	system("pause");
	return 0;

}