
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x = 19;
	
	for (int i = 0; i < 10;i++) {

		cout << endl;
		cout << setw(x);
		for (int j = 0; j <10-x ; j++) {
			cout << "*";
			
		}
		x -= 2;
	}
}

