#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "nhap mot ki tu : ";
	char character;
	cin >> character;
	cout << "ki tu nay trong ASCII la : ";
	cout << (int)character << endl;
	cout << "nhap mot so nguyen trong khoang tu 1 toi 255 : ";
	int songuyen;
	cin >> songuyen;
	if (songuyen >= 1 && songuyen <= 255)
	{
		cout << "ki tu tuong ung trong ASCII la : ";
		cout << (char)songuyen << endl;
	}
	else
	{
		cout << "ban nhap sai yeu cau" << endl;
	}

	system("pause");
	return 0;
}