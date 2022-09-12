#pragma once
#include<iostream>
#include "TaiLieu.h"
using namespace std;
class Sach : public TaiLieu
{
private:
	char tacgia[25];
	int sotrang;
public:
	void input()
	{
		TaiLieu::input();
		cin.ignore();
		cout << "\nNhap ten tac gia: "; cin.getline(tacgia, 25);
		cout << "\nNhap so trang: "; cin >> sotrang;
	}
	void output()
	{
		TaiLieu::output();
		cout << "\nTac gia: " << tacgia;
		cout << "\nSo trang: " << sotrang;
	}
	~Sach(){}
};
