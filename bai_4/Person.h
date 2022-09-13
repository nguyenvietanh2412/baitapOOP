#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
	string name, job;
	int age, id;
public:
	Person(){}
	Person(string Name, string Job, int Age, int ID)
	{
		name = Name;
		job = Job;
		age = Age;
		id = ID;
	}
	string getName()
	{
		return name;
	}
	string getJob()
	{
		return job;
	}
	int getAge()
	{
		return age;
	}
	int getID()
	{
		return id;
	}
	~Person(){}
};

