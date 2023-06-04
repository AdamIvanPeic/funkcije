#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

long long int fakt(int);

long long int fakt(int n)
{
    long long int br = 1;
    for(int i = 2; i <= n; i++)
        br *= i;
    return br;
}
int main(void)
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }

    for(int i=0; i<n; i++)
        cout << fakt(v.at(i)) << ' ';

    return 0;
}
