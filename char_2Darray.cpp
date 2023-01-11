#include <iostream>
using namespace std;
int main()
{
    char a[][10] = {"one", "two", "three", "four"};
    cout << a[2] << endl;
    cout << a[2][2] << endl;
    cout << a[3][1] << endl;
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}