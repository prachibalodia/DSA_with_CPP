#include <iostream>
using namespace std;
int main()
{
    char a[100] = {'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e'}; // will give garbage values on printing
    char b[100] = "abcdefgh";                                                                       // wont give any garbage value on printing
    char c[100] = {'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', '\0'};                                   // wont give any garbage value on printing

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    char sen[1000];
    char temp;
    int l = 0;
    while (temp != '#')
    {
        temp = cin.get();
        sen[l] = temp;
        l++;
    }
    sen[l] = '\0'; // to prevent all the garbage values

    cout << "Length " << l << endl;

    cout << sen << endl;
    return 0;
}