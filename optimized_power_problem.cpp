#include <iostream>
using namespace std;
int optimizedPower(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int subProb = optimizedPower(n, p / 2);
    int subProbSq = subProb * subProb;

    if (p & 1)
    {
        return n * subProbSq;
    }
    return subProbSq;
}
int main()
{
    int n,p;
    cin>> n>>p;
    int ans = optimizedPower(n, p);
    cout << ans << endl;
    return 0;
}