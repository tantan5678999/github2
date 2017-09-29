#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(int argc, char* argv[])
{
	cout << fixed;
	cout << setprecision(5);

	int N;
	float i, S;
	S = 0;

	do
	{
		cout << "Nhap so N : ";
		cin >> N;
	} while (N <= 0);
	for(i=1;i<=N;i++)
	{
		S += 1 / (i*(i + 1));
	}

	cout << "S = " << S << endl;
	system("pause");
	return 0;
}