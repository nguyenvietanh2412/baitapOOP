#include"Tuyensinh.h"

int main()
{
	Tuyensinh* tsTHPT = new Tuyensinh;
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
