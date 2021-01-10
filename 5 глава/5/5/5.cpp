
#include <iostream>
using namespace std;

long hms(int ch,int mn,int sc)
{
	return ch * 3600 + mn * 60 + sc;
}

int main()
{
	setlocale(0, "");
	int ch;
	int mn; 
	int sc;
	char h;
	do
	{
		cout << "введите время в формате ч/м/с \n";
		cin >> ch>>h >> mn>>h >> sc;
		cout<< hms(ch,mn, sc)<<"\n";
		cout << "желаете продолжить (Y/N)";
		cin >> h;
	} while (h=='Y');

}

