

#include <iostream>
using namespace std;

struct time {
    int second;
    int  min;
    int chas;
};
int main()
{
    setlocale(0, "");
    cout << "введите данные в формате ч/м/с=  ";
    char ch;
    time t1;
    cin >> t1.chas >> ch >> t1.min >> ch >> t1.second;
    cout << "введенное время в секундах = ";
    system("cls");
    cout << t1.chas * 3600 + t1.min * 60 + t1.second;
}


