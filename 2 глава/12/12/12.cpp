#include <iostream>
using namespace std;


int main()
{
	setlocale(0, "");
	int pounds, sh, funt, pens;
	float summ;
	float ost;
	cout << "введите сумму";
	cin >> summ;
	
	pounds = static_cast<int>(summ);
	ost = summ - pounds;
	funt = summ;
	sh = 20 * ost;
	pens = (ost*240)-(sh*12) ;
	cout << "Десятичных фунтов " << funt << "." << sh << "." << pens;


}
