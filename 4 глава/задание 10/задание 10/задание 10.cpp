#include <iostream>
using namespace std;
struct sterling {
	int funt;
	int sh;
	int pens;

};
int main()
{

	sterling sn1;
	setlocale(0, "");
	double pounds;
	float summ;
	float ost;
	cout << "введите сумму";
	cin >> summ;

	pounds = static_cast<int>(summ);
	ost = summ - pounds;
	sn1.funt = summ;
	sn1.sh = 20 * ost;
	sn1.pens = (ost * 240) - (sn1.sh * 12);
	cout << "Десятичных фунтов " << sn1.funt << "." << sn1.sh << "." << sn1.pens;



}