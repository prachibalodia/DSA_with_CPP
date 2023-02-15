#include <iostream>
using namespace std;
void printArray(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}

//a simple program where a starting point, starting value and length will be given
//we just need to fill up the array

void fillArray(int *arr, int n, int i, int val){
    //base case
    if(i == n){
        printArray(arr, n);
        return;
    }

    //rec case
    arr[i] = val;
    fillArray(arr, n, i+1, val+1);

    //backtracking step
    arr[i]= -1 * arr[i];
}
int main()
{
 int arr[100];
 fillArray(arr, 5, 0, 10);
 printArray(arr, 5);
return 0;
}