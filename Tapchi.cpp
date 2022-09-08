#include "Tapchi.h"

void Tapchi::input()
{
	TaiLieu::input();
	cout << "\nNhap so phat hanh: "; cin >> soPH;
	cout << "\nNhap thang phat hanh: "; cin >> thangPH;
}
void Tapchi::output()
{
	TaiLieu::output();
	cout << "\nSo phat hanh:" << soPH;
	cout << "\nThang phat hanh:" << thangPH;
}