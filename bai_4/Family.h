#pragma once
#include"Person.h"
#include<vector>
class Family
{
private:
	int n_people;
	string add;
	vector<Person> person;
public:
	Family(){}

	void setPerson(Person Ps)
	{
		person.push_back(Ps);
	}
	vector<Person> getPerson()
	{
		return person;
	}
	void setNumberPeople(int N_people)
	{
		n_people = N_people;
	}
	void setAddress(string ADD)
	{
		add = ADD;
	}
	string getAddress()
	{
		return add;
	}
	int getNumberPeople()
	{
		return n_people;
	}

};


