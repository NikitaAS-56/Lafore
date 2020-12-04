
#include <iostream>
using namespace std;
struct phone
{
	int state;
	int nuber_st;
	int number;
};

void get(phone& ph2) {
	
	 cout << "введите номер телефона ";
		cin >> ph2.state>>ph2. nuber_st >> ph2.number;

}

void print(phone ph2,phone ph1) {

	cout<<"номер телефона  "<< ph2.state <<"-"<< ph2.nuber_st<<"-" << ph2.number<<endl;

	cout <<"номер телефон  "<< ph1.state << "-" << ph1.nuber_st << "-" << ph1.number;
}
int main()
{
	setlocale(0, "");
	phone ph1, ph2;
	get(ph2);
	ph1 = { 37529, 956, 6067 };
	print(ph2, ph1);
}
