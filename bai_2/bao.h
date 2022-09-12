#pragma once
#include<iostream>
#include"TaiLieu.h"
class Bao : public TaiLieu
{
private:
	char ngayPH[15];
public:
	void input()
	{
		TaiLieu::input();
		cin.ignore();
		cout << "\nNhap ngay phat hanh: "; cin.getline(ngayPH, 15);
	}
	void output()
	{
		TaiLieu::output();
		cout << "\nNgay phat hanh: " << ngayPH;
	}
	~Bao(){}
};
