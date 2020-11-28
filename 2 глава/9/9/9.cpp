#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c, d;
	char sn;
	cout << "введите дробь";
	cin >> a>>sn>> b;
	cin >> c>>sn>> d;
	cout << "сумма равна = " << (a * d + b * c) <<"/" <<(b * d);

}

