#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(int argc, char* argv[])
{
	cout << fixed;
	cout << setprecision(2);
	int N,i;
	float S;
	S = 0;
	do
	{
		cout << "nhap so N : ";
		cin >> N;
	}
	while (N <= 0);
	for (i = 1; i <= N; i++)
	{
		S = S + (1 / (float)i);
	}
	cout << "S = " << S << endl;
	system("pause");
	return 0;
}