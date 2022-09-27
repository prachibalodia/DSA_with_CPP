// Power of p on n
//power(n,p) where n is the number and p is the power
#include <iostream>
using namespace std;
int Power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    return  n * Power(n, p-1);
}
int main()
{
    int n,p;
    cin >> n;
    cin>>p;
    int ans = Power(n, p);
    cout << ans << endl;
    return 0;
}