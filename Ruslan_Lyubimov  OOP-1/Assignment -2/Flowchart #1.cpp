/*
Lab Assignment #2
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: understanding flowchart, relational operator if-else control statement(flowchart1/2)
Group#5
*/
#include <iostream>
using namespace std;
int main(){
	int part_number;
	float price;
	cout << " Enter the part number " << endl;
	cin >> part_number;
	cout << " Enter price " << endl;
	cin >> price;
	if (part_number == 203)
	{
		price = price*1.1;
		cout << " Price increases ";

	}
	cout << " part number " << part_number;
	cout << " price is " << price << endl;
	system("pause");
	return 0;
}