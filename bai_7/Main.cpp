#include"QLGV.h"

int main()
{
	QLGV qlgv;
	while (true)
	{
		int choice;
		string ID;
		cout << "1. Add teacher";
		cout << "\n2. Display information";
		cout << "\n3. Delete teacher";
		cout << "\n0. Exit";
		cout << "\nEnter choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			qlgv.Input();
			break;
		case 2:
			qlgv.Output();
			break;
		case 3:
			qlgv.Del(ID);
			break;
		case 0:
			return 0;
		default: 
			break;
		}
	}
	return 0;
}