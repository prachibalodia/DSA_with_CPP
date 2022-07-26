#include <iostream>
using namespace std;
int linearSearch(int arr[], int n,int key)
{
    //check if the given element is present in the array

    for(int i=0;i<n;i++)
    {
        if(arr[i]== key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
int arr[]= {1,4,5,6,7,8,9,2,3};
int n=sizeof(arr)/sizeof(int);
int key;
cin>>key;
int index= linearSearch(arr,n,key);
if(index!=-1)
{
    cout<<key<<" is present at index "<<index<<endl;
}
else{
    cout<<key<<" is not found"<<endl;
}
 
return 0;
}