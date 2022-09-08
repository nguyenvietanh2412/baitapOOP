#include"Sach.h"
#include"Tapchi.h"
#include"Bao.h"
#include"Quanlytailieu.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	Quanlytailieu* tv = new Quanlytailieu;
	int luachon;
	while (true)
	{
		cout << "\n\t\t===================MENU==================";
		cout << "\n1. Them tai lieu moi";
		cout << "\n2. Tim kiem theo loai tai lieu";
		cout << "\n3. Hien thi thong tin tai lieu";
		cout << "\n4. Xoa tai lieu";
		cout << "\n0. Thoat!";
		cout << "\nNhap lua chon: "; cin >> luachon;
		switch (luachon)
		{
		case 1:
			cout << "\nChon loai tai lieu: ";
			cout << "\n1. Sach";
			cout << "\n2. Tap chi";
			cout << "\n3. Bao";
			tv->input();
			break;
		case 2:
			tv->timtailieu();

			break;
		case 3:
			cout << "\n\t\t=============DANH SACH TAI LIEU===============";
			tv->output();
			break;
		case 4:
			tv->xoatailieu();
		case 0:
			break;
		default:
			cout << "Moi nhap lai!"; break;
		}
		if (luachon == 0) { break; }
	}
	delete tv;
	return 0;
}