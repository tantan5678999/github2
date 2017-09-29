#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char* argv[])
{
	double x, y, z;
	cout << "nhap so x : ";
	cin >> x;
	cout << "nhap so y : ";
	cin >> y;
	cout << "tong binh phuong cua chung la : ";
	z = pow(x, 2) + pow(y, 2);
	cout << z << endl;

	system("pause");
	return 0;
}