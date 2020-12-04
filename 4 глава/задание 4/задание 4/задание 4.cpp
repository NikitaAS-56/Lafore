

#include <iostream>
using namespace std;
struct employee
{
    int number;
    float sp;
};

int main()
{
    setlocale(0, "");
    employee r1, r2, r3;
    cout << "введите номер работника ";
    cin >> r1.number;
    cout << "введите зароботную плату данного работника ";
    cin >> r1.sp;
    cout << "введите номер работника ";
    cin >> r2.number;
    cout << "введите зароботную плату данного работника ";
    cin >> r2.sp;
    cout << "введите номер работника ";
    cin >> r3.number;
    cout << "введите зароботную плату данного работника ";
    cin >> r3.sp;
    system("cls");

    cout << "номер работника " << r1.number<<"\t" << "зароботная плата " << r1.sp<<endl;
    cout << "номер работника " << r2.number<<"\t" << "зароботная плата " << r2.sp << endl;
    cout << "номер работника " << r3.number<<"\t" << "зароботная плата " << r3.sp << endl;
}
