#pragma once
#include"Family.h"

class Quarter
{
private:
	int n_family;
	vector<Family> setfamily;
public:
	Quarter(){}
	
	void Input()
	{
		string Name, Job, ADD;
		int Age, ID, N_people;
		cout << "\nEnter number of family: ";
		cin >> n_family;
		for (int i = 0; i < n_family; i++)
		{
			Family family;
			cout << "\n\nFAMILY " << i + 1 << ": ";
			cout << "\nEnter address: ";
			cin.ignore();
			getline(cin, ADD);
			family.setAddress(ADD);
			cout << "\nEnter number of people: ";
			cin >> N_people;
			family.setNumberPeople(N_people);
			for (int i = 0; i < N_people; i++)
			{
				cout << "\nMEMBER " << i + 1 << ": ";
				cout << "\nEnter name: ";
				cin.ignore();
				getline(cin, Name);
				cout << "\nEnter age: ";
				cin >> Age;
				cout << "\nEnter job: ";
				cin.ignore();
				getline(cin, Job);
				cout << "\nEnter ID: ";
				cin >> ID;
				family.setPerson(Person(Name, Job, Age, ID));
			}
			setfamily.push_back(family);
		}
	}
	void Output()
	{
		cout << "\n\nOUT PUT LIST: ";
		for (int i = 0; i < setfamily.size(); i++)
		{
			cout << "\nFAMILY " << i + 1 << ": ";
			cout << "\n\tAddress: " << setfamily[i].getAddress();
			cout << "\n\tNumber of people: " << setfamily[i].getNumberPeople();
			cout << "\n\tMEMBER DETAILS: ";
			for (int j = 0; j < setfamily[i].getPerson().size(); j++)
			{
				cout << "\n\tMember " << j + 1 << ": ";
				cout << "\n\t\tName: " << setfamily[j].getPerson()[j].getName();
				cout << "\n\t\tAge: " << setfamily[j].getPerson()[j].getAge();
				cout << "\n\t\tJob: " << setfamily[j].getPerson()[j].getJob();
				cout << "\n\t\tID: " << setfamily[j].getPerson()[j].getID();
			}
		}
	}
	
};

