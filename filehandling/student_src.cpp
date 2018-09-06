#include"student.h"

student::student()
{
	this->rollno = 0;
	strcpy(this->name,"unknown");
}
student::student(char * name, int rollno)
{
	strcpy(this->name, name);
	this->rollno = rollno;
}
void student::accept()
{	
	cout << "enter name and roll number";
	cin >> this->name;
	cin >> this->rollno;
}
void student::display()
{
	cout << "\nname :" << this->name;
	cout << "\nroll number  :" << this->rollno;
}
int student::getroll()
{
	return this->rollno;
}
