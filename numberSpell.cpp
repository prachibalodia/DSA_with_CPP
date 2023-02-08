#include <iostream>
using namespace std;
string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void numberSpell(int n)
{
    if (n == 0)
    {
        return;
    }
    int d = n % 10;
    numberSpell(n / 10);
    cout << spell[d] << " ";
}
int main()
{
    int n;
    cin >> n;
    numberSpell(n);
    return 0;
}