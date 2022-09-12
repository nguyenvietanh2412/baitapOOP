#pragma once
#include"Thisinh.h"

class KhoiB : public Thisinh
{
public:
	void input()
	{
		cout << "\nThem thi sinh khoi B:";
		Thisinh::input();
		cout << "\nKhoi thi: Toan, Hoa, Sinh";
	}
	void output()
	{
		Thisinh::output();
		cout << "\nKhoi thi: Toan, Hoa, Sinh";
	}
	~KhoiB() {}
};

