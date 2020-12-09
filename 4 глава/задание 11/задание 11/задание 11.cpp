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
    
    char ch;
    time t1, t2,t3;
    cout << "введите данные в формате ч/м/с=  ";
    cin >> t1.chas >> ch >> t1.min >> ch >> t1.second;
    cout << "введите данные в формате ч/м/с=  ";
    cin >> t2.chas >> ch >> t2.min >> ch >> t2.second;
    /*cout << "введенное время в секундах = ";
    system("cls");*/
    int x= t1.chas * 3600 + t1.min * 60 + t1.second;
    int y = t2.chas * 3600 + t2.min * 60 + t2.second;
    int k= x + y;
    t3.chas = k / 3600;
    float kk= float(k)/3600;
    t3.min = (kk - t3.chas)*60;
    t3.second = (((kk - t3.chas) * 60) - t3.min) * 60;
    cout << t3.chas<<":"<< t3.min<<":"<<t3.second;
}


