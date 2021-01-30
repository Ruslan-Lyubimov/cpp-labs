/*
Program#3
Practical  Assignment # 9;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	
	int num=0;
	
	ofstream out;
	out.open("numbers.txt");
	for (int i = 1;i <= 20;i++)
	{
		cout << "Enter " << i << " number: ";
		cin >> num;
		out << num << endl;
	}
	out.close();
	int sim, temp;
	cout << "Enter the value you want to find" << endl;
	cin >> sim;

	ifstream ifs("numbers.txt");
	string value;
	bool a = true;
	while (getline(ifs, value))
	{
		temp = stoi(value.c_str());
		if (temp == sim)
		{
			cout << "Yes, This number is exist, and it is " << sim << endl;
			a = false;
		}
	}
	if (a)
	{
		cout << "Sorry, no number matching!!!" << endl;
	}
		
	
	

	system("pause");
	return 0;
}