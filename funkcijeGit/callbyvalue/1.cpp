#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int bz(int broj)
{
    int zbr = 0;
    while(broj != 0)
    {
        zbr += broj % 10;
        broj /= 10;
    }
    return zbr;
}
int main(void)
{
    int n;
    cin >> n;

    if(n < 100 || n > 999)
        return 0;
    if(n / bz(n) == 37)
        cout << "DA";
    else
        cout << "NE";
}
