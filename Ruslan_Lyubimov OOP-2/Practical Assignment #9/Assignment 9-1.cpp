/*
Program#1
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
	int TOTAL=0;
	string op;
	int p;
	ofstream out;
	out.open("one.txt" );
	
	for (int num = 1;num <= 20;num++)
		{
			if (num % 2 == 0)
			{
				out << num << endl;
				
			}
	    }
		out.close();
		ofstream fs;
		fs.open("two.txt");
		
		for (int a = 5;a <= 50;a++)
		{
			if (a % 5 == 0)
			{
				fs << a << endl;
		
			}
		}
		fs.close();
		ifstream ifs;
		ifs.open("one.txt");
		while (getline(ifs, op))
		{
			p = stoi(op.c_str());
			cout << p << endl;
			TOTAL += p;
		}
		ifs.close();
		ifstream in;
		in.open("two.txt");
		while (getline(in, op))
		{
			p = stoi(op.c_str());
			cout << p << endl;
			TOTAL += p;
		}


		ofstream of;
		of.open("total.txt");
		cout << "Total is " << TOTAL << endl;
		of << TOTAL << endl;
		of.close();


	system("pause");
	return 0;
}























