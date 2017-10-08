// tong 1/2 tới 1/2n

#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int i, N;
	float S;
	S = 0.0;
	do
	{
		cout << "\nnhap so N : ";
		cin >> N;
	} while (N <= 0);
	for (i = 1; i <= N; i++)
		S += 1 /float (2 * i);
	cout << "gia tri cua S = " << S << endl;
	system("pause");
	return 0;
}