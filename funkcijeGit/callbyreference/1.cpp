#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void unos(int &);
void suma1(int &, int &);
void suma2(int &, int &);
void unos(int &n)
{
    cin >> n;
}
void suma1(int &n, int &br)
{
    br = (n/1000)+((n/100)%10);
}
void suma2(int &n, int &br)
{
    br = (n%10)+((n/10)%10);
}
int main(void)
{
    int n;
    unos(n);
    int br = 0;
    suma1(n, br);
    cout << "T + S = " << br << endl;
    suma2(n, br);
    cout << "D + J = " << br;
}

