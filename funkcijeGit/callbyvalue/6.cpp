#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int znamenke(int);
int znamenke(int n)
{
    int cpy = n;
    bool flag = false;
    while(cpy != 0)
    {
        int z = cpy % 10;
        if(z % 2 == 0)
        {
            flag = true;
            break;
        }
        cpy /= 10;
    }
    if(flag == false)
        return 0;
    else
        return n;
}
int main(void)
{
    int n, br = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        br += znamenke(p);
    }

    if(br == 0)
    {
        cout << "-";
        return 0;
    }

    cout << br;

    return 0;
}
