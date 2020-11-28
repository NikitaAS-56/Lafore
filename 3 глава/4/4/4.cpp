
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, " ");
	float a, b;
	char sn, ch;

	ch ='y';
	while (ch=='y')
	{

		cin >> a >> sn >> b;
		switch (sn)
		{
		case '+': {
			cout << a + b;
			break;
		}
		case '-': {
			cout << a - b;
			break;
		}
		case '*': {
			cout << a * b;
			break;
		}
		case '/': {
			cout << a / b;
			break;
		}
		default:
			break;
		}
		cout << "провести еще одну операцию(y/n)";
		cin >> ch;
		if (ch == 'n') break;
	}
	}
	


