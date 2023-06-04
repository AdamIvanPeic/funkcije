#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

long long int fakt(int);
long long int dnan(long long int);

long long int fakt(int n)
{
    long long int br = 1;
    for(int i = 2; i <= n; i++)
        br *= i;
    return br;
}
long long int dnan(long long int n)
{
    long long int br = 1;
    for(int i = 1; i <= n; i++)
        br *= 2;
    return br;
}
int main(void)
{
    int n;
    cin >> n;

    cout << dnan(n)*fakt(n);

    return 0;
}
