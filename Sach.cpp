#include "Sach.h"

void Sach::input()
{
	TaiLieu::input();
	cin.ignore();
	cout << "\nNhap ten tac gia: "; cin.getline(tacgia, 25);
	cout << "\nNhap so trang: "; cin >> sotrang;
}
void Sach::output()
{
	TaiLieu::output();
	cout << "\nTac gia: " <<tacgia;
	cout << "\nSo trang: " << sotrang;
}