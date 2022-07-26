#include <iostream>
using namespace std;
int maximum_SubarraySum(int arr[], int n)
{
    int cs=0;
    int largest=0;
    for(int i=0;i<n;i++)
    {
        cs= cs+arr[i];
        if(cs<0)
        {
            cs=0;
        }
        largest= max(largest,cs);

    }
    return largest;
    }
int main()
{
 int arr[]= { -1,3,5,-6,7,8,-2,9};
 int n= sizeof(arr)/sizeof(int);
 cout<<maximum_SubarraySum(arr,n) <<endl;
return 0;
}