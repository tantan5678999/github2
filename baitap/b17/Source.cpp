#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	float x, y, Max;
	cout << " nhap x : ";
	cin >> x;
	cout << " nhap y : ";
	cin >> y;
	Max = max(x, y);
	cout<<" so lon nhat la : "<<Max<<endl;
	system("pause");
	return 0;
}