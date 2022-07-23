/* palindromic problem
    1
   212
  32123
 4321234
543212345
*/
#include<iostream>
using namespace std;
int main()
{
    int n=5
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<= n-i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        for(int k=2;k<=i;k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
}

////////////////////////////////////////////////
/*
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k = i, j;
        for (; j <= n; j++)
        {
            cout << k--;
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++;
        }
        cout << endl;
    }
} */
