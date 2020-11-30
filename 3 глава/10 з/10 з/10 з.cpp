
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	bool k;
	float vklad;
	float summ;
	float prc;
	int let = 0;
	cout << " сумма вклада ";
	cin >> vklad;
	cout << " запрашиваемая сумма = ";
	cin >> summ;
	cout << "процентная ставка = ";
	cin >> prc;

	do
	{

		if (vklad > summ){
			
			k = false;
			
	}
		vklad +=  (prc/100 * vklad);
		let++;

	} while (k==true);
	cout << "через  "<<let<<"  на счете будет сумма  "<<summ;
	
	
	return 0;
}

