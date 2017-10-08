// kiem tra so hoan hao

#include<iostream>
using namespace std;

void test(int x, int S)
{	
	for (int i = 1; i < x; i++)
	{
		if (x%i == 0)
			S += i;
	}
	if (S == x)
		cout << "day la so hoan hao \n";
	else
		cout << "day khong la so hoan hao \n";
	system("pause");
}

int main(int argc, char* argv[])
{
	int N, S;
	S = 0;
	cout << "nhap so N : ";
	cin >> N;
	test(N,S);
	if (S == N)

	return 0;
}