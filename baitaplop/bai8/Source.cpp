#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "nhap so tien ( so nguyen dong ) : ";
	int tien, to10, to5, to2, to1, sodukhichia10, sodukhichia5;
	cin >> tien;
	to10 = tien / 10;
	sodukhichia10 = tien % 10;
	to5 = sodukhichia10 / 5;
	sodukhichia5 = sodukhichia10 % 5;
	to2 = sodukhichia5 / 2;
	to1 = sodukhichia5 % 2;

	cout << "so to 10 : " << to10 << endl;
	cout << "so to 5 : " << to5 << endl;
	cout << "so to 2 : " << to2 << endl;
	cout << "so to 1 : " << to1 << endl;

	system("pause");
	return 0;
}