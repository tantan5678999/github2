#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(int argc, char* argv[])
{
	int N, i;
	float S;
	S = 0;
	do
	{
		cout << "nhap so N : ";
		cin >> N;
	} while (N <= 0);
	for (i = 1; i <= N; i++)
	{
		S += i;
	}
	cout << "gia tri cua S = " << S << endl;
	system("pause");
	return 0;
}