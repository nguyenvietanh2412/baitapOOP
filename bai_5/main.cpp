#include"quanlyKS.h"

const int price_A = 500;
const int price_B = 300;
const int price_C = 100;
int main()
{
	int num;
	string Name, Type;
	int Age, ID, Price, Day;
	phong Room;
	nguoi person;
	quanlyKS list;
	while (true)
	{
		cout << "\n=======MENU=======";
		cout << "\n1. Add customer info";
		cout << "\n2. Display customer info";
		cout << "\n3. Bill";
		cout << "\n4. Delete customer";
		cout << "\n0. Exit";
		cout << "\nYour choice : "; cin >> num;
		switch (num)
		{
		case 1:
			cout << "\nEnter name : ";
			cin.ignore();
			getline(cin, Name);
			cout << "\nEnter ID : "; cin >> ID;
			cout << "\nEnter age : "; cin >> Age;
			cout << "\nEnter number of rental days : "; cin >> Day;

			cout << "\nType of room : ";
			cout << "\n1. Type A";
			cout << "\n2. Type B";
			cout << "\n3. Type C";
			cout << "\nYour choice : ";
			int type;
			cin >> type;
			switch (type)
			{
			case 1:
				Room.setType("Type A");
				Room.setPrice(price_A);
				break;
			case 2:
				Room.setType("Type B");
				Room.setPrice(price_B);
				break;
			case 3:
				Room.setType("Type C");
				Room.setPrice(price_C);
				break;
			}
			list.add(nguoi(Name, Age, ID, Day, Room));
			break;
		case 2:
			cout << "\nList of customer : ";
			list.outputList();
			break;
		case 3:
			cout << "\nType ID to get bill: ";
			cin >> ID;
			cout << "\nTotal bill : ";
			list.outputBill(ID);
			break;
		case 4:
			cout << "\nType ID to delete : ";
			cin >> ID;
			list.del(ID);
			break;
		case 0 :
			return 0;
		default:
			cout << "\nChoose again!"; break;
		}
	}
}

