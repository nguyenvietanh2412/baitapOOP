#pragma once
#include<iostream>
#include<string>
using namespace std;

class Canbo
{
protected:
	char gioitinh[5], diachi[50];
	int tuoi;
	int KT;
public:
	char hoten[25];
	virtual void nhapthongtin()
	{
		cin.ignore();
		cout << "\nNhap ho va ten:"; 
		cin.getline(hoten, 25);
		cout << "\nNhap gioi tinh:";
		cin.getline(gioitinh, 5);
		cout << "\nNhap tuoi:"; cin >> tuoi;
		cin.ignore();
		cout << "\nNhap dia chi:"; cin.getline(diachi, 30);
	}
	virtual void xuatthongtin()
	{
		cout << "\nHo va ten : " << hoten;
		cout << "\nGioi tinh : " << gioitinh;
		cout << "\nTuoi : " << tuoi;
		cout << "\nDia chi : " << diachi;
	}

	int getKT()
	{
		return KT;
	}
	void setKT(int kt)
	{
		KT = kt;
	}
	~Canbo() {};
};

