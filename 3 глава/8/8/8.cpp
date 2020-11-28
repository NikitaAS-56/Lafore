#include <iostream>
using namespace std;
int main()
{
	int funt, sh, pens,funt1, sh1, pens1;
	int sum_funt, sum_sh, sum_pens;
	char ch;
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
		cout << sum_funt << "/" << sum_sh << "/" << sum_pens<<endl;
		cout << "(y/n) ";
		cin >> ch;
	} while (ch=='y');
	
}