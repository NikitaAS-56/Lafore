
#include <iostream>
using namespace std;
struct fraction {
	int a;
	int b;

};
int main()
{
	setlocale(0, "");
	fraction d1, d2;

	char sn;
	cout << "введите дробь";
	cin >> d1.a >> sn >>d1.b;
	cin >> d2.a>> sn >> d2.b;
	if ((d1.a * d2.b + d1.b * d2.a) == (d1.b * d2.b)) {
		cout << "сумма равна = " << "1";
	}
	else
	cout << "сумма равна = " << (d1.a * d2.b + d1.b * d2.a) << "/" << (d1.b * d2.b);
	return 0;
}