#pragma once
#include<iostream>
#include<string>
using namespace std;
class TaiLieu
{
protected:
	char nxb[20];
	int soban;
	int TL;
public:
	char maTL[20];
	virtual void input();
	virtual void output();
	int getTL()
	{
		return TL;
	}
	void setTL(int tl)
	{
		TL = tl;
	}
	~TaiLieu(){}
};

