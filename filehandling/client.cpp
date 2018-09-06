#include"fileio.h"
//#include"student.h"
#include<conio.h>
void main()
{
	int ch;
	char choice;
	do
	{
		cout << "enter your choice";
		cout << "\n1.WRITE records\n2.READ records\n3.search\n4.UPDATE";
		cin >> ch;
		switch (ch)
		{
		case 1:
			FILEIO::writerecords();
			break;

		case 2:
			FILEIO::readrecords();
			break;

		case 3:
		{	
			bool result;
			int roll;
			cout << "\nEnter roll number to search";
			cin >> roll;
			result=FILEIO::searchrecords(roll);
			if (result == true)
			{
				cout << "record found";
			}
			break;
		}
		
		case 4:
			FILEIO::updaterecords();
			break;

		}

		cout << "\nmore operations?";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	_getch();
}