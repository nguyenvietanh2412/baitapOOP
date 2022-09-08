#pragma once
#include<iostream>
#include"TaiLieu.h"
class Tapchi : public TaiLieu
{
private:
	int soPH, thangPH;
public:
	void input();
	void output();
	~Tapchi(){}
};

