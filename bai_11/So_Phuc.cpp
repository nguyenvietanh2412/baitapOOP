#include<iostream>
using namespace std;

class So_Phuc
{
	double real, imag;
public:
	So_Phuc() {}
	So_Phuc(double &r, double &i)
	{
		real = r;
		imag = i;
	}
	So_Phuc operator + (So_Phuc const& obj)
	{
		So_Phuc c_num;
		c_num.real = real + obj.real;
		c_num.imag = imag + obj.imag;
		return c_num;
	}
	So_Phuc operator * (So_Phuc const& obj)
	{
		So_Phuc c_num;
		c_num.real = real * obj.real;
		c_num.imag = imag * obj.imag;
		return c_num;
	}
	void Out()
	{
		cout <<real << " +i" <<imag << endl;
	}
};
int main()
{
	double r, i;
	cout << "Enter complex number a: ";
	cout << "\nReal : "; cin >> r;
	cout << "Imag : ";
	cin >> i;
	So_Phuc a(r,i);
	cout << "Enter complex number b: ";
	cout << "\nReal : ";
	cin >> r;
	cout << "Imag : ";
	cin >> i;
	So_Phuc b(r, i);
	cout << "Number a: ";
	a.Out();
	cout << "Number b: ";
	b.Out();
	So_Phuc c;
	c = a + b;
	cout << "Number c = a + b : ";
	c.Out();
	c = a * b;
	cout << "Number c = a * b : ";
	c.Out();
	return 0;

}
