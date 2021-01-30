/*
Program#2
Practical  Assignment # 10;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include <iostream>
#include<string>
#include <fstream>
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
	void Get_Data() {
		cout << "Name: " << name << endl;
		cout << "Telephone: " << tel << endl;
	}
	string Name()
	{
		return name;
	}
	long Tel()
	{
		return tel;
	}
};
int main() {
	Person p;
	char c;
	
	string name;
	long tel;
	int option1 = 0;
	do {
		cout << "   Menu:" << endl
			<< "(1)If you want to write extra record: " << endl
			<< "(2)Determine the telephone number of the specified person: " << endl
			<< "(3)Determine the name if telephone number is known: " << endl
			<< "(4)Delete the record: " << endl
			<< "(5)Add a record a specific position: " << endl
			<< "(6)Display the data: " << endl
			<< "(0) Exit" << endl;

		cin >> option1;
		switch (option1)
		{
		case 1:
			{
				ofstream out;
				out.open("Telephone", ios::binary | ios::app);
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
				break;
				
			}
		case 2:
		{
		ifstream ifs;
		ifs.open("Telephone", ios::binary);
		string nameP;
		cout << "Enter the name, who has a telephone number: ";
		cin >> nameP;
		while (ifs.read((char*)&p, sizeof(p)))
		{
			if (nameP == p.Name())
			{
				cout << "His or her number is " << p.Tel() << endl;

			}

		}
		ifs.close();
		break;
		
		}
		case 3:
		{
		ifstream in;
		in.open("Telephone", ios::binary);
		long tel;
		cout << "Enter the telephone of the user, you are looking for ";
		cin >> tel;
		while (in.read((char*)&p, sizeof(p)))
		{
			if (tel == p.Tel())
			{
				cout << "The owner of the telephone is " << p.Name() << endl;

			}


		}
		in.close();
		break;
		}
		case 4:
		{
		cout << "Enter the number of the record you want to delete: ";
		int a;
		cin >> a;
		ofstream of;
		of.open("temporary", ios::binary);
		ifstream ifst("Telephone", ios::binary);
		int position = a * sizeof(p);
		while (ifst.read((char*)&p, sizeof(p)))
		{
			if (ifst.tellg() != position)
			{
				of.write((char*)&p, sizeof(p));
			}
		}
		of.close();
		ifst.close();
		remove("Telephone");
		rename("temporary", "Telephone");
		break;
		}
		case 5:
		{
		ofstream op("temporary", ios::binary);
		ifstream in("Telephone", ios::binary);
		int w, v;
		cout << "Please,write a record after you want to add a new one: ";
		cin >> w;
		v = w * sizeof(p);
		while (in.read((char*)&p, sizeof(p))) {
			if (in.tellg() != v)
			{
				op.write((char*)&p, sizeof(p));
			}
			else {
				op.write((char*)&p, sizeof(p));
				cout << "Please, write name: ";
				cin >> name;
				cout << "Please, write telephone number: ";
				cin >> tel;
				p.Set_Data(name, tel);
				op.write((char*)&p, sizeof(p));
			}
		}
		op.close();
		in.close();
		remove("Telephone");
		rename("temporary", "Telephone");
		break;
		}
		case 6:
		{
		ifstream telep("Telephone", ios::binary);
		while (telep.read((char*)&p, sizeof(Person)))
		{
			p.Get_Data();
		}
		telep.close();
		break;
		}
		case 0:
		{
			cout << "See you soon!!!!" << endl;
			break;
		}
		default:
			cout << "Invalid input!!!Please try again!!!" << endl;
			break;
		}
	}while (option1 != 0);
	

	system("pause");
	return 0;
}

