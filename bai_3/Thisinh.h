#pragma once
#include<iostream>
#include<string>
using namespace std;

class Thisinh
{
protected:
	string hoten, diachi, khoithi;
	int mucuutien;
public:
	int TS;
	char sbd[10];
	virtual void input()
	{
		cin.ignore();
		cout << "\nNhap so bao danh: "; cin.getline(sbd, 10);
		cout << "\nNhap ho va ten thi sinh: "; getline(cin, hoten);
		cout << "\nNhap dia chi: "; getline(cin, diachi);
		cout << "\nNhap muc uu tien: "; cin >> mucuutien;
		cin.ignore();

	}
	virtual void output()
	{
		cout << "\nSo bao danh: " << sbd;
		cout << "\nHo va ten: " << hoten;
		cout << "\nDia chi: " << diachi;
		cout << "\nMuc uu tien: " << mucuutien;
	}
	int getTS()
	{
		return TS;
	}
	void setTS(int tl)
	{
		TS = tl;
	}
	~Thisinh() {}
};

