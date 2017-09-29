#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int N, X;
	float S, i;
	S = 0.0;
	do
	{
		cout << " nhap lan luot X va N : ";
		cin >> X >> N;
	} while (N <= 0);
	for(i=0;i<=N;i++)
	{
		S += pow(X, 2 * i + 1);
	}
	cout << "S = " << S << endl;
	system("pause");
	return 0;
}