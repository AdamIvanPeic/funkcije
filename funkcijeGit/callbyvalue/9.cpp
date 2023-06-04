#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void rastav(int);
bool prirodan(int);

void rastav(int n)
{
    int i = 2;
    cout << n << '=' << 1;
    while(n != 1)
    {
        if(n % i == 0)
        {
            n /= i;
            cout << '*' << i;
        }
        else
            i++;
    }
}
bool prirodan(int n)
{
    if(n > 0)
        return true;
    else
        return false;
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

    for(int i = 0; i < n; i++)
        if(prirodan(v.at(i)))
        {
            rastav(v.at(i));
            cout << endl;
        }
        else
            cout << v.at(i) << ":broj negativan ili nula" << endl;

    return 0;
}
