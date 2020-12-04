#include <iostream>
using namespace std;
struct date
{
    int day;
    int mont;
    int yare;
    char ch;
};

int main() 
{
    setlocale(0, "");
    date d1;
    cout << "введите даьту в формате д/м/г  ";
    cin >> d1.day >> d1.ch >> d1.mont >> d1.ch >> d1.yare;
    system("cls");

    cout <<"дата :"<< d1.day << d1.ch << d1.mont << d1.ch << d1.yare;


}
