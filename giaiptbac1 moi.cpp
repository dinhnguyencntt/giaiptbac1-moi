#include <iostream>
using namespace std;
int main() {
	int a, b;
	float x;
	cout << "ung dung giai phuong trinh bac I\n";
	cout << "nhap a:"; cin >> a;
	cout << "nhap b:"; cin >> b;
	if (a == 0)
	{
		if (b != 0)
		{
			cout << "pt vô nghiem\n";
		}
		else {
			cout << "pt dung voi moi x\n";
		}
	}
	else {
		x = (float)-b / a;
		cout << "ket qua x=" << x << endl;
	}
	return 0;
 }