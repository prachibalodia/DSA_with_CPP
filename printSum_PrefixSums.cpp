#include <iostream>
using namespace std;
int sumPrefixSum(int arr[], int n)
{
    int largest=0;
    int prefix[100]={0};
    prefix[0]= arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]= prefix[i-1]+arr[i];

    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum= i>0? prefix[j] - prefix[i-1] : prefix[j];
            largest= max(largest, sum);
            
        }
    }
    return largest;
}
int main()
{
    int arr[]= {1,3,-4,5,-7,9,2};
    int n= sizeof(arr)/sizeof(int);

   cout<< sumPrefixSum(arr,n)<<endl;
 
return 0;
}