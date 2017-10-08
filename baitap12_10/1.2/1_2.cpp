// nhap 3 canh tam giac, xet tam giac

#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	float a, b, c;
	cout << "nhap do dai canh a : ";
	cin >> a;
	cout << "nhap do dai canh b : ";
	cin >> b;
	cout << "nhap do dai canh c : ";
	cin >> c;
	if ((a + b > c) && (b + c > a) && (c + a > b))
	{
		if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a))
			cout << "\n day la tam giac vuong \n";
		else if ((a == b&&c == sqrt(2)*a) || (b == c&&a == sqrt(2)*b || a == c&&b == sqrt(2)*a))
			cout << "\n day la tam giac vuong can \n";
		else if (a == b || a == c || b == c)
			cout << "\n day la tam giac can \n";
		else
			cout << "\n day la tam giac thuong \n";
	}
	else
		cout << "\n day khong la tam giac \n";
	system("pause");
	return 0;
}

