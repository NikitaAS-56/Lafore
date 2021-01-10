

#include <iostream>
#include <math.h>
using namespace std;
double pover(double p, int n) {
	return pow(p, n);
 }
int main()

{
	setlocale(0, "");
	int n = 2;
	double p;
	cout << "введите число: ";
	cin >> p;
	cout<< "\n";
	cout << "введите степень ";
	cin>> n;
	cout<< pover(p, n);
	return 0;
}

