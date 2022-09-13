#pragma once
#include"Canbo.h"

class KySu : public Canbo
{
private:
	string nganh;
public:
	void nhapthongtin()
	{
		cout << "\nThem ky su moi: " << endl;
		Canbo::nhapthongtin();
		cout << "\nNganh dao tao: ";
		getline(cin, nganh);
	}
	void xuatthongtin()
	{
		Canbo::xuatthongtin();
		cout << "\nChuc vu : Ky su";
		cout << "\nNganh dao tao: " << nganh;
	}
	~KySu() {}
};

