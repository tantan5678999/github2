// giai phuong trinh bac hai voi a khac 0

#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	float a, b, c, delta, x1, x2;
	do
	{
		cout << "\n nhap he so a : ";
		cin >> a;
		cout << "\n nhap he so b : ";
		cin >> b;
		cout << "\n nhap he so c : ";
		cin >> c;
	} while (a == 0);
	delta = pow(b, 2) - 4 * a*c;
	if (delta == 0)
	{
		cout << "\n phuong trinh co nghiem kep \n";
		cout << "gia tri cua x la : " << -b / (2 * a) << endl;
	}
	else if (delta < 0)
		cout << "\n phuong trinh vo nghiem \n";
	else if (delta > 0)
	{
		cout << "\n phuong trinh co hai nghiem phan biet : \n";
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

	system("pause");
	return 0;
}