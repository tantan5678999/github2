// S=1+1.2+1.2.3+...+1...N

#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int S1, S2, N, i;
	S1 = 0;
	S2 = -1;
	do
	{
		cout << "\nNhap gia tri cua N : ";
		cin >> N;
	} while (N <= 0);
	for (i = 1; i <= N; i++)
	{
		S1 += 1 * i;
		S2 += S1;
	}
	cout << "S = " << S2 << endl;
	system("pause");
	return 0;
}