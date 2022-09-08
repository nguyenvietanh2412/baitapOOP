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
	void input();
	void output();
	~Sach(){}
};

