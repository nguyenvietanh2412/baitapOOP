#pragma once
#include<iostream>
#include<string>

using namespace std;
class phong
{
protected:
	string type;
	int price;

public:
	phong(){}
	phong(string Type, int Price)
	{
		type = Type;
		price = Price;
	}
	void setType(string Type)
	{
		type = Type;
	}
	string getType()
	{
		return type;
	}
	void setPrice(int Price)
	{
		price = Price;
	}
	int getPrice()
	{
		return price;
	}

	~phong(){}
};

