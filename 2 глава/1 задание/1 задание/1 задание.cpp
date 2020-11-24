#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int gal;
    cout << "введите количество галонов= ";
    cin >> gal;
    cout << "количество метров кубических = " << gal / 7.481;

}
