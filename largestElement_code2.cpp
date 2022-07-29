#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int max = 0;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]>max)
        {
            max = v[i];
        }
    }
    cout<<max<<endl;
}