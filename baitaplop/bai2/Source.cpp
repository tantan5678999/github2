#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << " nhap nam sinh : ";
	int namsinh, tuoi;
	cin >> namsinh;
	tuoi = 2017 - namsinh;
	cout << " ban sinh nam " << namsinh << " vay ban " << tuoi << " tuoi" << endl;

	system("pause");
	return 0;
}