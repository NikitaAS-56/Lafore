#include <iostream>
using namespace std;


int main()
{
	setlocale(0, "");
		int funt, sh, pens;
		cout << "введите кольчество фунтов";
		cin >> funt;
		cout << "введите количество шиллингов ";
		cin >> sh;
		cout << "введите количество пенсов ";
		cin >> pens;

		double x = (funt * 20) + sh;
		double k =( x * 12)+pens;
		cout << "Десятичных фунтов " << k / 240;
			
		
	}
	
	

