#include <iostream>
using namespace std;
void print(int arr[][10], int m, int n)
{
    int startrow = 0;
    int endrow = m - 1;
    int startcol = 0;
    int endcol = n - 1;

    // traversing array boundaries
    while (startrow <= endrow and startcol <= endcol)
    {
        // start row
        for (int i = startcol; i <= endcol; i++)
        {
            cout << arr[startrow][i] << " ";
        }
        // end col
        for (int j = startrow + 1; j <= endrow; j++)
        {
            cout << arr[j][endcol] << " ";
        }
        // end row
        for (int i = endcol - 1; i >= startcol; i--)
        {
            if (startrow == endrow)
            {
                break;
            }
            cout << arr[endrow][i];
        }
        // startcol
        for (int j = endrow - 1; j >= startrow + 1; j--)
        {
            if (startcol == endcol)
            {
                break;
            }
            cout << arr[j][startcol];
        }
        startrow++;
        startcol++;
        endrow--;
        endcol--;
    }
}
int main()
{
    int a[][10] = {1, 2, 3, 4,
                   5, 6, 7, 8,
                   9, 10, 11, 12};
    int m = 4, n = 4;
    print(a, m, n);

    return 0;
}