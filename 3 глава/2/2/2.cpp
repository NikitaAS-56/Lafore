

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	int temp;
	cin >> a;
	cout << "1  в форенгейты , 2 в цельсии";
	
	switch (a)
	{
	case 1: {
		cout << "введите температуру";
		cin>> temp;
		cout << "температура в градусах Форенгейта ";
		cout << 1.8 * temp + 32;
		break;
	}
	case 2: {
		cout << "введите температуру";
		cin >> temp;
		cout << "температура в градусах Цельсия ";
		cout << temp / 1.8 - 32;
		break;
	}

	default:
		break;
	}

}

