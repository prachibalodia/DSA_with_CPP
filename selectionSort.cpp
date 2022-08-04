#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int current = arr[i];
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < current)
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}
int main()
{
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);

    for (auto x : arr)
    {
        cout << x << ",";
    }

    return 0;
}