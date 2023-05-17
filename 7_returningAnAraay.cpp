#include <iostream>
using namespace std;
int *fun(int size)
{
    int *p;
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}
int main()
{
    int n = 7;
    int *p = fun(n);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}