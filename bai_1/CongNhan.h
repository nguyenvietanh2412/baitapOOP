#pragma once
#include"Canbo.h"

class CongNhan : public Canbo
{
private:
	char congviec[20];
public:
	void nhapthongtin()
	{
		cout << "\nThem cong nhan moi: " << endl;
		Canbo::nhapthongtin();
		//cin.ignore();
		cout << "\nCong viec chinh: "; cin.getline(congviec, 20);
	}
	void xuatthongtin()
	{
		Canbo::xuatthongtin();
		cout << "\nChuc vu : Cong nhan";
		cout << "\nCong viec chinh: " << congviec;
	}
	~CongNhan() {}
};

