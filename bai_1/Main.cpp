#include"QuanLyCanBo.h"

int main()
{
	QuanLyCanBo* cb = new QuanLyCanBo;
	int luachon;
	while (true)
	{
		cout << "\n------------MENU-------------";
		cout << "\n1. Them can bo moi";
		cout << "\n2. Tim kiem theo ten";
		cout << "\n3. Hien thi danh sach can bo";
		cout << "\n0. Thoat!";
		cout << "\nNhap lua chon: "; cin >> luachon;
		switch (luachon)
		{
		case 1:
			cout << "\nChon chuc vu can bo: ";
			cout << "\n1. Ky su";
			cout << "\n2. Cong nhan";
			cout << "\n3. Nhan vien";
			cb->nhapthongtin();
			break;
		case 2:
			cb->timkiem();

			break;
		case 3:
			cb->xuatthongtin();
			break;
		case 0:
			break;
		default:
			cout << "Moi nhap lai!"; break;
		}
		if (luachon == 0) { break; }
	}
	delete cb;
	return 0;
}