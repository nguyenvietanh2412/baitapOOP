#pragma once
#include<iostream>
#include"TaiLieu.h"
class Bao : public TaiLieu
{
private:
	char ngayPH[15];
public:
	void input();
	void output();
	~Bao(){}
};

