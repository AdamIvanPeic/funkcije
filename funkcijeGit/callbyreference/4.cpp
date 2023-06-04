#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <bitset>
using namespace std;

int pot(int);
int ispis(int);
void split(int, int &, int &);

int pot(int n)
{
    bitset<9> bin(1 << n);
    return (int)(bin.to_ulong());
}
int ispis(int n)
{
    int unos;
    int rez = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> unos;
        int x, y;
        split(unos, x, y);
        rez += y * pot(x);
    }
    return rez;
}
void split(int broj, int &x, int &y)
{
    x = broj % 10;
    broj /= 10;
    y = broj;
}

int main()
{
    int n;
    cin >> n;

    cout << ispis(n);
}
