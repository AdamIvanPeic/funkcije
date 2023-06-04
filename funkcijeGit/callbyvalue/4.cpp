#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int funk(double n)
{
    if(n > 0)
        return 1;
    else if(n < 0)
        return -1;
    else
        return 0;
}
int main(void)
{
    int n;
    cin >> n;
    vector<double> a;

    for(int i = 0; i < n; i++)
    {
        double p;
        cin >> p;
        a.push_back(p);
    }

    for(int i = 0; i < n; i++)
        if(funk(a.at(i)) == -1)
            cout << a.at(i) << " ";

    for(int i = 0; i < n; i++)
        if(funk(a.at(i)) == 0)
            cout << a.at(i) << " ";

    for(int i = 0; i < n; i++)
        if(funk(a.at(i)) == 1)
            cout << a.at(i) << " ";

    return 0;
}
