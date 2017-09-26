#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define PI 3.141592654

int main(int argc, char* argv[])
{
	int x;
	double y1, y2, a, b;
	cout << " nhap so x : ";
	cout << fixed;
	cout << setprecision(2);
	cin >> x;
	y1 = 4 * (x*x + 10 * x*sqrt(x) + 3 * x + 1);

	a = (sin(PI*x*x) + x*x + 1);
	b = (exp(2 * x) + cos((PI / 4)*x));
	y2 = a / b;

	cout << " gia tri y1 = " << y1 << endl;
	cout << " gia tri y2 = " << y2 << endl;

	system("pause");
	return 0;
}