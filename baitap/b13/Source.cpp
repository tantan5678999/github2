#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char* argv[])
{
	int X, N;
	float S, i;
	cout << fixed;
	cout << setprecision(5);
	S = 0.0;

	do
	{
		cout << "nhap X : ";
		cin >> X;
		cout << endl << "nhap N : ";
		cin >> N;
		cout << endl;
	} while (N <= 0);
	for(i=1;i<=N;i++)
	{
		S += pow(X, i);
	}
	cout << " S = " << S << endl<<endl;
	system("pause");
	return 0;
}