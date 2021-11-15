#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, tien;
	cout << " moi nhap so tien can doi " << endl;
	cin >> tien;
	a = tien / 10;
	tien -= a * 10;
	b = tien / 5;
	tien -= b * 5;
	c = tien / 2;
	tien -= c * 2;
	d = tien;
	cout << "so tien ban doi duoc la " << a << " to 10 ngan, " << b << " to 5 ngan, " << c << " to 2 ngan, " << d << " to 1 ngan, " << endl;
	system("pause");
	return 0;
}