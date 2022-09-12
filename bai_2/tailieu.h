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
	virtual void input()
	{
		cin.ignore();
		cout << "\nNhap ma tai lieu: ";
		cin.getline(maTL, 20);
		cout << "\nNhap ten nha xuat ban: ";
		cin.getline(nxb, 20);
		cout << "\nNhap so ban phat hanh: ";
		cin >> soban;
	}
	virtual void output()
	{
		cout << "\nMa tai lieu: " << maTL;
		cout << "\nNha xuat ban: " << nxb;
		cout << "\nSo ban phat hanh: " << soban;
	}


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

