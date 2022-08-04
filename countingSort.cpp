#include <iostream>
#include<vector>
using namespace std;
void countSort(int arr[], int n)
{
    int largest= -1;
    for(int i=0;i<n;i++)
    {
        largest= max(largest, arr[i]);
    }

    //creating a count vector
    vector<int> count(largest+1, 0);

    //entering values in the count vector
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    //putting back sorted values in theoriginal array
    int j=0;
    for(int i=0; i<=largest;i++) //values of array
    {
        while(count[i]>0)
        {
            arr[j]=i;
            count[i]--;
            j++;
        }
    }
    return;
}
int main()
{
    int arr[]= {8,9,5,3,5,1,2,8,4,4,3,2,1};
    int n= sizeof(arr)/sizeof(int);
    countSort(arr,n);
 for(auto x:arr)
 {
    cout<<x<<" ";

 }
return 0;
}