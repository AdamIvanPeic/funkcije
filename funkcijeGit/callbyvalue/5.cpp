#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int unos(char);
int najveci(int, int, int);
int najmanji(int, int, int);
int srednji(int, int, int);

int unos(char a)
{
    int n;
    cin >> n;
    return n;
}
int najveci(int a, int b, int c)
{
    return max(a, max(b, c));
}
int najmanji(int a, int b, int c)
{
    return min(a, min(b, c));
}
int srednji(int a, int b, int c)
{
    int mx = najveci(a, b, c);
    int mn = najmanji(a, b, c);
    if(a != mx && a != mn)
        return a;
    else if(b != mx && b != mn)
        return b;
    else
        return c;
}
int main(void)
{
    int a = unos('a');
    int b = unos('b');
    int c = unos('c');

    cout << "Srednji : " << srednji(a, b, c);

    return 0;
}
