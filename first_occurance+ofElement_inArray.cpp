#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int k){
    if(n == 0){
        return -1;
    }
    if(arr[0] == k){
        return 0;
    }
    int subIndex= firstOcc(arr+1, n-1, k);
    if(subIndex != -1){
        return subIndex+1;
    }
    return -1;
}
int main()
{
 int arr[] = {1,2,3,4,5,6,7};
 int n= sizeof(arr)/sizeof(int);
 int k= 4;
 int ans= firstOcc(arr, n,k);
 cout<< ans<< endl;
return 0;
}