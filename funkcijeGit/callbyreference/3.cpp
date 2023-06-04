#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

void unos(int &, int &);
double pov(double, double, double, double);
double sabc(double, double, double);
double str(int, int, int, int);

void unos(int &x, int &y)
{
    cin >> x >> y;
}
double pov(double a, double b, double c, double s)
{
    double p = sqrt(s*(s - a)*(s - b)*(s - c));
    return p;
}
double sabc(double a, double b, double c)
{
    double s = (a + b + c)/2;
    return s;
}
double str(int xa, int xb, int ya, int yb)
{
    double st = sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb));
    return st;
}
int main(void)
{
    int xa, xb, xc, xd, ya, yb, yc, yd;
    double a, b, c, d, di, s1, s2, pov1, pov2;

    unos(xa, ya);
    unos(xb, yb);
    unos(xc, yc);
    unos(xd, yd);

    a = str(xa, xb, ya, yb);
    b = str(xb, xc, yb, yc);
    c = str(xc, xd, yc, yd);
    d = str(xd, xa, yd, ya);
    di = str(xa, xc, ya, yc);

    s1 = sabc(a, b, di);
    s2 = sabc(c, d, di);

    pov1 = pov(a, b, di, s1);
    pov2 = pov(c, d, di, s2);

    cout << pov1 + pov2;

    return 0;
}
