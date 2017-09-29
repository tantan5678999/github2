#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	float a, b, c, d, M, N, P;
	cout << " nhap a : ";
	cin >> a;
	cout << " nhap b : ";
	cin >> b;
	cout << " nhap c : ";
	cin >> c;
	cout << " nhap d : ";
	cin >> d;
	M = max(a, b);
	N = max(c, d);
	P = max(M, N);
	
	cout << " so lon nhat la : " << P << endl;
	system("pause");
	return 0;
}