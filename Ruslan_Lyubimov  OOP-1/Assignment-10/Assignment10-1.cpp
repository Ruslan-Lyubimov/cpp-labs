/*Lab Assignment #10
User ID: U1910163
Name: Lyubimov Ruslan
Name of Program: Write a short C+ program that declares and initializes (to any value you 
like) a double, an int, and a char. Next declare and initialize a pointer to 
each of the three variables. Your program should then print the address 
of, and value stored in, and the memory size (in bytes) of each of the six 
variables. 
 

Group#5
*/
#include<iostream>
using namespace std;

int main(){
	int a = 10; //declare new variable
	
	char b = 'b';//declare char variable
	
	double c = 6.9;////declare double variable
	
	int *pa;  //use of pointer
	char *pb;
	double *pc;
	
	pa = &a;
	pb = &b;
	pc = &c;
	
	cout << "Address of a is " << &a << endl;
	cout << " Value of a is " << a << endl;
	cout << " Size of a is " << sizeof(a) << " bytes " << endl;//using sizeof()
	
	cout << "Address of b is " << &b;
	cout << " Value of b is " << b << endl;
	cout << " Size of b is " << sizeof(b) << " bytes " << endl;//using sizeof()
	
	cout << "Address of c is " << &c << endl;
	cout << " Value of c is " << c << endl;
	cout << " Size of c is " << sizeof(c) << " bytes " << endl;//using sizeof()
	
	cout << "Address of pa is " << &pa << endl;
	cout << " Value of pa is " << *pa << endl;
	cout << " Size of pa is " << sizeof(*pa) << " bytes " << endl;//using sizeof()
	
	cout << "Address of pb is " << &pb << endl;
	cout << " Value of pb is " << *pb << endl;
	cout << " Size of pb is " << sizeof(*pb) << " bytes " << endl;//using sizeof()
	
	cout << "Address of pc is " << &pc << endl;
	cout << " Value of pc is " << *pc << endl;
	cout << " Size of pc is " << sizeof(*pc) << " bytes " << endl;//using sizeof()



	system("pause");
	return 0;
}