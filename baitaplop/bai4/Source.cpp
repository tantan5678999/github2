#include<iostream>
#include<cmath>
using namespace std;
#define M_PI 3.141592654
int main(int argc, char* argv[])
{
	cout << "tinh dien tich hinh tron  " << endl;
	cout << "hinh tron co ban kinh la : " ;
	float R, S;
	cin >> R;
	S = R*R*M_PI;
	cout << " dien tich hinh tron la : " << S << endl;

	system("pause");
	return 0;
}