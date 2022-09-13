#include<iostream>
#include<string>
using namespace std;

class Teacher
{
private:
	string name, id;
	int age, real_salary, salary, bonus, penalty;
public:
	Teacher(){}
	Teacher(string NAME, string ID, int AGE, int REAL_SALARY, int SALARY, int BONUS, int PENALTY)
		: name(NAME), id(ID), age(AGE), real_salary(REAL_SALARY), salary(SALARY), bonus(BONUS), penalty(PENALTY)
	{}
	string getName()
	{
		return name;
	}
	string getID()
	{
		return id;
	}
	int getAge()
	{
		return age;
	}
	int getRealSalary()
	{
		if (real_salary <= 0)
		{
			real_salary = 0;
		}
		return real_salary;
	}
	int getSalary()
	{
		return salary;
	}
	int getBonus()
	{
		return bonus;
	}
	int getPenalty()
	{
		return penalty;
	}
	~Teacher(){}

};

