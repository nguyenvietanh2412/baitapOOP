#pragma once
#include"nguoi.h"
#include<vector>
using namespace std;
class quanlyKS
{
private:
	int songaythue;
	vector<nguoi> person;
public:
	void add(nguoi ps)
	{
		person.push_back(ps);
	}
	void outputList()
	{
		for (int i = 0; i < person.size(); i++)
		{
			cout << "\nCustomer number " << i + 1 << " : ";
			person[i].outputPerson();
		}
	}
	void outputBill(int ID)
	{
		int bill = 0;
		for (int i = 0; i < person.size(); i++)
		{
			if (person[i].getID() == ID)
			{
				bill = person[i].getDay() * person[i].getRoom().getPrice();
			}
		}
		cout << "\nTotal bill: " << bill;
	}
	void del(int ID)
	{
		int dem = 0;
		for (int i = 0; i < person.size(); i++)
		{
			if (person[i].getID() == ID)
			{
				person.erase(person.begin() + i);
				dem++;
			}
		}
		if (dem == 0) cout << "\nCUSTOMER NOT FOUND !";
	}
	~quanlyKS(){}
};

