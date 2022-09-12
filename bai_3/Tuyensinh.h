#pragma once
#include"Thisinh.h"
#include"KhoiA.h"
#include"KhoiB.h"
#include"KhoiC.h"
#include<vector>
class Tuyensinh
{
private:
	vector<Thisinh*> ts;
public:
	void input()
	{
		int x;
		cout << "\nBan muon them thi sinh khoi nao: ";
		cin >> x;
		Thisinh* hs;
		switch (x)
		{
		case 1:
			hs = new KhoiA;
			hs->input();
			hs->setTS(1);
			ts.push_back(hs);
			break;
		case 2:
			hs = new KhoiB;
			hs->input();
			hs->setTS(2);
			ts.push_back(hs);
			break;
		case 3:
			hs = new KhoiC;
			hs->input();
			hs->setTS(3);
			ts.push_back(hs);
			break;
		case 0:
			break;
		default:
			cout << "Moi chon lai!";
			system("pause");
		}
	}
	void output()
	{
		for (int i = 0; i < ts.size(); i++)
		{
			if (ts[i]->getTS() == 1)
			{
				cout << "\n\nThi sinh thu " << i + 1 << " :";
				ts[i]->output();
			}
			else if (ts[i]->getTS() == 2)
			{
				cout << "\n\nThi sinh thu " << i + 1 << " :";
				ts[i]->output();
			}
			else if (ts[i]->getTS() == 3)
			{
				cout << "\n\nThi sinh thu " << i + 1 << " :";
				ts[i]->output();
			}
		}
		if (ts.size() == 0) { cout << "\nKHONG CO GI DE HIEN THI !"; }
	}
	void timthisinh()
	{
		int n;
		int dem = 0;
		char sobaodanh[20];
		cout << "\nChon khoi thi can tim ?";
		cout << "\n1. Khoi A";
		cout << "\n2. Khoi B";
		cout << "\n3. Khoi C";
		cout << "\nNhap lua chon: "; cin >> n; cin.ignore();
		cout << "\nNhap so bao danh can tim:"; cin.getline(sobaodanh, 20);
		for (int i = 0; i < ts.size(); i++)
		{
			switch (n)
			{
			case 1:
				if (ts[i]->getTS() == 1)
				{
					if (strcmp(ts[i]->sbd, sobaodanh) == 0)
					{
						cout << "\nTHI SINH TIM DUOC : ";
						ts[i]->output();
						dem++;
					}
				}
				break;
			case 2:
				if (ts[i]->getTS() == 2)
				{
					if (strcmp(sobaodanh, ts[i]->sbd) == 0)
					{
						cout << "\nTHI SINH TIM DUOC: ";
						ts[i]->output();
						dem++;
					}
				}
				break;
			case 3:
				if (ts[i]->getTS() == 3)
				{
					if (strcmp(sobaodanh, ts[i]->sbd) == 0)
					{
						cout << "\n\t==================THI SINH TIM DUOC===================";
						ts[i]->output();
						dem++;
					}
				}
				break;
			case 0:
				break;
			default:
				cout << "\nLua chon sai, moi chon lai.";
			}
		}
		if (dem == 0) { cout << "\n\t\t=============KHONG TIM THAY THI SINH==============="; }
	}
};

