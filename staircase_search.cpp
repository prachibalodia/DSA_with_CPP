#include <iostream>
using namespace std;
pair<int, int> staircase_search(int arr[][10], int m, int n, int key)
{
    if (key < arr[0][0] or key > arr[m][n])
    {
        return {-1, -1};
    }
    // staircase_search 
    int i = 0;
    int j = n - 1;
    while (i <= m - 1 and j >= 0)
    {
        if (arr[i][j] == key)
        {
            return {i, j};
        }
        else if (key < arr[i][j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {-1, -1};
}
int main()
{
    int m = 4, n = 3; // m= rowno, n= colno
    int key = 33;
    int a[][10] = {10, 20, 30, 40,
                   15, 25, 35, 45,
                   27, 29, 37, 48,
                   32, 33, 39, 50};
    pair<int, int> p = staircase_search(a, m, n, key);
    cout << p.first << ", " << p.second << endl;

    return 0;
}