#pragma once
#include<iostream>
#include"TaiLieu.h"
class Tapchi : public TaiLieu
{
private:
	int soPH, thangPH;
public:
	void input()
	{
		TaiLieu::input();
		cout << "\nNhap so phat hanh: "; cin >> soPH;
		cout << "\nNhap thang phat hanh: "; cin >> thangPH;
	}
	void output()
	{
		TaiLieu::output();
		cout << "\nSo phat hanh:" << soPH;
		cout << "\nThang phat hanh:" << thangPH;
	}
	~Tapchi(){}
};

