#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <bitset>
using namespace std;

void unos(int &, int &);
void funk(int, int, int, int);

void unos(int &x, int &y)
{
    cin >> x >> y;
}
void funk(int x1, int y1, int x2, int y2)
{
    if(x1 == x2 && y1 == y2)
    {
        cout << "Nemoguce odrediti";
        return;
    }
    else if(x1 == x2)
    {
        cout << "x = " << x1 << endl;
        return;
    }
    else if(y1 == y2)
    {
        cout << "y = " << y1 << endl;
        return;
    }

    double k = (double)(y2 - y1)/(x2 - x1);
    double l = y1 - k*x1;
    l = round(l*100)/100;

    char minusplus = l < 0 ? '-' : '+';
    l = abs(l);

    cout << "y = " << k << "x " << minusplus;
    printf("%.2f", l);
}
int main(void)
{
    int x1, y1, x2, y2;
    unos(x1, y1);
    unos(x2, y2);

    funk(x1, y1, x2, y2);

    return 0;
}
