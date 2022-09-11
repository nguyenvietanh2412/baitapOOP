#pragma once
#include"phong.h"
using namespace std;
class nguoi
{
private:
	string name;
	int age, id;
	int day;
	phong room;
public:
	nguoi(){}
	nguoi(string Name, int Age, int ID,int Day, phong Room)
	{
		name = Name;
		age = Age;
		id = ID;
		room = Room;
		day = Day;
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	int getID()
	{
		return id;
	}
	int getDay()
	{
		return day;
	}
	phong getRoom()
	{
		return room;
	}

	void outputPerson()
	{
		cout << "\nName: " << name;
		cout << "\nID: " << id;
		cout << "\nAge: " << age;
		cout << "\nType of room: " << room.getType();
		cout << "\nNumber of rental days: " << day;
	}
	~nguoi(){}
};

