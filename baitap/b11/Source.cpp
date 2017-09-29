#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(int argc, char* argv[])
{
	cout << fixed;
	cout << setprecision(5);
	int N;
	float S, i;
	S = 0;

	do
	{
		cout << "Nhap so N : ";
		cin >> N;
	} 
	while (N < 0);
	for (i = 1; i <= N; i++)
	{
		S += (2 * i + 1)/(2 * i + 2);
	}

	cout << "S = " << S << endl;
	system("pause");
	return 0;
}