#include<iostream>
#include<string>
#include<vector>
using namespace std;
class thisinh
{
protected:
	string hoten, diachi, khoithi;
	int mucuutien;
public:
	int TS;
	char sbd[10];
	virtual void input()
	{
		cin.ignore();
		cout << "\nNhap so bao danh: "; cin.getline(sbd, 10);
		cout << "\nNhap ho va ten thi sinh: "; getline(cin, hoten);
		cout << "\nNhap dia chi: "; getline(cin, diachi);
		cout << "\nNhap muc uu tien: "; cin >> mucuutien;
		cin.ignore();
		//cout << "\nNhap khoi thi: "; getline(cin, khoithi);
	}
	virtual void output()
	{
		cout << "\nSo bao danh: " << sbd;
		cout << "\nHo va ten: " << hoten;
		cout << "\nDia chi: " << diachi;
		cout << "\nMuc uu tien: " << mucuutien;
		//cout << "\nKhoi thi: " << khoithi;
	}
	int getTS()
	{
		return TS;
	}
	void setTS(int tl)
	{
		TS = tl;
	}
	~thisinh() {}
};
class khoiA : public thisinh
{
public:
	void input()
	{
		cout << "\nThem thi sinh khoi A:";
		thisinh::input();
		cout << "\nKhoi thi: Toan, Ly, Hoa";
	}
	void output()
	{
		thisinh::output();
		cout << "\nKhoi thi: Toan, Ly, Hoa";
	}
	~khoiA(){}
};
class khoiB : public thisinh
{
public:
	void input()
	{
		cout << "\nThem thi sinh khoi B:";
		thisinh::input();
		cout << "\nKhoi thi: Toan, Hoa, Sinh";
	}
	void output()
	{
		thisinh::output();
		cout << "\nKhoi thi: Toan, Hoa, Sinh";
	}
	~khoiB() {}
};
class khoiC : public thisinh
{
public:
	void input()
	{
		cout << "\nThem thi sinh khoi C:";
		thisinh::input();
		cout << "\nKhoi thi: Van, Su, Dia";
	}
	void output()
	{
		thisinh::output();
		cout << "\nKhoi thi: Van, Su, Dia";
	}
	~khoiC() {}
};
class TuyenSinh
{
private:
	vector<thisinh*> ts;
public:
	void input()
	{
		int x;
		cout << "\nBan muon them thi sinh khoi nao: ";
		cin >> x;
		thisinh* hs;
		switch (x)
		{
		case 1:
			hs = new khoiA;
			hs->input();
			hs->setTS(1);
			ts.push_back(hs);
			break;
		case 2:
			hs = new khoiB;
			hs->input();
			hs->setTS(2);
			ts.push_back(hs);
			break;
		case 3:
			hs = new khoiC;
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
int main()
{
	TuyenSinh* tsTHPT = new TuyenSinh;
	int luachon;
	while (true)
	{
		cout << "\n\t\t===================MENU==================";
		cout << "\n1. Them thi sinh";
		cout << "\n2. Tim kiem theo so bao danh";
		cout << "\n3. Hien thi thong tin thi sinh";
		cout << "\n0. Thoat!";
		cout << "\nNhap lua chon: "; cin >> luachon;
		switch (luachon)
		{
		case 1:
			cout << "\nKhoi thi THPTQG : ";
			cout << "\n1. Khoi A";
			cout << "\n2. Khoi B";
			cout << "\n3. Khoi C";
			tsTHPT->input();
			break;
		case 2:
			tsTHPT->timthisinh();

			break;
		case 3:
			cout << "\n\t\t=============DANH SACH THI SINH===============";
			tsTHPT->output();
			break;
		case 0:
			break;
		default:
			cout << "Moi nhap lai!"; break;
		}
		if (luachon == 0) { break; }
	}
	delete tsTHPT;
	return 0;
}
