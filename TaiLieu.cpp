#include "TaiLieu.h"

void TaiLieu::input()
{
	cin.ignore();
	cout << "\nNhap ma tai lieu: ";
	cin.getline(maTL, 20);
	cout << "\nNhap ten nha xuat ban: ";
	cin.getline(nxb, 20);
	cout << "\nNhap so ban phat hanh: ";
	cin>>soban;
}
void TaiLieu::output()
{
	cout << "\nMa tai lieu: " << maTL;
	cout << "\nNha xuat ban: " << nxb;
	cout << "\nSo ban phat hanh: " << soban;
}

