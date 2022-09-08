#include "Bao.h"

void Bao::input()
{
	TaiLieu::input();
	cin.ignore();
	cout << "\nNhap ngay phat hanh: "; cin.getline(ngayPH, 15);
}
void Bao::output()
{
	TaiLieu::output();
	cout << "\nNgay phat hanh: " << ngayPH;
}