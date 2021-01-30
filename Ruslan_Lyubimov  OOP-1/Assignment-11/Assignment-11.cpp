/*Lab Assignment #11
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program:Create structure student with fields (Student_Id, Student_name, OOP1, English, and Maths). Create variable of students where we can store 5 students information. Create menu driven program to stores and retrieve student’s details. Menu elements are as follow 
1: Read Student’s Data 
2: Display Student’s Data with total scores and average of scores. 
3: Search student data based on student Name 
4: Modify student data based on student Name 
5: Display details of student who score maximum marks in each course 
6: Display details of student who average is maximum. 
7:Exit.
Group#5
*/
#include<iostream>
#include<string>
using namespace std;

struct student //structure
{
	string studentID;
	string studentName;
	double OOP = 0;
	double english = 0;
	double maths = 0;
};


int main()
{
	int choice = 0;//declaration of variable
	int i = 0;
	student s[5];
	double englishMax[5];
	double OOPMax[5];
	double MathMax[5];
	double sum = 0;
	string name = 0;
	double temp = 0;
	string tempName;
	double avarage[5];
	int index;

	do
	{          // Menu
		cout << "Please enter your choice"<<endl
			<< " 1. Read student's data " << endl
			<< " 2. Display Student’s Data with total scores and average of scores  " << endl
			<< " 3. Search student data based on student Name  " << endl
			<< " 4. Modify student data based on student Name  " << endl
			<< " 5. Display details of student who score maximum marks in each course  " << endl
			<< " 6. Display details of student who average is maximum  " << endl
			<< " 7. Exit " << endl;
		cin >> choice;
		cout << endl;
		switch (choice)  // give a user to choose
		{
		case 1:
			for (int i = 0; i < 5; i++)//data of students
			{
				cout << "---------------Write the student's data--------------------" << endl;
				cout << "Student:" << i + 1 << endl;
				cout << "StudentID:";
				cin >> s[i].studentID;
				cout << endl;
				cout << "Student's name: ";
				cin >> s[i].studentName;
				cout << endl;
				cout << "Score for OOP:";
				cin >> s[i].OOP;
				cout << endl;
				cout << " Score for English: ";
				cin >> s[i].english;
				cout << endl;
				cout << "Score for math: ";
				cin >> s[i].maths;
				cout << endl;
			}
			break;
		case 2:
			cout << "--------------------- The total and avarage score-------------------" << endl;//scores
			cout << "----------Avarage score----------" << endl;
			for (int i = 0; i < 5;i++)
			{
				sum += s[i].OOP;
			}
			cout << "OOP:";
			cout << sum / 5 << endl;
			for (int i = 0; i < 5;i++)
			{
				sum += s[i].english;
			}
			cout << "English:";
			cout << sum / 5 << endl;
			for (int i = 0; i < 5; i++)
			{
				sum += s[i].maths;
			}
			cout << "Maths:";
			cout << sum / 5 << endl;
                break;
		case 3:
			cout << " Enter a name of student to search " << endl;//searching the names
			cin >> name;
			for (int i = 0; i < 5; i++)
			{
				if (name == s[i].studentName)
				{
					cout << s[i].studentID << endl;
					cout << s[i].studentName << endl;
					cout << s[i].OOP << endl;
					cout << s[i].english << endl;
					cout << s[i].maths << endl;
				}
			}

			break;
		case 4:
			cout << "Please, enter a name of a student to modify his or her data" << endl;
			cin >> name;

			for (int i = 0; i < 5; i++)		//loop 
			{
				if (name == s[i].studentName)	
				{
					cout << "Student's ID: ";
					cin >> s[i].studentID;
					cout << endl;
					cout << "Score for OOP: ";
					cin >> s[i].OOP;
					cout << endl;
					cout << "Score for Endlish: ";
					cin >> s[i].english;
					cout << endl;
					cout << "Score for Maths: ";
					cin >> s[i].maths;
					cout << endl;
				}
			}
			break;
		case 5:
			cout << "The student who has got the maximum score for each subject"; // maximum of each subject
			for (int i = 0; i < 5; i++)
			{
				for (int j = i + 1; j < 5; j++)
				{
					if (s[j].OOP < s[i].OOP)
					{
						temp = s[i].OOP;
						s[i].OOP = s[j].OOP;
						s[j].OOP = temp;
						tempName = s[i].studentName;
						s[i].studentName = s[j].studentName;
						s[j].studentName = tempName;
					}
				}
			}
			cout << "Got it!" << s[4].studentName << endl;
			cout << "Your score for OOP is the highest:" << s[4].OOP << endl;

			for (int i = 0; i < 5; i++)
			{
				for (int j = i + 1; j < 5; j++)
				{
					if (s[j].english < s[i].english)
					{
						temp = s[i].english;
						s[i].english = s[j].english;
						s[j].english = temp;

						tempName = s[i].studentName;
						s[i].studentName = s[j].studentName;
						s[j].studentName = tempName;
					}
				}
			}

			cout << "Got it! " << s[4].studentName << "\n Your score for English is the highest: " << s[4].english << endl;

			for (int i = 0; i < 5; i++)
			{
				for (int j = i + 1; j < 5; j++)
				{
					if (s[j].maths < s[i].maths)
					{
						temp = s[i].maths;
						s[i].maths = s[j].maths;
						s[j].maths = temp;

						tempName = s[i].studentName;
						s[i].studentName = s[j].studentName;
						s[j].studentName = tempName;
					}
				}
			}

			cout << "Got it! " << s[4].studentName << "\n Your score for maths is the highest: " << s[4].maths << endl;
			break;
		case 6:
			temp = (s[0].OOP + s[0].maths + s[0].english) / 3.0;        // avarage maximum of student
			for (int i = 1; i < 5; i++)
			{
				if (temp < (s[i].OOP + s[i].maths + s[i].english) / 3.0)
				{
					temp = (s[i].OOP + s[i].maths + s[i].english) / 3.0;
					index = i;
				}
			}
			cout << "-----------------Maxim average grade-------------------" << endl;
			cout << "Name " << s[index].studentName << endl;
			cout << "Average: " << temp << endl;
			break;
		case 7:
			cout << "See you soon!!!" << endl; // end 
			break;
		default:
			cout << "Invalid input!" << endl;
			break;
			
		}
	} while (choice != 7);
	system("pause");
	return 0;
}