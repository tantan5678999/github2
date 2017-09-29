#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char* argv[])
{
	cout << fixed;
	cout << setprecision(5);
	int N;
	float S, T, i;
	S = 0.0;
	T = 0.0;
	do
	{
		cout << "nhap N : ";
		cin >> N;
	} while (N <= 0);
	for(i=1;i<=N;i++)
	{
		T += i;
		S += 1 / T;
	}
	cout << "S = " << S << endl;
	system("pause");
	return 0;
}