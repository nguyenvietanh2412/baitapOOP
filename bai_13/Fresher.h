#pragma once
#include"Employee.h"

class Fresher : public Employee
{
private:
	string Grad_Date, Grad_Rank, Education;
public:
	void AddInfor()
	{
		Employee::AddInfor();
		cout << "\nEnter graduation date: ";
		getline(cin, Grad_Date);
		cout << "\nEnter graduation rank: ";
		getline(cin, Grad_Rank); 
		cout << "\nEnter education: ";
		getline(cin, Education);
		cout << endl;
	}
	void ShowInfor()
	{
		Employee::ShowInfor();
		cout << "\nGraduation date: " << Grad_Date;
		cout << "\nGraduation rank: " << Grad_Rank;
		cout << "\nEducation: " << Education<<endl;
	}
};

