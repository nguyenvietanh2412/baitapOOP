#pragma once
#include"Thisinh.h"

class KhoiA : public Thisinh
{
public:
	void input()
	{
		cout << "\nThem thi sinh khoi A:";
		Thisinh::input();
		cout << "\nKhoi thi: Toan, Ly, Hoa";
	}
	void output()
	{
		Thisinh::output();
		cout << "\nKhoi thi: Toan, Ly, Hoa";
	}
	~KhoiA() {}
};

