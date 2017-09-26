#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.141592654	

int main(int argc, char* argv[])
{
	cout << " bai toan hinh tru" << endl;
	cout << " ban kinh day la: ";
	float R, h, Sday, Sxq, V;
	cin >> R;
	cout << " chieu cao la: ";
	cin >> h;
	Sday = PI*R*R;
	Sxq = 2 * PI*R*h;
	V = Sday*h;
	cout << " dien tich day la: " << Sday << endl;
	cout << " dien tich xung quanh la: " << Sxq << endl;
	cout << " the tich la: " << V << endl;

	system("pause");
	return 0;
}