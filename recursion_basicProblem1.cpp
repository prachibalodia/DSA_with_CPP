// sum of numbers till n
#include <iostream>
using namespace std;
int Sum(int n)
{
    if (n == 0)
    {
        return n;
    }

    return n + Sum(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int ans = Sum(n);
    cout << ans << endl;
    return 0;
}