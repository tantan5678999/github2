#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(int argc, char* argv[])
{
	int k;
	float goc;
	cout << "nhap so do goc ( 0 -> 360k) : ";
	cin >> goc;
	k = goc / 360;
	if (goc >= 0  && goc <= (90 + 360 * k))
	{
		cout << "thuoc goc phan tu thu nhat \n";
	}
	else if (goc >=(90+360*k)&&goc<=(180+360*k))
	{
		cout << "thuoc goc phan tu thu hai \n";
	}
	else if (goc >= (180 + 360 * k) && goc <= (270 + 360 * k))
	{
		cout << "thuoc goc phan tu thu ba \n";
	}
	else if (goc >= (270 + 360 * k) && goc <= (360 * (k + 1)))
	{
		cout << "thuoc goc phan tu thu tu \n";
	}
	else
	{
		cout << "khong thoa yeu cau \n";
	}

	system("pause");
	return 0;
}