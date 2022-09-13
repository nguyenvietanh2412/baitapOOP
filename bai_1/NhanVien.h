#pragma once
#include"Canbo.h"

class NhanVien : public Canbo
{
private:
	int capbac;
public:
	void nhapthongtin()
	{
		cout << "\nThem nhan vien moi: " << endl;
		Canbo::nhapthongtin();
		cout << "\nCap bac: "; cin >> capbac;
	}
	void xuatthongtin()
	{
		Canbo::xuatthongtin();
		cout << "\nChuc vu : Nhan vien";
		cout << "\nCap bac: " << capbac;
	}
	~NhanVien() {}
};
