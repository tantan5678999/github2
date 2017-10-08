// tinh tong cac chu so trong so nguyen

#include<iostream>
using namespace std;

void tinh(int x, int S)
{
	S = 0;
	while (x != 0)
	{
		S += x % 10;
		x = x / 10;
	}
	cout << " gia tri S = " << S << endl;
}

int main(int argc, char* argv[])
{
	unsigned int N;
	cout << "nhap so nguyen N : ";
	cin >> N;
	tinh(N, 0);
	system("pause");
	return 0;
}