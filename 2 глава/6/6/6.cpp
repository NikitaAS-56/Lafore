
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int usa;
    cout << "usa= ";
    cin >> usa;
    cout <<" фунт " << usa / 1.487<<endl;
    cout<< "франк "<< usa / 0.172 << endl;
    cout << "марка " << usa / 0.584 << endl;
    cout<<"йена " << usa / 0.00955 << endl;
}
