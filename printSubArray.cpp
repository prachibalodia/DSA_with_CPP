#include <iostream>
using namespace std;
//sum of all the subArrays
void printSubArray(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            {
                
                sum= sum+arr[k];
            }
            cout<<sum<<endl;
            if(j==n-1)
            {
                cout<<"Largest sum "<<sum<<endl;
            }
        }
        cout<<endl;
    }
}
int main()
{
 int arr[]= {10,20,30,40,50,60};
 int n= sizeof(arr)/sizeof(int);
 printSubArray(arr,n);
return 0;
}