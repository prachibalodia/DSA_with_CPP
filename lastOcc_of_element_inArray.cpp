#include <iostream>
using namespace std;
int lastOcc(int arr[], int n, int k)
{
    if (n == 0)
    {
        return -1;
    }

    int subIndex = lastOcc(arr + 1, n - 1, k);
    if (subIndex == -1)
    {
        if (arr[0] == k)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return subIndex + 1;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 6, 8, 6, 9};
    int n = sizeof(arr) / sizeof(int);
    int k = 6;
    int ans = lastOcc(arr, n, k);
    cout << ans << endl;
    return 0;
}