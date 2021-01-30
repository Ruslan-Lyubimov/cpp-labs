/*
Practical  Assignment # 2;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#pragma once
#include<iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person() {
#include<string>

	}
	Person(string theName) {
		name = theName;
	}
	Person(string theName, int theAge) {
		name = theName;
		age = theAge;
	}
	void setName() {
		cout << "Enter your name: ";
		cin >> name;
	}
	string getName() {
		return name;
	}
	void setAge() {
		cout << "Enter your age: ";
		cin >> age;
	}
	int getAge() {
		return age;
	}
};