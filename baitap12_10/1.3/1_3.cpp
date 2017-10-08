// tim min max trong 4 so

#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	float a, b, c, d;
	do
	{
		cout << "\n   TIM MIN MAX 4 SO KHAC NHAU \n";
		cout << "\n \nnhap so thu nhat : ";
		cin >> a;
		cout << "nhap so thu hai : ";
		cin >> b;
		cout << "nhap so thu ba : ";
		cin >> c;
		cout << "nhap so thu tu : ";
		cin >> d;
	} while (a == b || b == c || c == d || a == c || a == d || b == d);

	// a dung dau

	if (a > b&&b > c&&c > d)
	{
		cout << "\n so lon nhat la : " << a << endl;
		cout << "\n so nho nhat la : " << d << endl << endl;
	}
	else if(a>b&&b>d&&d>c)
	{
		cout << "\n so lon nhat la : " << a << endl;
		cout << "\n so nho nhat la : " << c << endl << endl;
	}
	else if(a>c&&c>b&&b>d)
	{
		cout << "\n so lon nhat la : " << a << endl;
		cout << "\n so nho nhat la : " << d << endl << endl;
	}
	else if(a>c&&c>d&&d>b)
	{
		cout << "\n so lon nhat la : " << a << endl;
		cout << "\n so nho nhat la : " << b << endl << endl;
	}
	else if(a>d&&d>b&&b>c)
	{
		cout << "\n so lon nhat la : " << a << endl;
		cout << "\n so nho nhat la : " << c << endl << endl;
	}
	else if(a>d&&d>c&&c>b)
	{
		cout << "\n so lon nhat la : " << a << endl;
		cout << "\n so nho nhat la : " << b << endl << endl;
	}

	// b dung dau

	else if(b>a&&a>c&&c>d)
	{
		cout << "\n so lon nhat la : " << b << endl;
		cout << "\n so nho nhat la : " << d << endl << endl;
	}
	else if(b>a&&a>d&&d>c)
	{
		cout << "\n so lon nhat la : " << b << endl;
		cout << "\n so nho nhat la : " << c << endl << endl;
	}
	else if(b>c&&c>a&&a>d)
	{
		cout << "\n so lon nhat la : " << b << endl;
		cout << "\n so nho nhat la : " << d << endl << endl;
	}
	else if(b>c&&c>d&&d>a)
	{
		cout << "\n so lon nhat la : " << b << endl;
		cout << "\n so nho nhat la : " << a << endl << endl;
	}
	else if(b>d&&d>c&&c>a)
	{
		cout << "\n so lon nhat la : " << b << endl;
		cout << "\n so nho nhat la : " << a << endl << endl;
	}
	else if(b>d&&d>a&&a>c)
	{
		cout << "\n so lon nhat la : " << b << endl;
		cout << "\n so nho nhat la : " << c << endl << endl;
	}

	// c dung dau

	else if(c>a&&a>b&&b>d)
	{
		cout << "\n so lon nhat la : " << c << endl;
		cout << "\n so nho nhat la : " << d << endl << endl;
	}
	else if(c>a&&a>d&&d>b)
	{
		cout << "\n so lon nhat la : " << c << endl;
		cout << "\n so nho nhat la : " << b << endl << endl;
	}
	else if(c>b&&b>a&&a>d)
	{
		cout << "\n so lon nhat la : " << c << endl;
		cout << "\n so nho nhat la : " << d << endl << endl;
	}
	else if(c>b&&b>d&&d>a)
	{
		cout << "\n so lon nhat la : " << c << endl;
		cout << "\n so nho nhat la : " << a << endl << endl;
	}
	else if(c>d&&d>a&&a>b)
	{
		cout << "\n so lon nhat la : " << c << endl;
		cout << "\n so nho nhat la : " << b << endl << endl;
	}
	else if(c>d&&d>b&&b>a)
	{
		cout << "\n so lon nhat la : " << c << endl;
		cout << "\n so nho nhat la : " << a << endl << endl;
	}

	// d dung dau

	else if(d>a&&a>b&&b>c)
	{
		cout << "\n so lon nhat la : " << d << endl;
		cout << "\n so nho nhat la : " << c << endl << endl;
	}
	else if(d>a&&a>c&&c>b)
	{
		cout << "\n so lon nhat la : " << d << endl;
		cout << "\n so nho nhat la : " << b << endl << endl;
	}
	else if(d>b&&b>a&&a>c)
	{
		cout << "\n so lon nhat la : " << d << endl;
		cout << "\n so nho nhat la : " << c << endl << endl;
	}
	else if(d>b&&b>c&&c>a)
	{
		cout << "\n so lon nhat la : " << d << endl;
		cout << "\n so nho nhat la : " << a << endl << endl;
	}
	else if(d>c&&c>a&&a>b)
	{
		cout << "\n so lon nhat la : " << d << endl;
		cout << "\n so nho nhat la : " << b << endl << endl;
	}
	else if(d>c&&c>b&&b>a)
	{
		cout << "\n so lon nhat la : " << d << endl;
		cout << "\n so nho nhat la : " << a << endl << endl;
	}

	system("pause");
	return 0;
}