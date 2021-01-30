/*
Project OOP2
Book-Shop
Name:Lyubimov Ruslan
ID:U1910163
sec:005
Name:Ergashev Akmal
ID:U1910165
sec:005
*/
#include <iostream>
#include<string>
#include <fstream>
#include<Windows.h>

using namespace std;
class Book_Shop {
protected:
	char name[10];
	char author[10];
	int num = 0;
	double cost = 0.0;

public:
	void Set_Data()
	{
		cout << "Name of the book: ";
		cin >> name;
		cout << "Name of the author: ";
		cin >> author;
		cout << "Number of pages: ";
		cin >> num;
		while (num < 0) {
			cout << "try again negative number of pages could not be taken!" << endl;
			cin >> num;
		}
		cout << "Set the cost of the book: ";
		cin >> cost;
		while (cost < 0) {
			cout << "try again negative cost could not be taken!" << endl;
			cin >> cost;
		}

	}
	void Get_Data()
	{



		cout << "\nName of the book: " << name << endl;
		cout << "Name of the author: " << author << endl;
		cout << "Number of pages: " << num << endl;
		cout << "The cost of the book is " << cost << " $" << endl;

	}
	char* Name()
	{
		return name;
	}
	int Num()
	{
		return num;
	}

	char* Author()
	{
		return author;
	}
	double Cost()
	{
		return cost;
	}

};

class Price :public Book_Shop
{


public:


	void About_us()
	{

		int ch = 0;
		system("cls");
		//Short information about developers of this project
		cout << "\t\tErgashev Akmal   (ID:U1910165)\n";
		cout << "\t\tLyubimov Ruslan  (ID:U1910163)\n";
		cout << "Please enter 1 to go to main menu\n";//succesfull finishing and going back
		cin >> ch;
		if (ch != 1) {
			do {
				system("color 4F");
				cout << "Please follow the instructions to make the program work correctly ";
				cin >> ch;
			} while (ch != 1);
		}
		system("cls");
		system("color 0F");
	}
};

void Col(int bg, int txt) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((bg << 4) | txt));
}


int main()
{
	system("color ff");

	Book_Shop b;
	char c;
	Price p;

	int option = 0;
	int choice = 0;
	cout << "\t\t--------WELCOME TO THE BOOKSHOP--------\t\t\n\n\n";
	do {
		Col(9, 0);

		cout << "You are seller, Please write list of books, you want to add: \n" << endl;
		cout << "\nPress 1 to continue: \n" << endl;
		cout << "\nPress 2 to become a customer: \n" << endl;
		cout << "\nPress 3 to see the list of available books: \n" << endl;
		cout << "\nPress 4 to modify the book information: \n" << endl;
		cout << "\nPress 5 to see information about creators: \n\n";
		cout << "\nPress 6 to exit: \n" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
		{
			Col(0, 4);
			system("cls");

			ofstream out;
			out.open("Book-Shop", ios::binary | ios::app);
			cout << "\t\tYou are a seller, please write the books you want add: \t\t\n" << endl;
			cout << "Enter Y or y to add a book:\n";
			cout << "If you want to go back to main menu press any key(aside from Y and y)\n";
			cin >> c;
			while ((c == 89) || (c == 121))
			{


				b.Set_Data();
				out.write((char*)&b, sizeof(b));
				cout << "Enter Y or y to add record: ";
				cin >> c;
			}
			system("cls");
			out.close();
			break;
		}

		case 2:
		{ system("cls");

		do {
			Col(7, 0);
			cout << "\t\tNow you are a customer:" << endl
				<< "\n\nPlease select an option:" << endl;
			cout << "\n(1) To find the author by name of the book and by number of pages:"
				<< "\n\n\n(2) To find the name of the book by it's author and by number of pages:"
				<< "\n\n\n(3) To find number of pages of the book by it's author and by it's name:"
				<< "\n\n\n(4) To rent some book:"
				<< "\n\n\n(5) To buy the book:";
			cout << "\n\n\n(0) To go to main menu!\n" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
			{ system("cls");
			ifstream in;
			in.open("Book-Shop", ios::binary);

			string name1;
			cout << "Please, enter the name of some book, which we have in our BOOK-Shop:\n";
			cin >> name1;
			int num2;
			cout << "Please,enter the number of pages:\n";
			cin >> num2;

			while (in.read((char*)&b, sizeof(b)))
			{
				if ((name1 == b.Name()) && (num2 == b.Num()))
				{
					system("cls");
					cout << "\t\t\t\t\tFound!!!!" << endl;
					cout << "The book is " << b.Name() << endl;
					cout << "The author is " << b.Author() << endl;
					cout << "The number of pages is " << b.Num() << endl;
					cout << "The cost of the book is " << b.Cost() << " $" << endl;




				}

			}


			in.close();
			break;
			}
			case 2:
			{ system("cls");
			ifstream ifs;
			ifs.open("Book-Shop", ios::binary);

			string author1;
			cout << "Please, enter the author of some book, which we have in our BOOK-Shop:\n";
			cin >> author1;
			int num3;
			cout << "Please,enter the number of pages:\n";
			cin >> num3;

			while (ifs.read((char*)&b, sizeof(b)))
			{
				if ((author1 == b.Author()) && (num3 == b.Num()))
				{
					system("cls");
					cout << "\t\t\t\t\tFound!!!!" << endl;
					cout << "The book is " << b.Name() << endl;
					cout << "The author is " << b.Author() << endl;
					cout << "The number of pages is " << b.Num() << endl;
					cout << "The cost of the book is " << b.Cost() << " $" << endl;

				}

			}

			ifs.close();
			break;

			}
			case 3:
			{ system("cls");
			ifstream op;
			op.open("Book-Shop", ios::binary);

			string author1;
			cout << "Please, enter the author of some book, which we have in our BOOK-Shop:\n";
			cin >> author1;
			string name2;
			cout << "Please, enter the name of some book, which we have in our BOOK-Shop:\n";
			cin >> name2;


			while (op.read((char*)&b, sizeof(b)))
			{
				if ((author1 == b.Author()) && (name2 == b.Name()))
				{
					cout << "\t\t\t\t\tFound!!!!" << endl;
					cout << "The book is " << b.Name() << endl;
					cout << "The author is " << b.Author() << endl;
					cout << "The number of pages is " << b.Num() << endl;
					cout << "The cost of the book is " << b.Cost() << " $" << endl;
				}

			}

			op.close();
			break;
			}
			case 4:
			{
				system("cls");
				ifstream mq;
				mq.open("Book-Shop", ios::binary);
				cout << "\n\tList of added books with their authors and number of pages:\n\n";
				while (mq.read((char*)&b, sizeof(b)))
				{
					b.Get_Data();
				}
				mq.close();



				cout << "Enter the name of book, you want to rent: ";
				string name_del;
				cin >> name_del;
				ofstream vi;
				vi.open("temporary", ios::binary);
				ifstream bi;
				bi.open("Book-Shop", ios::binary);
				cout << "Thank you for renting this book!!!" << endl;


				while (bi.read((char*)&b, sizeof(b)))
				{
					if (b.Name() != name_del)
					{
						vi.write((char*)&b, sizeof(b));

					}
				}

				vi.close();
				bi.close();
				remove("Book-Shop");
				rename("temporary", "Book-Shop");


				break;
			}
			case 5:
			{
				system("cls");
				ifstream mo;
				mo.open("Book-Shop", ios::binary);
				cout << "\n\tList of added books with their authors and number of pages:\n\n";
				while (mo.read((char*)&b, sizeof(b)))
				{
					b.Get_Data();
				}
				mo.close();
				ofstream l;
				l.open("temporary", ios::binary);
				ifstream k;
				k.open("Book-Shop", ios::binary);
				string name_buy;
				cout << "Please,write the name of the book, you want to buy: ";
				cin >> name_buy;
				system("cls");
				double pay_z;
				while (k.read((char*)&b, sizeof(b)))
				{
					if (name_buy == b.Name())
					{
						cout << "So,you want to buy:";
						b.Get_Data();
						cout << "You need to pay: " << b.Cost() << " $" << endl;
						cin >> pay_z;
						while (b.Cost() != pay_z)
						{
							system("cls");
							cout << "Wrong payment!!!" << endl;
							cout << "You need to pay: " << b.Cost() << " $" << endl;
							cin >> pay_z;
							system("cls");
						}
						l.write((char*)&b, sizeof(b));
					}
					else
					{
						l.write((char*)&b, sizeof(b));
					}

				}
				l.close();
				k.close();
				remove("Book-Shop");
				rename("temporary", "Book-Shop");
				break;
			}
			case 0:
			{ system("cls");
			Col(9, 0);
			cout << "We go back!!!" << endl;
			break;
			}
			default:
			{ system("cls");
			cout << "Invalid option!!! Try again" << endl;
			break;
			}
			}

		} while (choice != 0);
		break;
		}
		case 3:
		{

			system("cls");
			Col(0, 15);
			int ch = 0;//choice

			//initial books


			//added books
			ifstream in1;
			in1.open("Book-Shop", ios::binary);
			cout << "\n\tList of added books with their authors and number of pages:\n\n";
			while (in1.read((char*)&b, sizeof(b)))
			{
				b.Get_Data();
			}
			in1.close();
			//GO back
			cout << "\n\tPlease enter 1 to go to main menu \n";
			cin >> ch;

			if (ch != 1) {
				system("color 4F");
				do {
					cout << "Please follow the instructions to make the program work correctly";
					cin >> ch;
				} while (ch != 1);
			}

			system("color 0F");
			system("cls");
			break;
		}
		case 4:
		{
			Col(0, 14);
			system("cls");
			ifstream mt;
			mt.open("Book-Shop", ios::binary);
			cout << "\n\tList of added books with their authors and number of pages:\n\n";
			while (mt.read((char*)&b, sizeof(b)))
			{
				b.Get_Data();
			}
			mt.close();
			ofstream zi("temporary", ios::binary);
			ifstream ci("Book-Shop", ios::binary);
			cout << "Enter the name of the book, you need to modify: ";
			string name_mod;
			cin >> name_mod;
			while (ci.read((char*)&b, sizeof(b)))
			{
				if (name_mod == b.Name())
				{
					cout << "Please,write a new information about this book:" << endl;
					b.Set_Data();
					zi.write((char*)&b, sizeof(b));
				}
				else
				{
					zi.write((char*)&b, sizeof(b));
				}
			}
			zi.close();
			ci.close();
			remove("Book-Shop");
			rename("temporary", "Book-Shop");
			system("cls");
			break;
		}

		case 5:
		{
			Col(1, 11);
			p.About_us();
			break;
		}
		case 6:
		{ system("cls");
		Col(0, 10);
		cout << "See you soon!!!" << endl;
		break;
		}
		default:
			Col(7, 0);
			{ system("cls");
			cout << "Invalid option!!! Try again" << endl;
			break;
			}
		}

	} while (option != 6);
	system("pause");
	return 0;

}