#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int X, N;
	float S, i;
	S = 0.0;
	do
	{
		cout << "nhap X : ";
		cin >> X;
		cout << "nhap N : ";
		cin >> N;
	} while (N <= 0);
	for(i=1;i<=N;i++)
	{
		S += pow(X, 2 * N);
	}
	cout << "S = " << S << endl;
	system("pause");
	return 0;
}