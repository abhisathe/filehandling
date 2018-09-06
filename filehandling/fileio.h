#include"student.h"
#include<fstream>
class FILEIO
{
public:
	static void writerecords()
	{
		char choice;
		fstream fs;
		fs.open("student.dat", ios::out);
		do
		{
			student s1;
			s1.accept();
			fs.write((char*)&s1, sizeof(student));
			cout << "\nmore?";
			cin >> choice;

		} while (choice == 'y' || choice == 'Y');

		fs.close();
	}

	static void readrecords()
	{
		
		fstream fs;
		fs.open("student.dat", ios::in);
		student s2;
		while(fs.read((char *)&s2, sizeof(student)))
		{
			s2.display();
		}
		fs.close();
	}
	static bool searchrecords(int roll)
	{
		fstream fs;
		student s3;
		fs.open("student.dat", ios::in);
		while (fs.read((char*)&s3, sizeof(student)))
		{
			if (s3.getroll() == roll)
			{
				s3.display();
				return true;
				fs.close();
			}

			fs.close();
			cout << "file closed";
			return false;
		}
	}
	static void updaterecords()
	{
		char choice;
		fstream fs;
		fs.open("student.dat", ios::app);
			do
			{
				student s4;
				s4.accept();
				fs.write((char*)&s4, sizeof(student));
				cout << "\nmore?";
				cin >> choice;

			} while (choice == 'y' || choice == 'Y');

	}
};