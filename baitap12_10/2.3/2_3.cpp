// tim cac so nguyen to nho hon N

#include <iostream>
using namespace std;

bool KTSNT(int x)
{
	if (x<2)
		return false;
	for (int i = 2; i <= x / 2; i++)
		if (x%i == 0)
			return false;
	return true;
}

void lietkesnt(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (KTSNT(i) == true)
			cout << i << " ";
	}
}

int main(int argc, char* argv[])
{
	unsigned int n;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	lietkesnt(n);
	cout << endl;
	system("pause");
	return 0;
}