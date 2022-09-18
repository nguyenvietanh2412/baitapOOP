#pragma once
#include"Employee.h"

class Intern : public Employee
{
private:
	string Major, Semester, Uni_Name;
public:
	void AddInfor()
	{
		Employee::AddInfor();
		cout << "\nEnter major: ";
		getline(cin, Major);
		cout << "\nEnter semester: ";
		getline(cin, Semester);
		cout << "\nEnter university: ";
		getline(cin, Uni_Name);
		cout << endl;
	}
	void ShowInfor()
	{
		Employee::ShowInfor();
		cout << "\nMajor: " << Major;
		cout << "\nSemester: " << Semester;
		cout << "\nUniversity: " << Uni_Name << endl;
	}
};

