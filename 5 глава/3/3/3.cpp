

#include <iostream>
using namespace std;
void zero(int& a, int& b) {
	if (a > b) {
		b = 0;
	}
	else a = 0;
}
int main()
{
	int a, b;
	cout << "vvedite 2 hisla";
	cin >> a >> b;
	zero(a, b);
	cout << "proverka: "<<a <<"/"<<b;

}

