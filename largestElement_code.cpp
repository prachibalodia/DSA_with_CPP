#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int max=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>max){
        max=arr[i];
        }
        
    }
    return max;
     
}
int main()
{
    vector<int> arr(5);
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
   int l= largestElement(arr);
   cout<<l<<endl;
}