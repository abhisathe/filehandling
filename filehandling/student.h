#include<string.h>
#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[20];
public:
	student();
	student(char *, int);
	void accept();
	void display();
	int getroll();
};