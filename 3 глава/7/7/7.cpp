
#include <iostream>
using namespace std;

int main()
{
	float vklad;
	int let;
	float prc;
	cout << " сумма вклада ";
	cin >> vklad;
	cout << " число лет = ";
	cin >> let;
	cout << "процентная ставка = ";
	cin >> prc;

	for (int i = 0; i < let; i++) {

		vklad += (vklad * (prc / 100));
	}
	cout << vklad;
	return 0;
}

