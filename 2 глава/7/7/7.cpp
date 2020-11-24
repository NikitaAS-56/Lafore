
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int temp;
	cout << "введите температуру С*= ";
	cin >> temp;
	cout << "температура в градусах Форенгейта= " << (temp * 9 / 5) + 32;
}
