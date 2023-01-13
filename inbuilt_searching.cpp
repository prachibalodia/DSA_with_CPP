#include <iostream>
#include <vector>
#include <algorithm> //for find method
using namespace std;
int main()
{
    vector<int> v = {1, 2, 4, 7, 9, 3, 5, 7, 6, 2, 11, 1};
    int key;
    cin >> key;

    vector<int>::iterator it = find(v.begin(), v.end(), key);
    if (it != v.end())
    {
        cout << "Present at index " << it - v.begin() << endl;
    }

    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}