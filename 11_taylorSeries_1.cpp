#include <iostream>
using namespace std;

double e(int x, int n)
{
    if (n == 0)
        return 1;
    static double p = 1, f = 1;
    double r;
    r = e(x, n - 1);
    p = x * p;
    f = f * n;
    return r+p/f;
}
int main()
{
    cout<<e(4,15); //result of e^x
    return 0;
}