#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int nbd(int, int);

int nbd(int n, int m)
{
    int br = 0, mx = 0, mxi = 0;
    for(int i = n; i <= m; i++)
    {
        for(int j = 1; j <= i; j++)
            if(i % j == 0)
                br++;
        if(mx < br)
        {
            mx = br;
            mxi = i;
        }
        br = 0;
    }
    return mxi;
}

int main(void)
{
    int n, m;
    cin >> n >> m;

    cout << nbd(n, m);

    return 0;
}
