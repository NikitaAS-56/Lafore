
#include <iostream>
using namespace std;

    struct point
{
        int x;
        int y;
      
};

   
int main()
{
    setlocale(0, "");
    point p1, p2, summ;
    cout << "введите кординаты 1 точки = ";
    cin >> p1.x >> p1.y;
    cout << "введите кординаты 2 точки = ";
    cin >> p2.x >> p2.y;
    cout << "сумма 2 координат " << p1.x + p2.x << "." << p1.y + p2.y;

}

