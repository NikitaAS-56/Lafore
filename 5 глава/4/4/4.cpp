#include <iostream>
using namespace std;
 
struct Distance  
{
	int feet;
	float inches;
};


Distance addengl(Distance dd1, Distance dd2)
{

	if (dd1.feet > dd2.feet) {
		return dd1; 
	}
	else return dd2;

}
void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}
 
int main()
{
	setlocale(0, "");
	Distance d1, d2, d3; 
 
	cout << "\nВведите число футов: "; 
	cin >> d1.feet;
	cout << "Введите число дюймов: "; 
	cin >> d1.inches;
	 
	cout << "\nВведите число футов: "; 
	cin >> d2.feet;
	cout << "Введите число дюймов: "; 
	cin >> d2.inches;
	d3= addengl(d1, d2); 
	cout << endl;
	engldisp(d3);
	return 0;
}
 
