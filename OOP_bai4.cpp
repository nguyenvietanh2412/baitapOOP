#include<iostream>
#include<string>
#include<vector>
using namespace std;

class nguoi
{
protected:
	string hoten, congviec;
	int tuoi;
	char CMND[12];
public:
	virtual void themnguoi()
	{

		cout << "\nHo va ten: ";		cin.ignore(); getline(cin, hoten);
		cout << "\nTuoi: "; cin >> tuoi;
		cin.ignore();
		cout << "\nCong viec: "; getline(cin, congviec);
		cout << "\nCMND: "; cin.getline(CMND, 12);
	}
	virtual void hienthinguoi()
	{
		cout << "\nHo va ten: " << hoten;
		cout << "\nTuoi: " << tuoi;
		cout << "\nCong viec: " << congviec;
		cout << "\nCMND: " << CMND;
	}
	~nguoi(){}
};
class hogiadinh : public nguoi
{
protected:
	int n_nguoi;
	char diachi[20];
	vector<nguoi*> ql_gd;
public:
	
	void themgd()
	{
		nguoi *hgd = new nguoi;
		cout << "\nSo thanh vien: "; cin >> n_nguoi;
		cout << "\nDia chi nha: ";cin.ignore(); cin.getline(diachi, 20);
		cout << "\nThem thanh vien trong gia dinh: ";
		for (int j = 0; j < n_nguoi; j++)
		{
			cout << "\nThanh vien thu " << j + 1 << " : ";
			hgd->themnguoi();
			ql_gd.push_back(hgd);
		}
	}
	void hienthigd()
	{
		cout << "\nSo thanh vien: " << n_nguoi;
		cout << "\nDia chi nha: " << diachi;
		cout << "\nThong tin cac thanh vien trong gia dinh: ";
		for (int j = 0; j < n_nguoi; j++)
		{
			cout << "\nThanh vien thu " << j + 1 << " : ";
			ql_gd[j]->hienthinguoi();
		}
	}
	~hogiadinh(){}
};

class khupho
{
private:
	int n_hodan;
	vector<hogiadinh*> ql_hodan;
public:
	
	void nhapthongtin()
	{
		hogiadinh *kp = new hogiadinh;
		cout << "\nNhap so ho dan can them: "; cin >> n_hodan;
		ql_hodan.resize(n_hodan);
		for (int i = 0; i < n_hodan; i++)
		{
			cout << "\nNhap thong tin ho gia dinh thu " << i + 1 << " : ";
			kp->themgd();
			ql_hodan.push_back(kp);

		}
	}
	void xuatthongtin()
	{
		for (int i = 0; i <n_hodan; i++)
		{
			cout << "\nThong tin ho gia dinh thu " << i + 1 << " : ";
			ql_hodan[i]->hienthigd();
		}
	}
	~khupho(){}
};
int main()
{
	/*khupho *GD;
	GD.nhapthongtin();
	GD.xuatthongtin();*/
	khupho gd;
	gd.nhapthongtin();
	gd.xuatthongtin();
	return 0;
}
