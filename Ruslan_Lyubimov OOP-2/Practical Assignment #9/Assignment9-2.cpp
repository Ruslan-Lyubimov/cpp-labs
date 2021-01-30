/*
Program#2
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
	string name;
	long num;
	ofstream out;
	out.open("Phone-book.txt",ios::app);
	cout << "Enter the name: ";
	cin >> name;
	out << name << "\t";
	cout << "Enter telephone number: ";
	cin >> num;
	out << num << endl;
	out.close();
	ifstream ifs;
	ifs.open("Phone-book.txt");
	while (ifs)
	{
		getline(ifs, name);
		cout << name << endl;
	}
	ifs.close();

	system("pause");
	return 0;
}





































































