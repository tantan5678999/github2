#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << fixed;
	cout << setprecision(2);

	float C, F;
	cout << "Nhap do F : ";
	cin >> F;
	C = (F - 32) / 1.8;
	cout << "chuyen qua do C = " << C << endl;

	system("pause");
	return 0;
}