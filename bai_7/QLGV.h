#include"Teacher.h"
#include<vector>
class QLGV
{
private:
	vector<Teacher> teacher;
public:
	QLGV(){}
	
	/*void addTeacher(Teacher TEACHER)
	{
		teacher.push_back(TEACHER);
	}*/
	void Input()
	{
		string NAME, ID;
		int AGE, REAL_SALARY, SALARY, BONUS, PENALTY;

		cout << "\nEnter name: ";
		cin.ignore();
		getline(cin, NAME);
		cout << "\nEnter age: ";
		cin >> AGE;
		cout << "\nEnter ID: ";
		cin.ignore();
		getline(cin, ID);
		cout << "\nEnter salary: ";
		cin >> SALARY;
		cout << "\nEnter bonus: ";
		cin >> BONUS;
		cout << "\nEnter penalty: ";
		cin >> PENALTY;
		REAL_SALARY = SALARY + BONUS - PENALTY;
		teacher.push_back(Teacher(NAME, ID, AGE, REAL_SALARY, SALARY, BONUS, PENALTY));
	}
	void Output()
	{
		cout << "\n\nOUT PUT LIST: ";
		for (int i = 0; i < teacher.size(); i++)
		{
			cout << "\nTeacher " << i + 1 << ": ";
			cout << "\n\tName: " << teacher[i].getName();
			cout << "\n\tAge: " << teacher[i].getAge();
			cout << "\n\tID: " << teacher[i].getID();
			cout << "\n\tReal salary: " << teacher[i].getRealSalary()<<"\n\n";
		}
		if (teacher.size() == 0)
		{
			cout << "\nLIST IS EMPTY !"<<"\n\n";
		}
	}
	void Del(string ID)
	{
		int count = 0;
		cout << "\n\nEnter ID to delete: ";
		cin.ignore();
		getline(cin, ID);
		for (int i = 0; i < teacher.size(); i++)
		{
			if (teacher[i].getID().compare(ID) == 0)
			{
				teacher.erase(teacher.begin() + i);
				count++;
			}
		}
		if (count == 0)
		{
			cout << "\nNOTHING TO DELETE !" << "\n\n";
		}
	}
};

