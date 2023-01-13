#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int calcTotal(vector<int> m)
{
    return m[0] + m[1] + m[2];
}
// defining a comparator
bool compare(pair<string, vector<int>> s1, pair<string, vector<int>> s2)
{
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    return calcTotal(m1) > calcTotal(m2);
}
int main()
{
    vector<pair<string, vector<int>>> smarks = {
        {"Rohan", {10, 20, 11}},
        {"Prateek", {10, 21, 3}},
        {"Vivek", {20, 11, 5}},
        {"Kajal", {11, 23, 8}}};

    sort(smarks.begin(), smarks.end(), compare);

    for (auto s : smarks)
    {
        cout << s.first << " " << calcTotal(s.second) << endl;
    }

    return 0;
}