#include <iostream>
using namespace std;
// count the number of alphabets, didgits and spaces in the given input character array
int main()
{
    char ch;
    int alpha = 0, digits = 0, space = 0;
    while (ch != '\n')
    {
        ch = cin.get();
        if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            alpha++;
        }
        else if (ch == ' ' || ch == '\t')
        {
            space++;
        }
    }
    cout << "Alphabets: " << alpha << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << space << endl;

    return 0;
}