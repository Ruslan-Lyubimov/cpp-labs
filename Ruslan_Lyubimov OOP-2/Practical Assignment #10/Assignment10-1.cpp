/*
Program#1
Practical  Assignment # 10;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Person {
private:
	string name;
	long tel;
public:
	void Set_Data(string name, long tel)
	{
		this->name = name;
		this->tel = tel;
	}
	void Get_Data()
	{
		cout << "Name: " << name << endl;
		cout << "Telephone: " << tel << endl;
	}
};


int main()
{
	Person p;
	ofstream out;
	out.open("Telephone", ios::binary | ios::app);
	string name;
	long tel;
	char c;
	cout << "Enter Y or y to add record: ";
	cin >> c;
	while ((c == 89) || (c == 121))
	{
		cout << "Please, write name: ";
		cin >> name;
		cout << "Please, write telephone number: ";
		cin >> tel;
		p.Set_Data(name, tel);
		out.write((char*)&p, sizeof(p));
		cout << "Enter Y or y to add record: ";
		cin >> c;
	}
	out.close();
	ifstream inf("Telephone");
	while (inf.read((char*)&p, sizeof(p)))
	{
		p.Get_Data();
	}
	inf.close();

	system("pause");
	return 0;
}