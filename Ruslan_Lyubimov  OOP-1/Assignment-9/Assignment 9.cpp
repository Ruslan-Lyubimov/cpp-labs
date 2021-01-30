/*Lab Assignment #9
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: Write C++ Menu driven program to create array of integer of size 5 with following menu  
1:  Read Array ()//function to read array element 
2: Display Array()// function to print array element 
3:  Search();//function to search element in array 
4: SortA()//sort ascending order 
5: sortD()//sort descending order 
6:  mean() //find mean value of array 
Mod()//find mode value of array 
Median ()//find mean value of array 
7:  sum()//find summation of array element 
Average()//find average of array element 
8:  shift();//sift array element by one location 
9:  reverseprint();//print array in reverse order 
0: exit 

Group#5
*/
#include<iostream>

using namespace std;

void read(int arra[5])
{
	for (int i = 0; i < 5; i++)
	{
		cin >> arra[i];
		
	}
}
void display(int arra[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << arra[i] << "\t";
	}
}
int sortA(int arra[5], int size, int temp)
{
	for (int i = 0; i<size; i++)
	{
		for (int j = i + 1; j<size; j++)
		{
			//If there is a smaller element found on right of the array then swap it.
			if (arra[j] < arra[i])
			{
				temp = arra[i];
				arra[i] = arra[j];
				arra[j] = temp;
			}
		}
	}
	return (arra, size, temp);
}

int sortD(int arra[5], int size  , int temp )
{
	{
		for (int i = 0; i<size; i++)
		{
			for (int j = i + 1; j<size; j++)
			{
				//If there is a smaller element found on right of the array then swap it.
				if (arra[j] > arra[i])
				{
					temp = arra[j];
					arra[j] = arra[i];
					arra[i] = temp;
				}
			}
		}
		return (arra, size, temp);
	}
}
int search(int arra[5], int size, int target, int ct)
{
	for (int i = 0; i<size; i++)
	{
		if (arra[i] == target)
		{
			ct = 1;
			break;
		}
	}
	if (ct == 0)
	{
		cout << "\n Element Not Found!";
	}
	else
	{
		cout << "Element Found!";
	}
	return 0;
}
float mean(int arra[5], int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
		sum += arra[i];

	return  sum / size;
}
int mod(int arra[5], int size, int temp)
{
	{ sortA(arra, size, temp); }// function call
	
	int max_count = 1, res = arra[0], count = 1;
	for (int i = 1; i < size; i++)
	{
		if (arra[i] == arra[i - 1])
			count++;
		else
		{
			if (count > max_count)
			{
				max_count = count;
				res = arra[i - 1];
			}
			count = 1;
		}
	}

	
	if (count > max_count)
	{
		max_count = count;
		res = arra[size - 1];
	}

	return res;
}
int Median(int arra[5], int size, int temp)
{
	{ sortA(arra, size, temp); }
	if (size % 2 == 0)
		return (arra[size / 2 - 1] + arra[size / 2]) / 2;
	return arra[size / 2];
}


int sum(int arra[5])
{
	return arra[0] + arra[1] + arra[2] + arra[3] + arra[4];
}
float average(int arra[5], int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
		sum += arra[i];

	return  sum / size;
}
void shift(int arra[5], int size)
{
	int temp = arra[0];

	for (int i = 0; i<(size - 1); i++)
	{
		arra[i] = arra[i + 1];
	}
	arra[size - 1] = temp;
}
void reverse(int arra[5], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arra[i] << "\t";
	}
}

int main()
{
	int array[5] = { 1, 2, 3, 4, 5 };
	int choice; //declaration of variable
	int i = 0, count = 0, key, size = 5, temp = 0; //declaration of variables
	
	do
	{
		//MENU
		cout << "(0) Exit" << endl    
			<< "(1) Read " << endl
			<< "(2) Display " << endl
			<< "(3) Search " << endl
			<< "(4) SortA " << endl
			<< "(5) SortD" << endl
			<< "(6) Mean " << endl
			<< "(7) Mod " << endl
			<< "(8) Median " << endl
			<< "(9) sum " << endl
			<< "(10) average " << endl
			<< "(11) Shift " << endl
			<< "(12) Reverse Print " << endl;

		cout << "Enter your option: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 0:
			cout << "Good Bye" << endl;
			break;
		case 1:
			cout << " Please enter five numbers of array:\n ";

			read(array);// function call
			cout << endl;
			
			break;
		case 2:
			cout<<"There are array elements:\n ";
			
			
			display(array); // function call
			cout << endl;
			
			break;
		case 3:
				cout << "Please enter the element to find" << endl;
				cin >> key;
				search(array, size, key, count);
				cout << endl;
			break;
		case 4:
				cout << "Elements of array sorted in ascending order is:" << endl;
				sortA(array, size, temp);// function call
				for (i = 0; i<size; i++)
				{
					cout << array[i] << endl;
				}
			break;
		case 5:
				cout << "Element of array sorted in descending order:" << endl;
				sortD(array, size, temp);// function call
				for (i = 0; i < size; i++)
				{
					cout << array[i] << endl;
				}
			break;
		case 6:
			cout << "The mean value of array is: " << mean(array, size)  << endl;// function call
			break;
		case 7:
			cout << "The mode value of array is: " << mod(array, size, temp) << endl;// function call
			break;
		case 8:
			cout << "The median value of array is: " << Median(array, size, temp) << endl;// function call
			break;
		case 9:
			cout << "The sum of elements is: " << sum(array) << endl;// function call
			break;
		case 10:
			cout << "The average of elements is: " << average(array, size) << endl;// function call
			break;
		case 11:
			cout << "To right: " << endl;
			shift(array, size);// function call
			for (int i = 0; i<size; i++)
			{
				cout << array[i] << "\t";
			}
			cout << endl;
			break;
		case 12:
			reverse(array, size);// function call
			cout << endl;
			break;

		default:
			cout << " Invalid option! " << endl;
			break;
		}
	} while (choice != 0);

	system("pause");
	return 0;
}
