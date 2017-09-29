#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int N, i;
	float S, T;
	S = 0.0;
	T = 1;
	do
	{
		cout << "nhap N : ";
		cin >> N;
	} while (N <= 0);
	for(i=1;i<=N;i++)
	{
		T *= i;
		S += T;
	}
	cout << "S = " << S << endl;
	system("pause");
	return 0;
}