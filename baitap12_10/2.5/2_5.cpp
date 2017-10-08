// tim uoc chung lon nhat cua 2 so

#include<iostream>
using namespace std;

void solution(int x, int y)
{
	while (x != y)
	{
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}
	cout << "uoc chung lon nhat : " << x << endl;
}
int main(int argc, char* argv[])
{
	int a, b;
	cout << "nhap so thu nhat : ";
	cin >> a;
	cout << "nhap so thu hai : ";
	cin >> b;
	solution(a, b);
	system("pause");
	return 0;
}