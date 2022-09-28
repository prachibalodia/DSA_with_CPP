// to find first and last occurence of an element in an array
// key is the element whose index is to be checked
// i is the pointer
#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return firstOcc(arr, n, i + 1, key);
}

int lastOcc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray= lastOcc(arr, n,i+1,key);
    if(restArray!= -1){
        return restArray;
    }
    if(arr[i]== key){
        return i;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 4, 5, 2, 4, 5, 6, 7, 8, 3, 2, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << firstOcc(arr, n, 0, 2) << endl;
    cout << lastOcc(arr, n, 0, 2) << endl;
    return 0;
}