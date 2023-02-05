#include <iostream>
using namespace std;
bool isSorted1(int arr[], int n){
    if(n== 1 || n== 0){
        return true;
    }

    if(arr[0]< arr[1] && isSorted1(arr+1, n-1)){
        return true;
    }
    return false;
}

bool isSorted2(int arr[], int i, int n){
    if(i == n-1){
        return true;
    }

    return (arr[i] < arr[i+1] && isSorted2(arr, i+1, n));
}
int main()
{
 int arr[]= {1,2,3,4,5,69,7};
 int n= sizeof(arr)/sizeof(int);
 bool ans1= isSorted1(arr, n);
 bool ans2= isSorted2(arr, 0, n);
 cout<<ans1<<endl;
 cout<<ans2<<endl;
return 0;
}