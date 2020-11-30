
#include <iostream>
using namespace std;
int main()
{
	int funt, sh, pens, funt1, sh1, pens1,k;
	int sum_funt, sum_sh, sum_pens;
	char ch;
	cout << "1(+);  2(*);  3(-)";
	cin >> k;
	switch (k)
	{
	case 1: {
		do
		{
			cin >> funt >> sh >> pens;
			cin >> funt1 >> sh1 >> pens1;

			sum_funt = funt + funt1;
			sum_sh = sh + sh1;
			sum_pens = pens + pens1;

			if (sum_pens >= 12) {
				sum_sh += 1;
				sum_pens -= 12;
			}
			cout << sum_funt << "/" << sum_sh << "/" << sum_pens << endl;
			cout << "(y/n) ";
			cin >> ch;
		} while (ch == 'y');
	}

	case 2: {
		do
		{
			cout << "введите сумму";
			cin >> funt >> sh >> pens;
			cout << "введите множитель ";
			cin >> sh1;

			sum_funt = funt* sh1;
			sum_sh = sh * sh1;
			sum_pens = pens * sh1;

			if (sum_pens >= 12) {
				sum_sh += 1;
				sum_pens -= 12;
			}

			if (sum_sh >= 20) {
				sum_funt += 1;
				sum_pens -= 20;
			}
			cout << sum_funt << "/" << sum_sh << "/" << sum_pens << endl;
			cout << "(y/n) ";
			cin >> ch;
		} while (ch == 'y');
	}
	case 3: {
		do
		{
			cin >> funt >> sh >> pens;
			cin >> funt1 >> sh1 >> pens1;

			sum_funt = funt - funt1;
			sum_sh = sh - sh1;
			sum_pens = pens - pens1;

			
			if (sum_sh <= 0) {
				sum_funt -= 1;
				sum_sh += 21;
			}
			if (sum_pens <= 0) {
				sum_sh -= 1;
				sum_pens += 12;
			}
			cout << sum_funt << "/" << sum_sh << "/" << sum_pens << endl;
			cout << "(y/n) ";
			cin >> ch;
		} while (ch == 'y');
	}
	default:
		break;
	}
	
}

