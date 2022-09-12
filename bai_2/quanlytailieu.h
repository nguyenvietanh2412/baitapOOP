#pragma once
#include<iostream>
#include"Sach.h"
#include"Tapchi.h"
#include"Bao.h"
#include<vector>
using namespace std;

class Quanlytailieu
{
private:
	vector<TaiLieu*> ql_tl;
public:
	void input()
	{
		int x;
		cout << "\nChon loai tai lieu muon them: ";
		cin >> x;
		TaiLieu* tl;
		switch (x)
		{
		case 1:
			tl = new Sach;
			tl->input();
			tl->setTL(1);
			ql_tl.push_back(tl);
			break;
		case 2:
			tl = new Tapchi;
			tl->input();
			tl->setTL(2);
			ql_tl.push_back(tl);
			break;
		case 3:
			tl = new Bao;
			tl->input();
			tl->setTL(3);
			ql_tl.push_back(tl);
			break;
		case 0:
			break;
		default:
			cout << "Moi chon lai loai tai lieu can them!";
			system("pause");
		}
	}
	void output()
	{
		for (int i = 0; i < ql_tl.size(); i++)
		{
			if (ql_tl[i]->getTL() == 1)
			{
				cout << "\n\nTai lieu thu " << i + 1 << " :";
				cout << "\nThe loai : Sach";
				ql_tl[i]->output();
			}
			else if (ql_tl[i]->getTL() == 2)
			{
				cout << "\n\nTai lieu thu " << i + 1 << " :";
				cout << "\nThe loai : Tap chi";
				ql_tl[i]->output();
			}
			else if (ql_tl[i]->getTL() == 3)
			{
				cout << "\n\nTai lieu thu " << i + 1 << " :";
				cout << "\nThe loai : Bao";
				ql_tl[i]->output();
			}
		}
		if (ql_tl.size() == 0) { cout << "\nKHONG CO GI DE HIEN THI !"; }
	}
	void timtailieu()
	{
		int x;
		int dem = 0;
		char maTLcantim[20];
		cout << "\nBan dang tim loai tai lieu nao?";
		cout << "\n1. Sach";
		cout << "\n2. Tap chi";
		cout << "\n3. Bao";
		cout << "\nNhap loai tai lieu can tim:"; cin >> x; cin.ignore();
		cout << "\nNhap ma tai lieu:"; cin.getline(maTLcantim, 20);
		for (int i = 0; i < ql_tl.size(); i++)
		{
			switch (x)
			{
			case 1:
				if (ql_tl[i]->getTL() == 1)
				{
					if (strcmp(ql_tl[i]->maTL, maTLcantim) == 0)
					{
						cout << "\nTAI LIEU CAN TIM DAY: ";
						ql_tl[i]->output();
						dem++;
					}
				}
				break;
			case 2:
				if (ql_tl[i]->getTL() == 2)
				{
					if (strcmp(maTLcantim, ql_tl[i]->maTL) == 0)
					{
						cout << "\nTAI LIEU CAN TIM DAY: ";
						ql_tl[i]->output();
						dem++;
					}
				}
				break;
			case 3:
				if (ql_tl[i]->getTL() == 3)
				{
					if (strcmp(maTLcantim, ql_tl[i]->maTL) == 0)
					{
						cout << "\nTAI LIEU CAN TIM DAY: ";
						ql_tl[i]->output();
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
		if (dem == 0) { cout << "\n\t\t=============KHONG TIM THAY TAI LIEU==============="; }
	}
	void xoatailieu()
	{
		int dem = 0;
		char maTLcanxoa[20];
		cout << "NHAP MA TAI LIEU CAN XOA: "; cin.ignore();
		cin.getline(maTLcanxoa, 20);
		for (int i = 0; i < ql_tl.size(); i++)
		{
			if (strcmp(ql_tl[i]->maTL, maTLcanxoa) == 0)
			{
				ql_tl.erase(ql_tl.begin() + i);
				dem++;
			}
		}
		if (dem == 0) { cout << "\n\t\t=============KHONG THAY TAI LIEU CAN XOA==============="; }
	}
	~Quanlytailieu(){}
};

