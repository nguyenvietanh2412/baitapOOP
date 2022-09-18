#include"Manager.h"

int main()
{
	Manager *manager = new Manager;
	while (true)
	{
		Employee* employee;
		int x;
		string id;
		int count = 0;
		cout << "\n1. Add employee";
		cout << "\n2. Display employee";
		cout << "\n0. Exit";
		cout << "\nEnter menu: ";
		cin >> x;
		switch (x)
		{
			int choice;
		case 1: 
			cout << "\n1. Experience";
			cout << "\n2. Fresher";
			cout << "\n3. Intern";
			cout << "\nChoose a number: ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				employee = new Experience;
				employee->AddInfor();
				employee->setType(1);
				count++;
				employee->setCount(count);
				manager->Addemployee(*employee);
				break;
			case 2:
				employee = new Fresher;
				employee->AddInfor();
				employee->setType(2);
				count++;
				employee->setCount(count);
				manager->Addemployee(*employee);
				break;
			case 0:
				return 0;
			default:
				break;
			}
			break;
		case 2:
			cout << "\n1. Display Experience";
			cout << "\n2. Display Fresher";
			cout << "\n3. Display Intern";
			cout << "\n0. Exit";
			cout << "\nChoose a number: ";
			cin >> choice;
			switch (choice)
			{
			case 1: 
				manager->DisplayByType(1);
				break;
			case 2:
				manager->DisplayByType(2);
				break;
			case 3:
				manager->DisplayByType(3);
			case 0:
				return 0;
			default:
				break;
			}
			break;
		}
		if (x == 0)
			break;
	}
	delete manager;
	return 0;

}