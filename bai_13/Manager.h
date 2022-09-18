#pragma once
#include"Employee.h"
#include"Experience.h"
#include"Fresher.h"
#include"Intern.h"
#include<vector>

class Manager
{
private:
	vector<Employee*> Emp;
public:
	Employee* employee = new Employee;
	void Addemployee(Employee& employee)
	{
		Emp.push_back(&employee);
	}
	
	void DisplayAll()
	{
		
		int count = 0;

		for (int i = 0; i < Emp.size(); i++)
		{
			cout << "\nEmployee " << i + 1;
			Emp[i]->ShowInfor();
			count++;
			employee->setCount(count);
		}
		cout << "\nNumber of employee: " << employee->getCount();
	}
	void DisplayByType(int type)
	{
		if (Emp.size() == 0)
			cout << "\nList is empty !";
		else
		{
			for (int i = 0; i < Emp.size(); i++)
			{
				if (Emp[i]->getType() == type)
				{
					Emp[i]->ShowInfor();
				}
			}
		}
	}
	void check_name( string id)
	{
		int dem = 0;
		for (int j = 0; j < Emp.size(); j++)
		{
			if (Emp[j]->getID().compare(id) == 0)
			{
				
				cout << "\nName: " << Emp[j]->getName();
				for (int i = 0; i < Emp[j]->getName().length(); i++)
				{
					
					if ((Emp[j]->getName()[i] >= 97 && Emp[j]->getName()[i] <= 122 ) || (Emp[j]->getName()[i] >= 65  && Emp[j]->getName()[i] <= 90) || Emp[j]->getName()[i] == 32)
					{
						dem++;
					}
					else
					{
						cout << "\nInvalid name !"; break;
					}
				}
				if (dem == Emp[j]->getName().length())
					cout << "\nValid Name !";
			}
		}
	}
	void check_phone(string id)
	{
		for (int i = 0; i < Emp.size(); i++)
		{
			if (Emp[i]->getID().compare(id) == 0)
			{
				if (Emp[i]->getPhone().length() == 10)
				{
					if (Emp[i]->getPhone()[0] == 0)
						cout << "\nValid phone !";
					else cout << "\nInvalid phone !";
				}
				else cout << "\nInvalid phone !";
			}
		}
	}
};

