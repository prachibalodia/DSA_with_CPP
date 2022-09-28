#include <iostream>
using namespace std;
bool Sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    int sortedArray = Sorted(arr + 1, n-1);
    return (arr[0] < arr[1] && sortedArray);
}
int main()
{
    int arr[] = {4, 6, 7, 3, 2, 9, 1};
    int n = sizeof(arr) / sizeof(int);
    cout<<Sorted(arr, n)<<endl;
    return 0;
}