#pragma once
#include"Thisinh.h"

class KhoiC : public Thisinh
{
public:
	void input()
	{
		cout << "\nThem thi sinh khoi C:";
		Thisinh::input();
		cout << "\nKhoi thi: Van, Su, Dia";
	}
	void output()
	{
		Thisinh::output();
		cout << "\nKhoi thi: Van, Su, Dia";
	}
	~KhoiC() {}
};

