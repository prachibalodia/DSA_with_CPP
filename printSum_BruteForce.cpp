#include <iostream>
using namespace std;
int sumBruteForce(int arr[], int n)
{
    int largest=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+= arr[k];
            }
            largest= max(largest, sum);
            
        }
    }
    return largest;
}
int main()
{
    int arr[]= {1,3,-4,5,-7,9,2};
    int n= sizeof(arr)/sizeof(int);

   cout<< sumBruteForce(arr,n)<<endl;
 
return 0;
}