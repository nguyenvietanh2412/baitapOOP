#pragma once
#include"Employee.h"

class Experience : public Employee
{
private:
	int ExpYear;
	string ProSkill;
public:
	void AddInfor()
	{
		Employee::AddInfor();
		cout << "\nEnter experience year: ";
		cin >> ExpYear;
		cin.ignore();
		cout << "\nEnter skill: ";
		getline(cin, ProSkill);
		cout << endl;
	}
	void ShowInfor()
	{
		Employee::ShowInfor();
		cout << "\nExperience year: " << ExpYear;
		cout << "\nSkill: " << ProSkill << endl;
	}
};

