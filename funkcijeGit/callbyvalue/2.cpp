#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool potencija(long long int);
bool potencija(long long int n)
{
    long long int br = 2;
    while(br < n)
    {
        br *= 2;
    }
    if(br == n)
        return true;
    else
        return false;
}
int main(void)
{
    int n;
    cin >> n;
    if(potencija(n))
        cout << "DA";
    else
        cout << "NE";
}
