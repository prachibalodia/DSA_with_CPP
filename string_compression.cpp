#include <iostream>
#include <cstring>
using namespace std;
string compressedString(string s)
{
    int n = s.length();
    string output;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 and s[i] == s[i + 1])
        {
            count++;
            i++;
        }
        output += s[i];
        output += to_string(count);
    }
    if (s.length() < output.length())
    {
        return s;
    }
    return output;
}
int main()
{
    string s = "aaabbbccdd";
    string s1 = "abcd";
    cout << compressedString(s) << endl;
    cout << compressedString(s1) << endl;
    return 0;
}