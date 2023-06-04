#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void funk(double &, int &, double &);
void funk(double &n, int &real, double &dec)
{
    real = (int)n;
    dec = n - real;
}
int main(void)
{
    double n;
    cin >> n;
    int real;
    double dec;
    funk(n, real, dec);
    cout << real << endl << dec;
    return 0;
}
