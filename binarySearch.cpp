#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid= s+e/2;
        if(key== arr[mid])
        {
            return mid;
        }
        else if(arr[mid]> key)
        {
            e= mid-1;
        }
        else{
            s= mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]= {1,4,5,6,7,3,4,9};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index= binarySearch(arr, n, key);
    if(index!= -1)
    {
        cout<<key<< " is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is not present "<<endl;
    }
 
return 0;
}
