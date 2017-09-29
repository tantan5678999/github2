#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "nhap lan luot ba canh tam giac : \n";
	cin >> a >> b >> c;
	if (a + b > c&&a + c > b&&b + c > a)
	{
		cout << "day la tam giac \n";
	}
	else
		cout << "day khong phai la tam giac \n";
	system("pause");
	return 0;
}